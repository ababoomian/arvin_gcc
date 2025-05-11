
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

struct Student {
private:
    std::string name;
    int id;

public:
    Student(const std::string& name, int id);
    std::string getName() const;
    int getId() const;
};

#endif 
