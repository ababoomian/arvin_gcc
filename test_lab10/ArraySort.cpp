#include <iostream>
#include <cstdlib> 
#include <ctime>   


void bubbleSort(int arr[], int size) {
    bool swap;
    int pass = 1;
    do {
        swap = false;
        for (int count = 0; count < size - pass; count++) {
            if (arr[count] > arr[count + 1]) {
                int temp = arr[count];
                arr[count] = arr[count + 1];
                arr[count + 1] = temp;
                swap = true;
            }
        }
        pass++;
    } while (swap);
}

int main() {
    int size;
    
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
  
    int* values = new int[size];

    srand(42);   
    std::cout << "Unsorted Array: ";
    for (int i = 0; i < size; ++i) {
        values[i] = rand() % 100; 
        std::cout << values[i];
        if (i < size - 1) std::cout << ", ";
    }
    std::cout << std::endl;
    
    bubbleSort(values, size);

    std::cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << values[i];
        if (i < size - 1) std::cout << ", ";
    }
    std::cout << std::endl;

    delete[] values;

    return 0;
}
