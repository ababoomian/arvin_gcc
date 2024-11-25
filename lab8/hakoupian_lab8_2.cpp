//Arvin Hakoupian
//Lab 8 part 2
//CS/IS 135

#include <iostream>
#include <iomanip>
using namespace std;

/*
Start

Repeat:
    Show the conversion menu
    Get user's choice

    If choice is invalid (not 1-4):
        Prompt until valid choice is entered

    If choice is 4:
        Print "Exiting program. Goodbye!"
        Exit loop

    Prompt for meters (non-negative)
    If meters is invalid (negative):
        Prompt until valid meters is entered

    Perform conversion based on choice:
        If choice is 1: Convert meters to kilometers and display result
        If choice is 2: Convert meters to inches and display result
        If choice is 3: Convert meters to feet and display result

Until user chooses to quit (choice 4)

End
*/

void showMenu();
double convertKilometers(double meters);
double convertInches(double meters);
double convertFeet(double meters);

int main() 
{
    int choice;
    double meters;

    do 
    {
        showMenu();
        cin >> choice;

        while (choice < 1 || choice > 4) 
        {
            cout << "Invalid choice. Please select a number between 1 and 4: ";
            cin >> choice;
        }

        if (choice == 4) 
        {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }

        cout << "Enter the number of meters (non-negative): ";
        cin >> meters;
        while (meters < 0) 
        {
            cout << "Meters cannot be negative. Enter again: ";
            cin >> meters;
        }

        cout << fixed << setprecision(3);
        switch (choice) 
        {
            case 1:
                cout << meters << " meters is " << convertKilometers(meters) << " kilometers." << endl;
                break;
            case 2:
                cout << meters << " meters is " << convertInches(meters) << " inches." << endl;
                break;
            case 3:
                cout << meters << " meters is " << convertFeet(meters) << " feet." << endl;
                break;
        }

    } while (choice != 4);

    return 0;
}

void showMenu() 
{
    cout << "\nConversion Menu:" << endl;
    cout << "1. Convert to Kilometers" << endl;
    cout << "2. Convert to Inches" << endl;
    cout << "3. Convert to Feet" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice: ";
}

double convertKilometers(double meters) 
{
    return meters * 0.001;
}

double convertInches(double meters) 
{
    return meters * 39.37;
}

double convertFeet(double meters) 
{
    return meters * 3.281;
}