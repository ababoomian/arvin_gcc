#include <iostream>
#include "Car.hpp"

int main() {
    
    Car car1(2017, "Jeep");

    Car car2;
    car2.setYearModel(2012);
    car2.setMake("Honda");
    
    std::cout << "Car 1:" << std::endl;
    std::cout << "Year Model: " << car1.getYearModel() << std::endl;
    std::cout << "Make: " << car1.getMake() << std::endl;
    std::cout << "Speed: " << car1.getSpeed() << " mph" << std::endl;

    std::cout << "\nCar 2:" << std::endl;
    std::cout << "Year Model: " << car2.getYearModel() << std::endl;
    std::cout << "Make: " << car2.getMake() << std::endl;
    std::cout << "Speed: " << car2.getSpeed() << " mph" << std::endl;

    
    std::cout << "\nAccelerating Car 1:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        car1.accelerate();
        std::cout << "Speed: " << car1.getSpeed() << " mph" << std::endl;
    }

    std::cout << "\nBraking Car 1:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        car1.brake();
        std::cout << "Speed: " << car1.getSpeed() << " mph" << std::endl;
    }

    return 0;
}
