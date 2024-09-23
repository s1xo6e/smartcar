#ifndef LCD_H
#define LCD_H

#include <iostream>
#include <fstream>
#include <string>

class LCD {
private:
    std::string model;
    double size;

public:
    void setLCD(double screenSize, const std::string& modelType) {
        size = screenSize;
        model = modelType;
    }

    void print() const {
        std::cout << "LCD Model: " << model << ", Size: " << size << " inches" << std::endl;
    }

    void save(std::ofstream& outFile) const {
        outFile << "LCD Model: " << model << ", Size: " << size << " inches" << std::endl;
    }
};

#endif