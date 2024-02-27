#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;


bool isFloat(const string &s) {
    istringstream iss(s);
    float f;
    iss >> noskipws >> f;
    return iss.eof() && !iss.fail();
}

bool isInt(const string &s) {
    if (s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) {
        return false;
    }

    char *p;
    strtol(s.c_str(), &p, 10);

    return (*p == 0);
}


double multiply(double num, double factor) {
    return num * factor;
}

double logarithm(double num, double base) {
    return log(num) / log(base);
}

double power(double num, double exponent) {
    return pow(num, exponent);
}

double average(const vector<double> &data, int index, double now) {
    double sum = now;
    for (int i = max(index - 9, 0); i < index; i += 1) {
        sum += data[i];
    }
    return sum / min(index + 1, 10);
}

bool correctData(const string &x, const string &type) {
    if (type == "float") {
        return isFloat(x);
    }
    if (type == "int") {
        return isInt(x);
    }
    return false;
}

int main() {
    ifstream settingsFile("settings.txt");
    if (!settingsFile.is_open()) {
        cerr << "Unable to open settings file." << endl;
        return 1;
    }

    string inputType, outputType;
    vector<std::string> operations;

    settingsFile >> inputType;
    settingsFile >> outputType;
    string operation;
    while (getline(settingsFile, operation)) {
        if (!operation.empty()) {
            operations.push_back(operation);
        }
    }
    settingsFile.close();

    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cerr << "Unable to open input data file." << endl;
        return 1;
    }

    vector<string> inputData;
    string num;
    while (inputFile >> num) {
        inputData.push_back(num);
    }
    inputFile.close();

    vector<double> outputData;
    vector<int> error;

    for (int i = 0; i < inputData.size(); i += 1) {
        if (!correctData(inputData[i], inputType)) {
            outputData.push_back(0.0);
            error.push_back(1);
            continue;
        }
        double result = stod(inputData[i]);
        for (const auto &op: operations) {

            if (op.find("multiply") != string::npos) {
                size_t pos = op.find(" ");
                double factor = stod(op.substr(pos + 1));
                result = multiply(result, factor);

            }else if (op.find("logarithm") != string::npos) {
                size_t pos = op.find(" ");
                double base = stod(op.substr(pos + 1));
                result = logarithm(result, base);

            } else if (op.find("power") != string::npos) {
                size_t pos = op.find(" ");
                double exponent = stod(op.substr(pos + 1));
                result = power(result, exponent);

            } else if (op.find("average") != string::npos) {
                result = average(outputData, i, result);
            }
        }
        outputData.push_back(result);
        error.push_back(0);
    }

    ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        cerr << "Unable to open output data file." << endl;
        return 1;
    }

    for (int i = 0; i < outputData.size(); i += 1) {
        double num = outputData[i];
        if (error[i]) {
            outputFile << "error: " << error[i] << " while executed" << endl;
            continue;
        }
        if (outputType == "int") {
            outputFile << static_cast<int>(num) << endl;
        } else if (outputType == "float") {
            outputFile << (num) << endl;
        }
    }

    outputFile.close();

    return 0;
}
