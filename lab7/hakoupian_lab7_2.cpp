//Arvin Hakoupian
//Lab 7 part 2
//CS/IS 135

#include<iostream>
#include<iomanip>
#include<cmath>

/*
Start
    Initialize dailySalary to 1.00
    Initialize total to 0.00
    Prompt user for daysWorked
    While daysWorked is less than 1
        Prompt user again for daysWorked

    Display "Day" and "Pay" headers

    For each day from 1 to daysWorked
        Display the current day and dailySalary
        Add dailySalary to total
        Multiply dailySalary by 2

    Display total pay
End
*/


int main()
{
    int daysWorked;
    double dailySalary = 1.00;
    double total = 0.00;
    
    std::cout << "How many days you worked? ";
    std::cin >> daysWorked;

    while(daysWorked < 1)
    {
        std::cout << "Invalid Input Enter again: ";
        std::cin >> daysWorked;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n Day \t Pay \n";

    for(int day = 1; day <= daysWorked; ++day)
    {
        std::cout << day << "\t " << dailySalary << "$" << std::endl;
        total += dailySalary;
        dailySalary *= 2;
    }

    std::cout << "Total pay is: " << total << "$" << std::endl;
    return 0;

}