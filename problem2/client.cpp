#include <iostream>
#include <memory>
#include <grpcpp/grpcpp.h>
#include "employee.grpc.pb.h"
#include <google/protobuf/empty.pb.h>
#include <chrono>


using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using employee::Employee;
using employee::EmployeeService;
using google::protobuf::Empty;
using employee::PositionRequest;
using employee::ManagerIdRequest;

class EmployeeClient {
public:
    EmployeeClient(std::shared_ptr<Channel> channel) : stub_(EmployeeService::NewStub(channel)) {}

    Employee AddEmployee(const std::string& name, const std::string& position, int managerId) {
        Employee employee;
        employee.set_name(name);
        employee.set_position(position);
        employee.set_manager_id(managerId);

        Employee response;
        ClientContext context;
        Status status = stub_->AddEmployee(&context, employee, &response);
        if (status.ok()) {
            return response;
        } else {
            std::cout << "Error: " << status.error_code() << ": " << status.error_message() << std::endl;
            return Employee();
        }
    }

    Employee GetEmployeeById(int id) {
        Employee employee;
        employee.set_id(id);

        Employee response;
        ClientContext context;
        Status status = stub_->GetEmployeeById(&context, employee, &response);
        if (status.ok()) {
            std::cout << "Employee details:" << std::endl;
            std::cout << "ID: " << response.id() << std::endl;
            std::cout << "Name: " << response.name() << std::endl;
            std::cout << "Position: " << response.position() << std::endl;
            std::cout << "Manager ID: " << response.manager_id() << std::endl;
            return response;
        } else {
            std::cout << "Error: " << status.error_code() << ": " << status.error_message() << std::endl;
            return Employee();
        }
    }

    void GetAllEmployees() {
        google::protobuf::Empty request;
        ClientContext context;
        std::unique_ptr<grpc::ClientReader<Employee>> reader(stub_->GetAllListEmployees(&context, request));

        Employee employee;
        while (reader->Read(&employee)) {
            std::cout << "ID: " << employee.id() << ", Name: " << employee.name() << ", Position: " << employee.position() << ", Manager ID: " << employee.manager_id() << std::endl;
        }
        Status status = reader->Finish();
        if (!status.ok()) {
            std::cout << "Error: " << status.error_code() << ": " << status.error_message() << std::endl;
        }
    }

    void DeleteEmployeeById(int id){
        Employee request;
        request.set_id(id);

        Empty response;
        ClientContext context;
        Status status = stub_->DeleteEmployeeById(&context, request, &response);
        if(status.ok()){
            std::cout << "Employee with ID " << id << " has been deleted." << std::endl;
        }else{
            std::cout << "Error: " << status.error_code() << ": " << status.error_message() << std::endl;
        }
    }

    void SetEmployeePosition(int employee_id, const std::string& new_position) {
        PositionRequest request;
        request.set_employee_id(employee_id);
        request.set_new_position(new_position);
    
        Employee response;
        ClientContext context;
        Status status = stub_->SetEmployeePosition(&context, request, &response);
        if (status.ok()) {
            std::cout << "Position for employee with ID " << employee_id << " has been set to: " << new_position << std::endl;
            std::cout << "Employee details:" << std::endl;
            std::cout << "ID: " << response.id() << std::endl;
            std::cout << "Name: " << response.name() << std::endl;
            std::cout << "Position: " << response.position() << std::endl;
            std::cout << "Manager ID: " << response.manager_id() << std::endl;
        } else {
            std::cout << "Error: " << status.error_code() << ": " << status.error_message() << std::endl;
        }
    }

    void SetEmployeeManagerId(int employee_id, int managerId) {
        ManagerIdRequest request;
        request.set_employee_id(employee_id);
        request.set_new_manager_id(managerId);
    
        Employee response;
        ClientContext context;
        Status status = stub_->SetEmployeeManagerId(&context, request, &response);
        if (status.ok()) {
            std::cout << "ManagerId for employee with ID " << employee_id << " has been set to: " << managerId << std::endl;
            std::cout << "Employee details:" << std::endl;
            std::cout << "ID: " << response.id() << std::endl;
            std::cout << "Name: " << response.name() << std::endl;
            std::cout << "Position: " << response.position() << std::endl;
            std::cout << "Manager ID: " << response.manager_id() << std::endl;
        } else {
            std::cout << "Error: " << status.error_code() << ": " << status.error_message() << std::endl;
        }
    }

    double MeasurePerformanceAddEmployee(int num_requests) {
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 1; i <= num_requests; ++i) {
            Employee employee;
            employee.set_name("1");
            employee.set_position("2");
            employee.set_manager_id(0);

            Employee response;
            ClientContext context;
            Status status = stub_->AddEmployee(&context, employee, &response);
            if (!status.ok() && status.error_code()!= grpc::StatusCode::NOT_FOUND) {
                std::cerr << "RPC failed: " << status.error_code() << ": " << status.error_message() << std::endl;
                break;
            }
        }

        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end - start;
        return num_requests / duration.count();
    }

    double MeasurePerformanceSetEmployeePosition(int num_requests) {
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 1; i <= num_requests; ++i) {
            PositionRequest request;
            request.set_employee_id(i);
            request.set_new_position("pos_x");
        
            Employee response;
            ClientContext context;
            Status status = stub_->SetEmployeePosition(&context, request, &response);
            if (!status.ok()) {
                std::cerr << "RPC failed: " << status.error_code() << ": " << status.error_message() << std::endl;
                break;
            }
        }

        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end - start;
        return num_requests / duration.count();
    }

    double MeasurePerformanceSetEmployeeManagerId(int num_requests) {
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < num_requests; ++i) {
            ManagerIdRequest request;
            request.set_employee_id(i+1);
            request.set_new_manager_id((i+1)%num_requests);
        
            Employee response;
            ClientContext context;
            Status status = stub_->SetEmployeeManagerId(&context, request, &response);
            if (!status.ok() && status.error_code() != grpc::StatusCode::NOT_FOUND) {
                std::cerr << "RPC failed: " << status.error_code() << ": " << status.error_message() << std::endl;
                break;
            }
        }

        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end - start;
        return num_requests / duration.count();
    }

    double MeasurePerformanceGetEmployeeById(int num_requests) {
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < num_requests; ++i) {
            Employee employee;
            employee.set_id(i+1);

            Employee response;
            ClientContext context;
            Status status = stub_->GetEmployeeById(&context, employee, &response);
            if (!status.ok() && status.error_code() != grpc::StatusCode::NOT_FOUND) {
                std::cerr << "RPC failed: " << status.error_code() << ": " << status.error_message() << std::endl;
                break;
            }
        }

        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end - start;
        return num_requests / duration.count();
    }

    double MeasurePerformanceDeleteEmployeeById(int num_requests) {
        auto start = std::chrono::high_resolution_clock::now();

        for (int i = 0; i < num_requests; ++i) {
            Employee request;
            request.set_id(i+1);

            Empty response;
            ClientContext context;
            Status status = stub_->DeleteEmployeeById(&context, request, &response);
            if (!status.ok() && status.error_code() != grpc::StatusCode::NOT_FOUND) {
                std::cerr << "RPC failed: " << status.error_code() << ": " << status.error_message() << std::endl;
                break;
            }
        }

        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end - start;
        return num_requests / duration.count();
    }



private:
    std::unique_ptr<EmployeeService::Stub> stub_;
};


int main() {
    // EmployeeClient client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));

    // for (int i = 1; i <= 100; ++i) {
    //     client.AddEmployee("Employee" + std::to_string(i), "Position" + std::to_string(i), 0);
    // }

    // std::cout << "All employees:" << std::endl;
    // client.GetAllEmployees();
    // client.DeleteEmployeeById(2);
    // std::cout << "All employees:" << std::endl;
    // client.GetAllEmployees();
    // client.DeleteEmployeeById(10);
    // std::cout << "All employees:" << std::endl;
    // client.GetAllEmployees();
    // client.SetEmployeePosition(6, "Manager939");
    // client.SetEmployeeManagerId(15, 4);
    // client.SetEmployeePosition(88, "Manager343434");
    // client.GetEmployeeById(6);
    // client.GetEmployeeById(7);

    // return 0;

    EmployeeClient client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
    int num_requests = 2000;

    double requests_per_second = client.MeasurePerformanceAddEmployee(num_requests);
    std::cout << "AddEmployee requests per second: " << requests_per_second << std::endl;

    requests_per_second = client.MeasurePerformanceSetEmployeePosition(num_requests);
    std::cout << "SetEmployeePosition requests per second: " << requests_per_second << std::endl;

    requests_per_second = client.MeasurePerformanceSetEmployeeManagerId(num_requests);
    std::cout << "SetEmployeeManagerId requests per second: " << requests_per_second << std::endl;

    requests_per_second = client.MeasurePerformanceGetEmployeeById(num_requests);
    std::cout << "GetEmployeeById requests per second: " << requests_per_second << std::endl;

    requests_per_second = client.MeasurePerformanceDeleteEmployeeById(num_requests);
    std::cout << "DeleteEmployeeById requests per second: " << requests_per_second << std::endl;

    return 0;
}