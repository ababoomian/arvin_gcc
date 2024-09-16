#include <iostream>

/* 

start
    SET rows = 7

 
    for: i = 1 to (rows / 2 + 1)
        for: j = 1 to (rows / 2 + 1 - i)
            print: " "  
        end for
        for: j = 1 to (2 * i - 1)
            print: "*" 
        end for
        newline;
    end for

    
    for: i = (rows / 2) down to 1
        for: j = 1 to (rows / 2 + 1 - i)
            print: " "  
        end for
        for: j = 1 to (2 * i - 1)
            print: "*" 
        end for
        newline;
    end for

end


 */


int main() {
    int rows = 7;

    for (int i = 1; i <= rows / 2 + 1; i++) {
        for (int j = 1; j <= (rows / 2 + 1 - i); j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = rows / 2; i >= 1; i--) {
        for (int j = 1; j <= (rows / 2 + 1 - i); j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
