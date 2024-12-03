#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    int yearModel;
    std::string make;
    int speed;

public:
    
    Car(int modelYear, const std::string& carMake);

    Car();
    
    int getYearModel() const;
    std::string getMake() const;
    int getSpeed() const;

    
    void setYearModel(int modelYear);
    void setMake(const std::string& carMake);
    void setSpeed(int carSpeed);

    
    void accelerate();
    void brake();
};

#endif
