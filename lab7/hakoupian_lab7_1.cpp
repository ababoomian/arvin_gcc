//Arvin Hakoupian
//Lab 7 part 1
//CS/IS 135

#include<iostream>
#include<iomanip>

/*
Start
    Initialize totalRooms and occupiedRooms to 0
    Prompt user for numOfFloors
    While numOfFloors is less than 1
        Prompt user again for numOfFloors

    For each floor from 1 to numOfFloors
        If floor is 13, skip to the next iteration

        Prompt user for roomCount on the current floor
        While roomCount is less than 10
            Prompt user again for roomCount

        Prompt user for occupiedRoomCount on the current floor
        While occupiedRoomCount is greater than roomCount
            Prompt user again for occupiedRoomCount

        Add roomCount to totalRooms
        Add occupiedRoomCount to occupiedRooms

    Calculate occupiedPercentage = (occupiedRooms / totalRooms) * 100
    Display totalRooms, occupiedRooms, and occupiedPercentage
End
*/


int main()
{
    int numOfFloors;
    int totalRoom = 0;
    int occupiedRoom = 0;

    std::cout << "How many floors does your hotel has? ";
    std::cin >> numOfFloors;

    while(numOfFloors < 1)
    {
        std::cout << "Number of floors should be more than 1 \n";
        std::cin >> numOfFloors;
    }

    for(int floor = 1; floor <= numOfFloors; ++floor)
    {
        if(floor == 13)
        {
            continue;
        }
        int roomOfEachFloor;
        int occupiedRoomOfFloor;

        std::cout << "Please enter the number of room on floor " << floor << ": ";
        std::cin >> roomOfEachFloor;

        while(roomOfEachFloor < 10)
        {
            std::cout << "Invalid Input the number of rooms should be at least 10 ";
            std::cin >> roomOfEachFloor;
        }

        std::cout << "Please enter the number of occupied room on floor " << floor << ": ";
        std::cin >> occupiedRoomOfFloor;

        while(occupiedRoomOfFloor > roomOfEachFloor)
        {
            std::cout << "Invalid Input the occupied rooms cannot be greater than total rooms ";
            std::cin >> occupiedRoomOfFloor;
        }

        totalRoom += roomOfEachFloor;
        occupiedRoom += occupiedRoomOfFloor;
        
    }
    double occupiedPercentage = (static_cast<double>(occupiedRoom) / totalRoom) * 100;
    std::cout << "\nTotal room is: " << totalRoom << std::endl;
    std::cout << "Total occupied room is: " << occupiedRoom << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Occupied rate is: " << occupiedPercentage << "% " << std::endl;
    return 0;


}