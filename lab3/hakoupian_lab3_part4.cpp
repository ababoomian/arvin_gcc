#include <iostream>
#include <iomanip>

/*  
      DECLARE: total number of questions and correct answers
      PROMPT: total number of questions on the test
      PROMPT:  how many questions they answered correctly
      CALCULATE:  percentage using type casting to double for division
      DISPLAY: results
 */
int main() {
    int totalQuestions, correctAnswers;

    std::cout << "Enter the total number of questions on the test: ";
    std::cin >> totalQuestions;

    std::cout << "Enter the number of correct answers: ";
    std::cin >> correctAnswers;

    double percentage = ((double)(correctAnswers) / totalQuestions) * 100;

    std::cout << "You got " << correctAnswers << " out of " << totalQuestions << " correct.\n";
    std::cout << std::fixed << std::setprecision(1); // Set precision to 1 decimal place
    std::cout << "Your percentage is: " << percentage << "%" << std::endl;

    return 0;
}
