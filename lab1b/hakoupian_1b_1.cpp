#include <iostream>

/* start
    set: rows = 6
    set: columns = 6

    for: i = 1 to rows
        if: i is the first or last row (i == 1 OR i == rows)
            print: '&' for all columns
        ELSE
            print: '&' for the first column
            print: spaces for all columns except the first and last (columns - 2)
            print: '&' for the last column
        end if
       newline;
    end for

end */



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
