#include <iostream>
#include <fstream>
#include <vector>
#include "SmartCar.h"

using namespace std;
int main() {
    vector<SmartCar> cars(10);  // 创建10辆智能小车
    string input;
    ofstream outFile("car_info.txt");

    for (int i = 0; i < 10; ++i) {
        SmartCar car;

        cout << "Enter ID for car " << i + 1 << ": ";
        cin >> input;
        car.setID(input);

        Student student;
        cout << "Enter student ID and name for car " << i + 1 << ": ";
        string studentID, studentName;
        cin >> studentID >> studentName;
        student.setStudent(studentID, studentName);
        car.setStudent(student);

        // 假设我们使用硬编码的示例数据
        Chassis chassis;
        chassis.setChassis("Chassis123", "TypeA", 100, 50, 30);
        car.setChassis(chassis);

        Tire tire;
        tire.setTire("Tire456", 15);
        car.setTire(tire);

        AGX agx;
        agx.setAGX("AGX001", 16, 256);
        car.setAGX(agx);

        Camera camera;
        camera.setCamera("Cam789", 1080, 60);
        car.setCamera(camera);

        Gyro gyro;
        gyro.setGyro("Gyro987", "ManufacturerX");
        car.setGyro(gyro);

        Lidar lidar;
        lidar.setLidar("Lidar654", 16, 200);
        car.setLidar(lidar);

        LCD lcd;
        lcd.setLCD(7.5, "LCD123");
        car.setLCD(lcd);

        Battery battery;
        battery.setBattery("Li-ion", 5000);
        car.setBattery(battery);

        car.print();
        car.save(outFile);
        cars[i] = car;
    }

    outFile.close();

    // 读取并按顺序显示已保存的车辆信息
    char command;
    int index = 0;

    while (true) {
        cout << "Displaying car " << index + 1 << endl;
        cars[index].print();

        cout << "Press 'n' for next, 'p' for previous, 'q' to quit: ";
        cin >> command;

        if (command == 'n' && index < 9) {
            index++;
        } else if (command == 'p' && index > 0) {
            index--;
        } else if (command == 'q') {
            break;
        } else {
            cout << "Invalid command or limit reached!" << endl;
        }
    }

    return 0;
}