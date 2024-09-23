#ifndef LIDAR_H
#define LIDAR_H

#include <iostream>
#include <fstream>
#include <string>

class Lidar {
private:
    std::string model;
    int resolution;
    int range;

public:
    void setLidar(const std::string& m, int res, int r) {
        model = m;
        resolution = res;
        range = r;
    }

    void print() {
        std::cout << "Lidar Model: " << model 
                  << ", Resolution: " << resolution 
                  << ", Range: " << range << std::endl;
    }

    void save(std::ofstream& outFile) {
        outFile << "Lidar Model: " << model 
                << ", Resolution: " << resolution 
                << ", Range: " << range << std::endl;
    }
};

#endif // LIDAR_H