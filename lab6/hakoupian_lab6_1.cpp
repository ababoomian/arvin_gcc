//Arvin Hakoupian
//Lab 6b part 1
//CS/IS 135

/* START
    balance = 0.0

    LOOP forever:
        DISPLAY:
            "1. 6-month membership ($50.50)"
            "2. 12-month membership ($99.00)"
            "3. Show total and exit"
        
        GET user choice

        IF choice is 1:
            balance = balance + 50.50
            DISPLAY "Added $50.50 to total."

        ELSE IF choice is 2:
            balance = balance + 99.00
            DISPLAY "Added $99.00 to total."

        ELSE IF choice is 3:
            DISPLAY "Total sale: $" + balance
            DISPLAY "Goodbye!"
            STOP

        ELSE:
            DISPLAY "Invalid option. Try again."
END  */

#include<iostream>

int main()
{

    double balance = 0.0;
    int choice;
       while(true)
       {
       
            std::cout << "[1] 6-month membership that costs $50.50\n ";
            std::cout << "[2] 12-month membership that costs $99.00\n ";
            std::cout << "[3] Show total sale and exit the process\n ";
            std::cin >> choice;
            switch(choice)
            {
                case 1:
                    std::cout << "You choosed 6-month of membership and to your total sale balance will add $50.50 " << std::endl;
                    balance += 50.50;
                    break;
                case 2:
                    std::cout << "You choosed 12-month of membership and to your total sale balance will add $99.00 " << std::endl;
                    balance += 99.00;
                    break;
                case 3:
                    std::cout << "Your total sale is: $" << balance << std::endl;
                    std::cout << "EXIT " << std::endl;
                    return(1);
                    break;
                default:
                    std::cout << "Invalid Option " << std::endl;
                    continue;    
            }
        }
}