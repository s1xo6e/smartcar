#ifndef AGX_H
#define AGX_H

#include <iostream>
#include <fstream>
#include <string>

class AGX {
private:
    std::string model;
    int memory;
    int storage;

public:
    void setAGX(const std::string& modelType, int mem, int store) {
        model = modelType;
        memory = mem;
        storage = store;
    }

    void print() const {
        std::cout << "AGX Model: " << model << ", Memory: " << memory 
                  << "GB, Storage: " << storage << "GB" << std::endl;
    }

    void save(std::ofstream& outFile) const {
        outFile << "AGX Model: " << model << ", Memory: " << memory 
                << "GB, Storage: " << storage << "GB" << std::endl;
    }
};

#endif