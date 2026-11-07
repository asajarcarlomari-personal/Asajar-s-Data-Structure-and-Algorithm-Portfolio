#include <iostream>
#include "problem1_ILOB.h"

const int maxSize = 7;

int main() {

    // Create an example array
    int arr[maxSize] = {8, 3, 7, 2, 9, 4, 6};

    // Display the original array
    std::cout << "\nArray:" << std::endl;
    std::cout << "-------------------------" << std::endl;
    displayArr(arr, maxSize);

    // Partition the array using Quick Sort
    int pivot = partition(arr, 0, maxSize - 1);

    // Display the left sublist
    std::cout << "\nLeft Sublist:" << std::endl;
    std::cout << "-------------------------" << std::endl;
    displayArr(arr, pivot);

    // Display the pivot
    std::cout << "\nPivot: " << arr[pivot] << std::endl;

    // Display the right sublist
    std::cout << "\nRight Sublist:" << std::endl;
    std::cout << "-------------------------" << std::endl;
    displayArr(arr + pivot + 1, maxSize - pivot - 1);

    // Sort the left sublist using Bubble Sort
    bubbleSort(arr, 0, pivot - 1);

    // Sort the right sublist using Bubble Sort
    bubbleSort(arr, pivot + 1, maxSize - 1);

    // Display the final sorted array
    std::cout << "\nFinal Sorted Array:" << std::endl;
    std::cout << "-------------------------" << std::endl;
    displayArr(arr, maxSize);

    std::cout << std::endl;

    return 0;
}