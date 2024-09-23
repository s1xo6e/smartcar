#ifndef SMARTCAR_H
#define SMARTCAR_H

//six1
#include "Chassis.h"
#include "Tire.h"
#include "AGX.h"
#include "Camera.h"
#include "Gyro.h"
#include "Lidar.h"
#include "LCD.h"
#include "Battery.h"
#include "Student.h"

class SmartCar {
private:
    std::string carID;
    Chassis chassis;
    Tire tire;
    AGX agx;
    Camera camera;
    Gyro gyro;
    Lidar lidar;
    LCD lcd;
    Battery battery;
    Student student;

public:
    // setter for car ID
    void setID(const std::string& id) {
        carID = id;
    }

    // setter for Student
    void setStudent(const Student& s) {
        student = s;
    }

    // setter for Chassis
    void setChassis(const Chassis& c) {
        chassis = c;
    }

    // setter for Tire
    void setTire(const Tire& t) {
        tire = t;
    }

    // setter for AGX
    void setAGX(const AGX& a) {
        agx = a;
    }

    // setter for Camera
    void setCamera(const Camera& c) {
        camera = c;
    }

    // setter for Gyro
    void setGyro(const Gyro& g) {
        gyro = g;
    }

    // setter for Lidar
    void setLidar(const Lidar& l) {
        lidar = l;
    }

    // setter for LCD
    void setLCD(const LCD& l) {
        lcd = l;
    }

    // setter for Battery
    void setBattery(const Battery& b) {
        battery = b;
    }

    // print and save methods
    void print() {
        std::cout << "Car ID: " << carID << std::endl;
        chassis.print();
        tire.print();
        agx.print();
        camera.print();
        gyro.print();
        lidar.print();
        lcd.print();
        battery.print();
        student.print();
    }

    void save(std::ofstream& outFile) {
        outFile << "Car ID: " << carID << std::endl;
        chassis.save(outFile);
        tire.save(outFile);
        agx.save(outFile);
        camera.save(outFile);
        gyro.save(outFile);
        lidar.save(outFile);
        lcd.save(outFile);
        battery.save(outFile);
        student.save(outFile);
    }
};

#endif // SMARTCAR_H