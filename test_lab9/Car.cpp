#include "Car.hpp"

Car::Car(int modelYear, const std::string& carMake)
    : yearModel(modelYear), make(carMake), speed(0) {}


Car::Car() : yearModel(0), make(""), speed(0) {}


int Car::getYearModel() const { return yearModel; }
std::string Car::getMake() const { return make; }
int Car::getSpeed() const { return speed; }

void Car::setYearModel(int modelYear) { yearModel = modelYear; }
void Car::setMake(const std::string& carMake) { make = carMake; }
void Car::setSpeed(int carSpeed) {
    speed = (carSpeed < 0) ? 0 : carSpeed;
}

void Car::accelerate() { speed += 5; }

void Car::brake() {
    speed -= 5;
    if (speed < 0) speed = 0;
}
