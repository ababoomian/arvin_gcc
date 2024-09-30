//Arvin Hakoupian
//Lab 3 part 3
//CS/IS 135

#include<iostream>

/*    
     DECLARE:  salesperson's name and number of cars sold 
     PROMPT:  salesperson's name 
     PROMPT: number of cars sold by the salesperson 
     CALCULATE: Bonus = 1000 * carsSold 
     DISPLAY:  salesperson's name and  bonus for the month 
 */

int main()
{
    std::string name;
    std::cout << "Enter the name ";
    std::cin >> name;

    int carsSold;
    std::cout << "how many cars the salesperson sold that month ";
    std::cin >> carsSold;

    int bonus = 1000 * carsSold;
    std::cout << "Salesperson " << name 
    <<" earned a bonus of $" << bonus << " this month " << std::endl;
}