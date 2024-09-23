#ifndef CHASSIS_H
#define CHASSIS_H

#include <iostream>
#include <fstream>
#include <string>

class Chassis {
private:
    std::string chassisID;
    std::string type;
    int length;
    int width;
    int height;

public:
    void setChassis(const std::string& id, const std::string& chassisType, int l, int w, int h) {
        chassisID = id;
        type = chassisType;
        length = l;
        width = w;
        height = h;
    }

    void print() const {
        std::cout << "Chassis ID: " << chassisID << ", Type: " << type 
                  << ", Length: " << length << ", Width: " << width 
                  << ", Height: " << height << std::endl;
    }

    void save(std::ofstream& outFile) const {
        outFile << "Chassis ID: " << chassisID << ", Type: " << type 
                << ", Length: " << length << ", Width: " << width 
                << ", Height: " << height << std::endl;
    }
};

#endif