#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <fstream>
#include <string>

class Student {
private:
    std::string studentID;
    std::string name;

public:
    void setStudent(const std::string& id, const std::string& studentName) {
        studentID = id;
        name = studentName;
    }

    void print() const {
        std::cout << "Student ID: " << studentID << ", Name: " << name << std::endl;
    }

    void save(std::ofstream& outFile) const {
        outFile << "Student ID: " << studentID << ", Name: " << name << std::endl;
    }
};

#endif