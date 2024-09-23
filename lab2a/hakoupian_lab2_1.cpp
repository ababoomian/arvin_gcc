//Arvin Hakoupian
//Lab 2 part 1
//CS/IS 135

#include <iostream>

int main() {
    int amount = 1;
    int m = 50;
    int n = 10;
    int p = 5;
    int result;

    result = m + n + p / amount;
    std::cout << "result is equal to: "<< result << std::endl ;
    result = m / n + p * amount;
    std::cout << "result 2 is equal to: "<< result << std::endl ;
    return 1;
}