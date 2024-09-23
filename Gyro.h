#ifndef GYRO_H
#define GYRO_H

#include <iostream>
#include <fstream>
#include <string>

class Gyro {
private:
    std::string model;
    std::string manufacturer;

public:
    void setGyro(const std::string& modelType, const std::string& maker) {
        model = modelType;
        manufacturer = maker;
    }

    void print() const {
        std::cout << "Gyro Model: " << model << ", Manufacturer: " << manufacturer << std::endl;
    }

    void save(std::ofstream& outFile) const {
        outFile << "Gyro Model: " << model << ", Manufacturer: " << manufacturer << std::endl;
    }
};

#endif