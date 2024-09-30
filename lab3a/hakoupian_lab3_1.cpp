//Arvin Hakoupian
//Lab 3 part 1
//CS/IS 135

#include<iostream>

/*  
    DECLARE: variables to hold the test scores 
    PROMPT: the user for input score1 
    PROMPT: the user for input score2 
    PROMPT: the user for input score3 
    CALCULATE:  average = (score1 + score2 + score3) / 3 
    DISPLAY:  average 
*/

int main()

{
    double score1;
    double score2;
    double score3;

    std::cout << "Enter a score1 " ;
    std::cin >> score1;
    std::cout << "Enter a score2 " ;
    std::cin >> score2;
    std::cout << "Enter a score3 " ;
    std::cin >> score3;

    double avarage = (score1 + score2 + score3) /3;

    std::cout << "Avarage of " << score1 << " " << score2 
    << " " << score3 << " is: " << avarage << std::endl;
}