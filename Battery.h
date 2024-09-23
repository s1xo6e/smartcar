#ifndef BATTERY_H
#define BATTERY_H

#include <iostream>
#include <fstream>
#include <string>

class Battery {
private:
    std::string type;
    int capacity;

public:
    void setBattery(const std::string& batteryType, int cap) {
        type = batteryType;
        capacity = cap;
    }

    void print() const {
        std::cout << "Battery Type: " << type << ", Capacity: " << capacity << " kWh" << std::endl;
    }

    void save(std::ofstream& outFile) const {
        outFile << "Battery Type: " << type << ", Capacity: " << capacity << " kWh" << std::endl;
    }
};

#endif