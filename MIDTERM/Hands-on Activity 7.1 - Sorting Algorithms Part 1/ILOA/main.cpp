#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sortingAlgo.h"

const int maxSize = 100;

void displayArr(int arr[]);

int main() {

    // Create an array with 100 unsorted elements
    int unsortedArr[maxSize];
    int bubbleArr[maxSize];
    int selectionArr[maxSize];
    int insertionArr[maxSize];

    // Use time(0) as seed for random values
    srand(time(0));

    // Populate the array with random values
    for (int i = 0; i < maxSize; i++) {
        unsortedArr[i] = rand() % 100;
    }

    // Copy the original array for each sorting algorithm
    for (int i = 0; i < maxSize; i++) {
        bubbleArr[i] = unsortedArr[i];
        selectionArr[i] = unsortedArr[i];
        insertionArr[i] = unsortedArr[i];
    }

    // Display the original array
    std::cout << "\nArray:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    displayArr(unsortedArr);

    // Sort the array using Bubble Sort
    std::cout << "\nBubble Sort:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    bubbleSort(bubbleArr, maxSize);
    displayArr(bubbleArr);

    // Sort the array using Selection Sort
    std::cout << "\nSelection Sort:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    selectionSort(selectionArr, maxSize);
    displayArr(selectionArr);

    // Sort the array using Insertion Sort
    std::cout << "\nInsertion Sort:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    insertionSort(insertionArr, maxSize);
    displayArr(insertionArr);
    
    std::cout << std::endl;
}

// Display all elements in the array
void displayArr(int arr[]) {
    for (int i = 0; i < maxSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}