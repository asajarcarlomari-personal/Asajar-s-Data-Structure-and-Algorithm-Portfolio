#ifndef SORTINGALGOPART2_H
#define SORTINGALGOPART2_H

#include <iostream>

// Sort the array using Shell Sort
template <typename T>
void shellSort(T arr[], int maxSize) {

    // Start with a gap of half the array size
    for (int gap = maxSize / 2; gap > 0; gap /= 2) {
        
        // Compare elements that are gap positions apart
        for (int i = gap; i < maxSize; i++) {
            
            // Store the current element
            T temp = arr[i];
            int j = i;

            // Move larger elements to the right
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j = j - gap;
            }

            // Place the current element in the correct position
            arr[j] = temp;
        }
    }
}

// Merge two sorted parts of the array
template <typename T>
void merge(T arr[], int left, int middle, int right) {

    // Set the starting positions of the two parts
    int i = left;
    int j = middle + 1;
    int k = 0;

    // Calculate the size of the temporary array
    int maxSize = right - left + 1;

    // Create a temporary array
    T* temp = new T[maxSize];

    // Compare elements from both parts
    while (i <= middle && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        }
        else {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    // Copy the remaining elements from the left part
    while (i <= middle) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy the remaining elements from the right part
    while (j <= right) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy the sorted elements back to the original array
    for (int x = 0; x < maxSize; x++) {
        arr[left + x] = temp[x];
    }

    // Delete the temporary array
    delete[] temp;
}

// Sort the array using Merge Sort
template <typename T>
void mergeSort(T arr[], int left, int right) {

    // Check if the array can still be divided
    if (left < right) {

        // Find the middle position
        int middle = (left + right) / 2;

        // Sort the left part of the array
        mergeSort(arr, left, middle);

        // Sort the right part of the array
        mergeSort(arr, middle + 1, right);

        // Merge the two sorted parts
        merge(arr, left, middle, right);
    }
}

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

// Sort the array using Quick Sort
template <typename T>
void quickSort(T arr[], int low, int high) {

    // Check if the array can still be divided
    if (low < high) {

        // Find the pivot position
        int pivot = partition(arr, low, high);

        // Sort the elements before the pivot
        quickSort(arr, low, pivot - 1);

        // Sort the elements after the pivot
        quickSort(arr, pivot + 1, high);
    }
}

#endif