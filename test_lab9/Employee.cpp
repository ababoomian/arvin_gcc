#include "Employee.hpp"


Employee::Employee(const std::string& empName, const std::string& empIdNumber, 
                   const std::string& empDepartment, const std::string& empPosition, 
                   int empYearsWorked)
    : name(empName), idNumber(empIdNumber), department(empDepartment), 
      position(empPosition), yearsWorked(empYearsWorked < 0 ? 0 : empYearsWorked) {}


Employee::Employee(const std::string& empName, const std::string& empIdNumber)
    : name(empName), idNumber(empIdNumber), department(""), position(""), yearsWorked(0) {}


Employee::Employee() : name(""), idNumber(""), department(""), position(""), yearsWorked(0) {}


std::string Employee::getName() const { return name; }
std::string Employee::getIdNumber() const { return idNumber; }
std::string Employee::getDepartment() const { return department; }
std::string Employee::getPosition() const { return position; }
int Employee::getYearsWorked() const { return yearsWorked; }


void Employee::setName(const std::string& empName) { name = empName; }
void Employee::setIdNumber(const std::string& empIdNumber) { idNumber = empIdNumber; }
void Employee::setDepartment(const std::string& empDepartment) { department = empDepartment; }
void Employee::setPosition(const std::string& empPosition) { position = empPosition; }
void Employee::setYearsWorked(int empYearsWorked) {
    yearsWorked = (empYearsWorked < 0) ? 0 : empYearsWorked;
}
