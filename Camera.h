#ifndef CAMERA_H
#define CAMERA_H

#include <iostream>
#include <fstream>
#include <string>

class Camera {
private:
    std::string model;
    int resolution;
    int fps;

public:
    void setCamera(const std::string& modelType, int res, int frameRate) {
        model = modelType;
        resolution = res;
        fps = frameRate;
    }

    void print() const {
        std::cout << "Camera Model: " << model << ", Resolution: " << resolution 
                  << "p, FPS: " << fps << std::endl;
    }

    void save(std::ofstream& outFile) const {
        outFile << "Camera Model: " << model << ", Resolution: " << resolution 
                << "p, FPS: " << fps << std::endl;
    }
};

#endif