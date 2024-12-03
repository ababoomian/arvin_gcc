#include <iostream>
#include <iomanip> 
#include <cmath>   

using namespace std;

int main() {
    int daysWorked;
    double dailyPay = 1.00; 
    double totalPay = 0.00;

    
    cout << "Enter the number of days worked: ";
    cin >> daysWorked;

    
    while (daysWorked < 1) {
        cout << "Number of days must be at least 1. Please enter again: ";
        cin >> daysWorked;
    }

    
    cout << fixed << setprecision(2); 
    cout << "\nDay\tPay\n";
    cout << "------------------\n";

    
    for (int day = 1; day <= daysWorked; ++day) {
        cout << day << "\t$" << dailyPay << endl; 
        totalPay += dailyPay;                     
        dailyPay *= 2;                            
    }

    
    cout << "------------------\n";
    cout << "Total Pay: $" << totalPay << endl;

    return 0;
}
