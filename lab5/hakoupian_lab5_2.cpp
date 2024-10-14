//Arvin Hakoupian
//Lab 5 part 1
//CS/IS 135

#include<iostream>
#include<cmath>
#include<iomanip>


int main()
{
    int option;
    double area, radius, circumferences;
    do{
        std::cout << "1: area of circle " << std::endl;
        std::cout << "2: circumferences of circle " << std::endl;
        std::cout << "3: quit the program " << std::endl;
        std::cin >> option;

        switch(option){
            case 1:
            case 2:

            std::cout << "Radius of circle: ";
            std::cin >> radius;

            if(radius < 0){
                std::cout << "Radius is negative " << std::endl;
            } else{
                std::cout << std::fixed << std::setprecision(4);
                if(option == 1){
                    area = M_PI * radius * radius;
                    std::cout << "Area is: " << area << std::endl;
                } else {
                    circumferences = 2 * M_PI * radius;
                    std::cout << "Circumference is: " << circumferences << std::endl;
                }
            }
            break;
            
            case 3:
            std::cout << "BYE " << std::endl;
            break;

            default:
            std::cout << "INVALID INPUT" << std::endl;
        }
    }while(option != 3);

    return 0;
}