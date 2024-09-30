//Arvin Hakoupian
//Lab 3 part 4
//CS/IS 135

#include<iostream>

/*   
      DECLARE: total number of questions and correct answers 
      PROMPT: total number of questions on the test 
      PROMPT:  how many questions they answered correctly 
      CALCULATE:  percentage using type casting to double for division 
      DISPLAY: results 
 */

int main()
{
    int totalQuestion;
    std::cout << "Write a total number of questions ";
    std::cin >> totalQuestion;

    int correctAnswers;
    std::cout << "how many questions have you answered correctly ";
    std::cin >> correctAnswers;

    double percentage =  (static_cast<double> (correctAnswers) / totalQuestion) * 100;
    std::cout << " You got " << correctAnswers << " out of " << totalQuestion 
    << " correct. Your percentage is: " << percentage << "%" << std::endl;

}