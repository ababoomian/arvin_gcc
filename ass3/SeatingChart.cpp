#include "SeatingChart.h"
#include <iostream>

SeatingChart::SeatingChart(int rows, int cols) {
    seats.resize(rows);
    for (int i = 0; i < rows; ++i) {
        seats[i].resize(cols);
       
    }
}

void SeatingChart::assignStudent(int row, int col, const std::string& name, int id) {
    if (row >= 0 && row < seats.size() && col >= 0 && col < seats[row].size()) {
        seats[row][col] = std::make_unique<Student>(name, id);
    } else {
        std::cerr << "Invalid seat position (" << row << ", " << col << ")\n";
    }
}

void SeatingChart::printChart() const {
    for (int i = 0; i < seats.size(); ++i) {
        for (int j = 0; j < seats[i].size(); ++j) {
            if (seats[i][j]) {
                std::cout << seats[i][j]->getName() << " (ID: " << seats[i][j]->getId() << ")\t";
            } else {
                std::cout << "[Empty]\t";
            }
        }
        std::cout << '\n';
    }
}
