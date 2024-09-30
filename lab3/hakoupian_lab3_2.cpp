//Arvin Hakoupian
//Lab 3 part 2
//CS/IS 135

#include<iostream>

/*   
    DECLARE: variable for the retail price 
    PROMPT: user for the retail price input 
    CALCULATE: Profit = Retail Price * 0.4 
    DISPLAY: calculated profit  
*/

int main()
{
    double retailPrice;

    std::cout << "Enter a retail price od a circuit board ";
    std::cin >> retailPrice;

    double profit = retailPrice * 0.4;

    std::cout << "The profit of circuit board is: $" << profit << std::endl;

}