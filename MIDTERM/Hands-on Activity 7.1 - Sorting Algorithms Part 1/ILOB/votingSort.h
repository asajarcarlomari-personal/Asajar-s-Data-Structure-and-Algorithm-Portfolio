#ifndef VOTINGSORT_H
#define VOTINGSORT_H

#include <iostream>

// Display all elements in the array
template <typename T>
void displayArr(T arr[], int maxSize) {
    
    // Display each element in the array
    for (int i = 0; i < maxSize; i++) {
        std::cout << arr[i] << " ";
    }
    
    std::cout << std::endl;
}

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

// Count the votes for a candidate
template <typename T>
int countVotes(T arr[], int maxSize, int candidate) {
    int count = 0;

    // Check each element in the array
    for (int i = 0; i < maxSize; i++) {
        
        // Count the vote if it matches the candidate number
        if (arr[i] == candidate) {
            count++;
        }
    }

    // Return the total number of votes
    return count;
}

#endif