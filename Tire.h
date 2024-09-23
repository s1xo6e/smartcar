#ifndef TIRE_H
#define TIRE_H

#include <iostream>
#include <fstream>
#include <string>

class Tire {
private:
    std::string tireID;
    int diameter;

public:
    void setTire(const std::string& id, int dia) {
        tireID = id;
        diameter = dia;
    }

    void print() const {
        std::cout << "Tire ID: " << tireID << ", Diameter: " << diameter << std::endl;
    }

    void save(std::ofstream& outFile) const {
        outFile << "Tire ID: " << tireID << ", Diameter: " << diameter << std::endl;
    }
};

#endif