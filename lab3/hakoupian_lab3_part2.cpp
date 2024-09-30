#include <iostream>
#include <iomanip>

/*  
    DECLARE: variable for the retail price
    PROMPT: user for the retail price input
    CALCULATE: Profit = Retail Price * 0.4
    DISPLAY: calculated profit 
*/
int main() {
    double retailPrice;

    std::cout << "Enter the retail price of the circuit board: $";
    std::cin >> retailPrice;

    double profit = retailPrice * 0.4;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The profit for the circuit board is: $" << profit << std::endl;

    return 0;
}
