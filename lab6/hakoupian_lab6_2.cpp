//Arvin Hakoupian
//Lab 6b part 1
//CS/IS 135

/* Start
  Prompt user for filename
  Open the file
  If file can't open, print error and stop

  Initialize totalSum to 0
  Initialize highestValue to smallest possible number

  For each value in the file:
    Add value to totalSum
    If value is greater than highestValue, update highestValue

  Print totalSum and highestValue
End */

#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

int main() {
    string filename;
    double value;
    double totalSum = 0.0;
    double highestValue = numeric_limits<double>::lowest();

    cout << "Enter the file name: ";
    cin >> filename;

    ifstream inputFile(filename);

    if (!inputFile) {
        cerr << "Error opening file: " << filename << endl;
        return 1;
    }

    while (inputFile >> value) {
        cout << "Read value: " << value << endl;
        totalSum += value;

        if (value > highestValue) {
            highestValue = value;
        }
    }

    inputFile.close();

    cout << "Total sum: " << totalSum << endl;
    cout << "Highest value: " << highestValue << endl;

    return 0;
}