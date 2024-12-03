#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

void displayStarryNight(char arr[10][10]) {
    
    cout << "Starry Night\n" << endl;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    char starryNight[10][10];
    
    srand(1701); 
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            int randomValue = rand() % 15; 
            if (randomValue == 0) {
                starryNight[i][j] = '*';
            } else if (randomValue == 1 || randomValue == 2) {
                starryNight[i][j] = '.';
            } else {
                starryNight[i][j] = ' ';
            }
        }
    }

    
    displayStarryNight(starryNight);
    int row, col;
    while (true) {
        cout << "\nEnter row for satellite: ";
        cin >> row;
        cout << "Enter column for satellite: ";
        cin >> col;

        
        if (row < 0 || row >= 10 || col < 0 || col >= 10) {
            cout << "Coordinates out of range. Try again." << endl;
            continue;
        }

        
        if (starryNight[row][col] == '*') {
            cout << "Cannot place there. Try again." << endl;
        } else {
            
            starryNight[row][col] = '@';
            break;
        }
    }

    cout << endl;
    displayStarryNight(starryNight);

    return 0;
}
