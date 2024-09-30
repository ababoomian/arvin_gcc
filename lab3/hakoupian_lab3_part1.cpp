#include <iostream>
#include <iomanip> 

/* 
    DECLARE: variables to hold the test scores
    PROMPT: the user for input score1
    PROMPT: the user for input score2
    PROMPT: the user for input score3
    CALCULATE:  average = (score1 + score2 + score3) / 3
    DISPLAY:  average
*/

int main() {
    double score1, score2, score3;

    std::cout << "Enter the first test score: ";
    std::cin >> score1;
    std::cout << "Enter the second test score: ";
    std::cin >> score2;
    std::cout << "Enter the third test score: ";
    std::cin >> score3;

    double average = (score1 + score2 + score3) / 3.0;

    std::cout << std::fixed << std::setprecision(6);
    std::cout << "The average of the scores " << score1 << ", " << score2 << ", and " << score3
              << " is " << average << "." << std::endl;

    return 1;
}
