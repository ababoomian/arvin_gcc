#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "Animal.h"

class Elephant : public Animal {
private:
    double _trunkLength;

public:
    Elephant(const std::string& name, int age, double trunkLength);
    std::string GetDetails() const override;
};

#endif