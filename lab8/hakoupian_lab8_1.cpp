//Arvin Hakoupian
//Lab 8 part 1
//CS/IS 135

#include <iostream>
using namespace std;


/*
Initialize variables:
    score1, score2, score3, score4, score5 (double)
    average (double)

Prompt user to enter 5 test scores:
    Read and store scores in score1, score2, score3, score4, score5

Display letter grades for each score:
    Call determineGrade(score) for each score
    Output the returned letter grade

Calculate average:
    Call calcAverage(score1, score2, score3, score4, score5)
    Store result in average

Display results:
    Output the average score
    Call determineGrade(average) and display the letter grade for the average

Functions:
    calcAverage(score1, score2, score3, score4, score5):
        Return (score1 + score2 + score3 + score4 + score5) / 5

    determineGrade(score):
        If score >= 90, return 'A'
        Else if score >= 80, return 'B'
        Else if score >= 70, return 'C'
        Else if score >= 60, return 'D'
        Else, return 'F'
*/

double calcAverage(double score1, double score2, double score3, double score4, double score5);
char determineGrade(double score);

int main() {
    double score1, score2, score3, score4, score5;

    cout << "Enter 5 test scores (0-100):" << endl;
    cout << "Score 1: ";
    cin >> score1;
    cout << "Score 2: ";
    cin >> score2;
    cout << "Score 3: ";
    cin >> score3;
    cout << "Score 4: ";
    cin >> score4;
    cout << "Score 5: ";
    cin >> score5;

    cout << "\nLetter Grades:" << endl;
    cout << "Score 1: " << determineGrade(score1) << endl;
    cout << "Score 2: " << determineGrade(score2) << endl;
    cout << "Score 3: " << determineGrade(score3) << endl;
    cout << "Score 4: " << determineGrade(score4) << endl;
    cout << "Score 5: " << determineGrade(score5) << endl;

    double average = calcAverage(score1, score2, score3, score4, score5);
    cout << "\nAverage Score: " << average << endl;
    cout << "Letter Grade for Average: " << determineGrade(average) << endl;

    return 0;
}

double calcAverage(double score1, double score2, double score3, double score4, double score5) {
    return (score1 + score2 + score3 + score4 + score5) / 5.0;
}

char determineGrade(double score) {
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}