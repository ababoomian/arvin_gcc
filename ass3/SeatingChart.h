#ifndef SEATINGCHART_H
#define SEATINGCHART_H

#include <vector>
#include <memory>
#include "Student.h"

struct SeatingChart {
private:
    std::vector<std::vector<std::unique_ptr<Student>>> seats;

public:
    SeatingChart(int rows, int cols);
    void assignStudent(int row, int col, const std::string& name, int id);
    void printChart() const;
};

#endif
