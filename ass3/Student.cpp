// Student.cpp
#include "Student.h"

Student::Student(const std::string& name, int id)
    : name(name), id(id) {}

std::string Student::getName() const {
    return name;
}

int Student::getId() const {
    return id;
}
