#include <iostream>
#include <iomanip>
#include "Employee.hpp"

int main() {
    // Create Employee objects with different constructors
    Employee emp1("John Doe", "12345", "Sales", "Manager", 5);
    Employee emp2("Jane Smith", "67890");
    Employee emp3;

    // Set additional information for emp2
    emp2.setDepartment("Marketing");
    emp2.setPosition("Analyst");
    emp2.setYearsWorked(3);

    // Display header
    std::cout << std::left << std::setw(20) << "Name"
              << std::setw(10) << "ID"
              << std::setw(15) << "Department"
              << std::setw(15) << "Position"
              << std::setw(15) << "Years Worked" << std::endl;

    std::cout << std::string(75, '-') << std::endl;

    // Display information for all employees
    std::cout << std::left << std::setw(20) << emp1.getName()
              << std::setw(10) << emp1.getIdNumber()
              << std::setw(15) << emp1.getDepartment()
              << std::setw(15) << emp1.getPosition()
              << std::setw(15) << emp1.getYearsWorked() << std::endl;

    std::cout << std::left << std::setw(20) << emp2.getName()
              << std::setw(10) << emp2.getIdNumber()
              << std::setw(15) << emp2.getDepartment()
              << std::setw(15) << emp2.getPosition()
              << std::setw(15) << emp2.getYearsWorked() << std::endl;

    std::cout << std::left << std::setw(20) << emp3.getName()
              << std::setw(10) << emp3.getIdNumber()
              << std::setw(15) << emp3.getDepartment()
              << std::setw(15) << emp3.getPosition()
              << std::setw(15) << emp3.getYearsWorked() << std::endl;

    return 0;
}
