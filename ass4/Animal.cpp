#include "Animal.h"

Animal::Animal(const std::string& name, const std::string& species, int age)
    : _name(name), _species(species), _age(age) {}

std::string Animal::GetName() const {
    return _name;
}

std::string Animal::GetSpecies() const {
    return _species;
}

int Animal::GetAge() const {
    return _age;
}
