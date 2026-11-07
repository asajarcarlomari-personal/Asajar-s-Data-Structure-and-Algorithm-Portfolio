#ifndef PROBLEM1_ILOB_H
#define PROBLEM1_ILOB_H

#include <iostream>

// Partition the array for Quick Sort
template <typename T>
int partition(T arr[], int low, int high) {

    // Select the last element as the pivot
    T pivot = arr[high];

    // Set the position before the first element
    int i = low - 1;

    // Compare each element with the pivot
    for (int j = low; j < high; j++) {

        // Move smaller elements before the pivot
        if (arr[j] < pivot) {
            i++;

            // Swap the elements
            T temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Place the pivot in its correct position
    T temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    // Return the pivot position
    return i + 1;
}

// Sort the sublist using Bubble Sort
template <typename T>
void bubbleSort(T arr[], int low, int high) {

    // Compare elements in the sublist
    for (int i = low; i < high; i++) {

        for (int j = low; j < high - (i - low); j++) {

            // Swap the elements when the left value is larger
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Display all elements in the array
template <typename T>
void displayArr(T arr[], int maxSize) {

    // Display each element in the array
    for (int i = 0; i < maxSize; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

#endif