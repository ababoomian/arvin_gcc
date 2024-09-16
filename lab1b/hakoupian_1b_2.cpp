#include <iostream>

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
