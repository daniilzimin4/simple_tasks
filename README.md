# Problem 1

## File Configuration:

First line: input data type: only one word (int or float)

Second line: output data type: only one word (int or float)

Next lines, commands:
- Command 1
- Command 2
- Command 3
- ...

## Operations

All operations executed in double type.

Errors for lines independend, and does not affect other input lines.


# Problem 2

## Employee Management System

This is a simple Employee Management System implemented using gRPC and SQLite. The system allows you to perform various operations on employees such as adding, updating, and deleting employee records.

### Prerequisites

Before running the system, make sure you have SQLite installed on your system. You will also need to generate the protocol buffer and gRPC stub files. You can do this using the following command:

```bash
protoc -I=. --grpc_out=. --cpp_out=. --plugin=protoc-gen-grpc=/usr/local/bin/grpc_cpp_plugin employee.proto
```

## Database Setup

To set up the SQLite database, execute the following commands in the SQLite console:

```bash
sqlite3 employees.db
```
```sql
CREATE TABLE IF NOT EXISTS Employee (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT NOT NULL,
    position TEXT,
    manager_id INTEGER,
    FOREIGN KEY(manager_id) REFERENCES Employee(id) ON DELETE SET NULL
);
```

## Building the Server and Client

You can compile the server and client using the following commands:

```bash
g++ -std=c++17 -pthread -o server server.cpp employee.grpc.pb.cc employee.pb.cc `pkg-config --cflags --libs protobuf grpc++` -lsqlite3
```
```bash
g++ -std=c++17 -o client client.cpp employee.grpc.pb.cc employee.pb.cc `pkg-config --cflags --libs protobuf grpc++` -lsqlite3
```

## Running the System

To run the server, execute the following command:

```bash
./server
```

To run the client, execute the following command:

```bash
./client
```

## Stress Test Results

Here are the results of the stress test for various operations:

- AddEmployee requests per second: 623.568
- SetEmployeePosition requests per second: 577.694
- SetEmployeeManagerId requests per second: 561.339
- GetEmployeeById requests per second: 3070.51
- DeleteEmployeeById requests per second: 618.463


These results give an indication of the system's performance under load for different operations. Adjustments can be made to optimize performance further if needed.
