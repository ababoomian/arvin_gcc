#include "Zoo.h"
#include <iostream>

Zoo::Zoo() {}
Zoo::~Zoo() {
    for (Animal* animal : _animals) {
        delete animal;
    }
}

void Zoo::AddAnimal(Animal* animal) {
    _animals.push_back(animal);
}

void Zoo::DisplayAllAnimals() const {
    for (const Animal* animal : _animals) {
        std::cout << animal->GetDetails() << std::endl;
    }
}
