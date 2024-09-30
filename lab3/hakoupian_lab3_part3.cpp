#include <iostream>
#include <string>

  /*   
     DECLARE:  salesperson's name and number of cars sold
     PROMPT:  salesperson's name
     PROMPT: number of cars sold by the salesperson
     CALCULATE: Bonus = 1000 * carsSold
     DISPLAY:  salesperson's name and  bonus for the month
 */
int main() {
    std::string salespersonName;
    int carsSold;

    std::cout << "Enter the salesperson's name: ";
    std::getline(std::cin, salespersonName);

    std::cout << "Enter the number of cars sold by " << salespersonName << " this month: ";
    std::cin >> carsSold;

    int bonus = 1000 * carsSold;
    std::cout << "Salesperson " << salespersonName << " earned a bonus of $" << bonus << " this month." << std::endl;

    return 0;
}
