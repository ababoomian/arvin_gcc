#include <iostream>

/* 
start
    set: rows = 7
 
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
    std::cout << "Famous Person\t\t\tProfession\t\t\tFamous Quote" << std::endl;
    std::cout << "----------------\t\t-------------\t\t\t--------------" << std::endl;

    std::cout << "William Shakespeare\tPlaywright\\Poet\t\t\"Listen to many, speak to a few.\"" << std::endl;
    std::cout << "Abraham Lincoln\t\tPresident\t\t\"A house divided against itself cannot stand.\"" << std::endl;
    std::cout << "Rene Descartes\t\tMathematician\t\t\"Everything is self-evident.\"" << std::endl;
    
    return 0;
}
