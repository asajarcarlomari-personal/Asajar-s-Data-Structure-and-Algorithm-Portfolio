#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sortingAlgoPart2.h"

const int maxSize = 100;

void displayArr(int arr[]);

int main() {

    // Create an array with 100 unsorted elements
    int unsortedArr[maxSize];
    int shellArr[maxSize];
    int mergeArr[maxSize];
    int quickArr[maxSize];

    // Use time(0) as seed for random values
    srand(time(0));

    // Populate the array with random values
    for (int i = 0; i < maxSize; i++) {
        unsortedArr[i] = rand() % 100;
    }

    // Copy the original array for each sorting algorithm
    for (int i = 0; i < maxSize; i++) {
        shellArr[i] = unsortedArr[i];
        mergeArr[i] = unsortedArr[i];
        quickArr[i] = unsortedArr[i];
    }

    // Display the original array
    std::cout << "\nArray:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    displayArr(unsortedArr);

    // Sort the array using Shell Sort
    std::cout << "\nShell Sort:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    shellSort(shellArr, maxSize);
    displayArr(shellArr);

    // Sort the array using Merge Sort
    std::cout << "\nMerge Sort:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    mergeSort(mergeArr, 0, maxSize - 1);
    displayArr(mergeArr);

    // Sort the array using Quick Sort
    std::cout << "\nQuick Sort:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    quickSort(quickArr, 0, maxSize - 1);
    displayArr(quickArr);

    std::cout << std::endl;
}

// Display all elements in the array
void displayArr(int arr[]) {
    for (int i = 0; i < maxSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}