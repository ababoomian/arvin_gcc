#include <iostream>

int main() {
    int rows = 6;
    int columns = 6;

    for (int i = 1; i <= rows; i++) {
        if (i == 1 || i == rows) {
            for (int j = 1; j <= columns; j++) {
                std::cout << "&";
            }
        } else {
            std::cout << "&";
            for (int j = 1; j <= columns - 2; j++) {
                std::cout << " ";
            }
            std::cout << "&";
        }
        std::cout << std::endl;
    }

    return 0;
}
