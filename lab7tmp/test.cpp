#include <iostream>
#include <iomanip>



int main() {
    int numFloors, totalRooms = 0, totalOccupied = 0;
    std::cout << "Enter the number of floors in the hotel: ";
    std::cin >> numFloors;

    
    while (numFloors < 1) {
        std::cout << "Number of floors must be at least 1. Please enter again: ";
        std::cin >> numFloors;
    }

    for (int floor = 1; floor <= numFloors; ++floor) {
        if (floor == 13) {
            
            continue;
        }

        int roomsOnFloor, occupiedOnFloor;

        
        std::cout << "Enter the number of rooms on floor " << floor << ": ";
        std::cin >> roomsOnFloor;

        
        while (roomsOnFloor < 10) {
            std::cout << "Number of rooms must be at least 10. Please enter again: ";
            std::cin >> roomsOnFloor;
        }

        std::cout << "Enter the number of occupied rooms on floor " << floor << ": ";
        std::cin >> occupiedOnFloor;

        while (occupiedOnFloor > roomsOnFloor) {
            std::cout << "Occupied rooms cannot exceed total rooms. Please enter again: ";
            std::cin >> occupiedOnFloor;
        }

        totalRooms += roomsOnFloor;
        totalOccupied += occupiedOnFloor;
    }

    double occupancyRate = (static_cast<double>(totalOccupied) / totalRooms) * 100;
    
    std::cout << "\nTotal number of rooms in the hotel: " << totalRooms << endl;
    std::cout << "Total number of occupied rooms: " << totalOccupied << endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Occupancy rate: " << occupancyRate << "%" << endl;

    return 0;
}
