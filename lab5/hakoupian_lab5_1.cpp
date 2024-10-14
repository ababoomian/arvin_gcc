//Arvin Hakoupian
//Lab 5 part 1
//CS/IS 135

#include<iostream>
#include<cmath>
#include<iomanip>

/*
START
INPUT: to choose three option
OPTION 1: find area of circle
OPTION 2: find circumference of circle
OPTION 3: quit the program
CHECK THE SELECTED OPTION (with if and else statement):
    - DO: corresponding instruction 
*/

int main()
{
    int option;
    double area, radius, circumferences;
    do{
        std::cout << "1: area of circle " << std::endl;
        std::cout << "2: circumferences of circle " << std::endl;
        std::cout << "3: quit the program " << std::endl;
        std::cin >> option;

        if(option == 1 || option == 2)
        {
          std::cout << "Radius of circle ";
          std::cin >> radius;

          if(radius < 0)
          {
          std::cout << "Radius is negative ";
          }
          else{
            if(option ==1)
            {
                area = M_PI * radius * radius;
                std::cout << std::fixed << std::setprecision(4);
                std::cout << "area is: " << area << std::endl;
            }
            else
            {
                circumferences = M_PI * radius * 2;
                std::cout << std::fixed << std::setprecision(4);
                std::cout << "circumferences is: " << circumferences << std::endl;
            }
          }
        }
        else if(option != 3)
        {
            std::cout << "INVALID INPUT " << std::endl;
        }
        

    } while(option != 3);

    std::cout << "BYE " << std::endl;
    return 0;
}