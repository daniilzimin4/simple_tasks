#include <iostream>
#include <memory>
#include <string>
#include <grpcpp/grpcpp.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>
#include "employee.grpc.pb.h"
#include <google/protobuf/empty.pb.h>
#include <sqlite3.h>



using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using employee::Employee;
using employee::EmployeeService;
using employee::PositionRequest;
using employee::ManagerIdRequest;
using google::protobuf::Empty;

class Database {
public:
    Database(const std::string& dbPath) : dbPath_(dbPath), db_(nullptr) {
        if (sqlite3_open(dbPath.c_str(), &db_) != SQLITE_OK) {
            std::cerr << "Can't open database: " << sqlite3_errmsg(db_) << std::endl;
        }
    }

    ~Database() {
        if (db_) {
            sqlite3_close(db_);
        }
    }

    bool GetEmployeeById(int id, Employee& employee) {
        std::string sql = "SELECT id, name, position, manager_id FROM Employee WHERE id = ?";
        sqlite3_stmt* stmt;
    
        if (sqlite3_prepare_v2(db_, sql.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
            std::cerr << "Failed to prepare statement: " << sqlite3_errmsg(db_) << std::endl;
            return false;
        }
    
        sqlite3_bind_int(stmt, 1, id);
    
        int result = sqlite3_step(stmt);
        if (result == SQLITE_ROW) {
            employee.set_id(sqlite3_column_int(stmt, 0));
            employee.set_name(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1)));
            employee.set_position(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2)));
            employee.set_manager_id(sqlite3_column_int(stmt, 3));
            sqlite3_finalize(stmt);
            return true;
        } else {
            std::cerr << "Failed to execute statement: " << sqlite3_errmsg(db_) << std::endl;
            sqlite3_finalize(stmt);
            return false;
        }
    }

    bool HaveEmployeeId(int id) {
        std::string sql = "SELECT id, name, position, manager_id FROM Employee WHERE id = ?";
        sqlite3_stmt* stmt;
    
        if (sqlite3_prepare_v2(db_, sql.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
            std::cerr << "Failed to prepare statement: " << sqlite3_errmsg(db_) << std::endl;
            return false;
        }
    
        sqlite3_bind_int(stmt, 1, id);
    
        int result = sqlite3_step(stmt);
        sqlite3_finalize(stmt);
        return (result == SQLITE_ROW);
    }

    bool AddEmployee(const std::string& name, const std::string& position, int managerId) {
        std::string sql = "INSERT INTO Employee (name, position, manager_id) VALUES (?, ?, ?)";
        sqlite3_stmt* stmt;
        if (sqlite3_prepare_v2(db_, sql.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
            std::cerr << "Failed to prepare statement: " << sqlite3_errmsg(db_) << std::endl;
            return false;
        }

        sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(stmt, 2, position.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_int(stmt, 3, managerId);

        int result = sqlite3_step(stmt);
        sqlite3_finalize(stmt);

        if (result != SQLITE_DONE) {
            std::cerr << "Failed to execute statement: " << sqlite3_errmsg(db_) << std::endl;
            return false;
        }

        return true;
    }

    std::vector<std::tuple<int, std::string, std::string, int>> GetAllEmployees() {
        std::vector<std::tuple<int, std::string, std::string, int>> employees;

        std::string sql = "SELECT id, name, position, manager_id FROM Employee";
        sqlite3_stmt* stmt;
        if (sqlite3_prepare_v2(db_, sql.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
            std::cerr << "Failed to prepare statement: " << sqlite3_errmsg(db_) << std::endl;
            return employees;
        }

        while (sqlite3_step(stmt) == SQLITE_ROW) {
            int id = sqlite3_column_int(stmt, 0);
            const unsigned char* name = sqlite3_column_text(stmt, 1);
            const unsigned char* position = sqlite3_column_text(stmt, 2);
            int managerId = sqlite3_column_int(stmt, 3);
            employees.emplace_back(id, std::string(reinterpret_cast<const char*>(name)), std::string(reinterpret_cast<const char*>(position)), managerId);
        }

        sqlite3_finalize(stmt);
        return employees;
    }

    bool DeleteEmployeeById(int id) {
        std::string sql = "DELETE FROM Employee WHERE id = ?";
        sqlite3_stmt* stmt;
        if (sqlite3_prepare_v2(db_, sql.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
            std::cerr << "Failed to prepare statement: " << sqlite3_errmsg(db_) << std::endl;
            return false;
        }

        sqlite3_bind_int(stmt, 1, id);

        int result = sqlite3_step(stmt);
        sqlite3_finalize(stmt);

        if (result != SQLITE_DONE) {
            std::cerr << "Failed to execute statement: " << sqlite3_errmsg(db_) << std::endl;
            return false;
        }

        return true;
    }

    bool SetEmployeePosition(int id, const std::string& new_position) {
        std::string sql = "UPDATE Employee SET position = ? WHERE id = ?";
        sqlite3_stmt* stmt;

        if (sqlite3_prepare_v2(db_, sql.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
            std::cerr << "Failed to prepare statement: " << sqlite3_errmsg(db_) << std::endl;
            return false;
        }

        sqlite3_bind_text(stmt, 1, new_position.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_int(stmt, 2, id);
    
        int result = sqlite3_step(stmt);
        sqlite3_finalize(stmt);

        if (result != SQLITE_DONE) {
            std::cerr << "Failed to execute statement: " << sqlite3_errmsg(db_) << std::endl;
            return false;
        }

        return true;
    }

    bool SetEmployeeManagerId(int id, int new_manager_id) {
        std::string sql = "UPDATE Employee SET manager_id = ? WHERE id = ?";
        sqlite3_stmt* stmt;

        if (sqlite3_prepare_v2(db_, sql.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
            std::cerr << "Failed to prepare statement: " << sqlite3_errmsg(db_) << std::endl;
            return false;
        }

        sqlite3_bind_int(stmt, 1, new_manager_id);
        sqlite3_bind_int(stmt, 2, id);
    
        int result = sqlite3_step(stmt);
        sqlite3_finalize(stmt);

        if (result != SQLITE_DONE) {
            std::cerr << "Failed to execute statement: " << sqlite3_errmsg(db_) << std::endl;
            return false;
        }

        return true;
    }
 


private:
    std::string dbPath_;
    sqlite3* db_;
};

class EmployeeServiceImpl final : public EmployeeService::Service {
public:
    EmployeeServiceImpl(const std::string& dbPath) : db_(dbPath) {}

    Status AddEmployee(ServerContext* context, const Employee* request, Employee* response) override {
        if (request->name().empty() || request->position().empty()) {
            return Status(grpc::INVALID_ARGUMENT, "Name and position must be provided.");
        }

        if (db_.AddEmployee(request->name(), request->position(), request->manager_id())) {
            *response = *request;
            return Status::OK;
        } else {
            return Status(grpc::INTERNAL, "Failed to add employee to the database.");
        }
    }

    Status GetEmployeeById(ServerContext* context, const Employee* request, Employee* response) override {
        int id = request->id();

        if (db_.GetEmployeeById(id, *response)) {
            return Status::OK;
        } else {
            return Status(grpc::NOT_FOUND, "Employee with ID " + std::to_string(id) + " not found.");
        }
    }


    Status GetAllListEmployees(ServerContext* context, const google::protobuf::Empty* request, grpc::ServerWriter<Employee>* writer) override {
        std::vector<std::tuple<int, std::string, std::string, int>> employees = db_.GetAllEmployees();
        for (const auto& employee : employees) {
            Employee grpcEmployee;
            grpcEmployee.set_id(std::get<0>(employee));
            grpcEmployee.set_name(std::get<1>(employee));
            grpcEmployee.set_position(std::get<2>(employee));
            grpcEmployee.set_manager_id(std::get<3>(employee));
            writer->Write(grpcEmployee);
        }
        return Status::OK;
    }

    Status DeleteEmployeeById(ServerContext* context, const Employee* request, Empty* response) override {
        int id = request->id();

        if(!db_.HaveEmployeeId(id)){
            return Status(grpc::NOT_FOUND, "Employee with ID " + std::to_string(id) + " not found.");
        }

        if (db_.DeleteEmployeeById(id)) {
            return Status::OK;
        } else {
            return Status(grpc::INTERNAL, "Failed to delete employee from the database.");
        }
    }

    Status SetEmployeePosition(ServerContext* context, const PositionRequest* request, Employee* response) override {
        int id = request->employee_id();
        std::string new_position = request->new_position();

        if(!db_.HaveEmployeeId(id)){
            return Status(grpc::NOT_FOUND, "Employee with ID " + std::to_string(id) + " not found.");
        }

        if(db_.SetEmployeePosition(id, new_position)){
            if(db_.GetEmployeeById(id, *response)){
                return Status::OK;
            }else{
                return Status(grpc::INTERNAL, "Failed to get employee after setting position");
            }
        }else{
            return Status(grpc::INTERNAL, "Failed to set position for employee");
        }
    }

    Status SetEmployeeManagerId(ServerContext* context, const ManagerIdRequest* request, Employee* response) override {
        int id = request->employee_id();
        int new_manager_id = request->new_manager_id();

        if(!db_.HaveEmployeeId(id)){
            return Status(grpc::NOT_FOUND, "Employee with ID " + std::to_string(id) + " not found.");
        }

        if(db_.SetEmployeeManagerId(id, new_manager_id)){
            if(db_.GetEmployeeById(id, *response)){
                return Status::OK;
            }else{
                return Status(grpc::INTERNAL, "Failed to get employee after setting manager id");
            }
        }else{
            return Status(grpc::INTERNAL, "Failed to set manager id for employee");
        }
    }

private:
    Database db_;
};

void RunServer() {
    std::string server_address("0.0.0.0:50051");
    EmployeeServiceImpl service("employees.db");

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();
}

int main() {
    RunServer();
    return 0;
}
