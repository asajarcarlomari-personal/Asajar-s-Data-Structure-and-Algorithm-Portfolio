#ifndef SORTINGALGO_H
#define SORTINGALGO_H
#include <iostream>

// Sort the array using Bubble Sort
template <typename T>
void bubbleSort(T arr[], int maxSize) {
    
    // Compare each element with the elements after it
    for (int i = 0; i < maxSize; i++) {
        for (int j = i + 1; j < maxSize; j++) {
            
            // Swap the elements if the current element is greater
            if (arr[j] < arr[i]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}

// Find the position of the smallest element
template <typename T>
int routine_smallest(T arr[], int k, int arrSize){
    
    // Start the smallest position at k
    int position = k;

    // Store the current smallest element
    T smallestElement = arr[k];

    // Check the remaining elements in the array
    for(int j = k+1; j < arrSize; j++){
        
        // Update the smallest element and its position
        if(arr[j] < smallestElement){
            smallestElement = arr[j];
            position = j;
        }
    }

    // Return the position of the smallest element
    return position;
}

// Sort the array using selection sort
template <typename T>
void selectionSort(T arr[], int arrSize){
    int min, temp;

    // Find the smallest element for each position
    for(int i = 0; i < arrSize; i++ ){
        
        // Get the position of the smallest element
        min = routine_smallest(arr, i, arrSize);

        // Swap the current element with the smallest element
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

// Sort the array using insertion sort
template <typename T>
void insertionSort(T arr[], int arrSize){
    int k = 1, j;
    T temp;

    // Start from the second element
    while(k < arrSize){
        
        // Store the current element
        temp = arr[k];
        j = k - 1;

        // Move larger elements one position to the right
        while(j >= 0  && temp <= arr[j]){
            arr[j + 1] = arr[j];
            j--;
        }

        // Place the current element in the correct position
        arr[j + 1] = temp;
        k++;
    }
}

#endif