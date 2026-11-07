#ifndef SEARCHINGALGO_ILOB_H
#define SEARCHINGALGO_ILOB_H

#include <iostream>

// Sequential Search using Array
template <typename T>
int linearSearchArrCount(int arrSize, T dataFind, T list[]) {

    int comparisons = 0;

    // Search each element of the array
    for (int i = 0; i < arrSize; i++) {

        comparisons++;

        // Check if the current element matches the key
        if (dataFind == list[i]) {
            return comparisons;
        }
    }

    return comparisons;
}

// Sequential Search using Linked List
template <typename T>
int linearSearchLLCount(Node<T>* head, T dataFind) {

    int comparisons = 0;

    // Continue searching until the end of the linked list
    while (head != nullptr) {

        comparisons++;

        // Check if the current node matches the key
        if (head->data == dataFind) {
            return comparisons;
        }

        // Move to the next node
        head = head->next;
    }

    return comparisons;
}

// Count Repeating Instances using Array
template <typename T>
int countRepeatingArr(int arrSize, T dataFind, T list[]) {

    int count = 0;

    // Search each element of the array
    for (int i = 0; i < arrSize; i++) {

        // Check if the current element matches the key
        if (dataFind == list[i]) {
            count++;
        }
    }

    return count;
}

// Count Repeating Instances using Linked List
template <typename T>
int countRepeatingLL(Node<T>* head, T dataFind) {

    int count = 0;

    // Continue searching until the end of the linked list
    while (head != nullptr) {

        // Check if the current node matches the key
        if (head->data == dataFind) {
            count++;
        }

        // Move to the next node
        head = head->next;
    }

    return count;
}

// Binary Search
template <typename T>
int binarySearchArr(int arrSize, T dataFind, T list[]) {

    // Define low, high, and middle
    int low = 0;
    int up = arrSize - 1;
    int comparisons = 0;

    // Loop while low is less than or equal to high
    while (low <= up) {

        // Compute for middle
        int middle = (low + up) / 2;

        comparisons++;

        // If data found is middle -> data found -> return
        if (dataFind == list[middle]) {
            std::cout << "Key " << dataFind
                      << " was found at index " << middle << std::endl;
            return comparisons;
        }

        // If data find < data middle -> new high
        else if (dataFind < list[middle]) {
            up = middle - 1;
        }

        else {

            // Else update low = middle + 1
            low = middle + 1;
        }
    }

    // Search is not found
    std::cout << "Key was not found." << std::endl;
    return comparisons;
}

// Recursive Binary Search
template <typename T>
int recursiveBinarySearch(
    T list[], int low, int up, T dataFind, int& comparisons
) {

    // Check if the search range is no longer valid
    if (low > up) {
        return -1;
    }

    // Compute for middle
    int middle = (low + up) / 2;

    comparisons++;

    // If data found is middle -> data found -> return
    if (list[middle] == dataFind) {
        return middle;
    }

    // If data find < data middle -> search the left side
    else if (dataFind < list[middle]) {
        return recursiveBinarySearch(
            list, low, middle - 1, dataFind, comparisons
        );
    }

    else {

        // Else search the right side
        return recursiveBinarySearch(
            list, middle + 1, up, dataFind, comparisons
        );
    }
}

#endif