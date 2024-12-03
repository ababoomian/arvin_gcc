#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    std::string name;
    std::string idNumber;
    std::string department;
    std::string position;
    int yearsWorked;

public:
    
    Employee(const std::string& empName, const std::string& empIdNumber, 
             const std::string& empDepartment, const std::string& empPosition, 
             int empYearsWorked);

    
    Employee(const std::string& empName, const std::string& empIdNumber);

    
    Employee();

    
    std::string getName() const;
    std::string getIdNumber() const;
    std::string getDepartment() const;
    std::string getPosition() const;
    int getYearsWorked() const;

    
    void setName(const std::string& empName);
    void setIdNumber(const std::string& empIdNumber);
    void setDepartment(const std::string& empDepartment);
    void setPosition(const std::string& empPosition);
    void setYearsWorked(int empYearsWorked);
};

#endif
