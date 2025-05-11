#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
private:
    std::string _name;
    std::string _species;
    int _age;

public:
    Animal(const std::string& name, const std::string& species, int age);
    virtual ~Animal() = default;

    std::string GetName() const;
    std::string GetSpecies() const;
    int GetAge() const;

    virtual std::string GetDetails() const = 0;
};

#endif
