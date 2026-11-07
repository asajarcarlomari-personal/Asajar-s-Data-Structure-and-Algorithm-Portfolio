#include <iostream>
#include "node_ILOB.h"
#include "searchingAlgo_ILOB.h"

int main() {

    // PROBLEM 1 AND 2 GIVEN LIST
    int numbers[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    int arrSize = 10;
    int dataFind = 18;

    // PROBLEM 1
    std::cout << "\nPROBLEM 1:" << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    // Sequential Search using Array
    std::cout << "Sequential Search using Array:" << std::endl;
    std::cout << "Key to find: " << dataFind << std::endl;

    int arrComparisons = linearSearchArrCount(
        arrSize, dataFind, numbers
    );

    std::cout << "Number of comparisons: " << arrComparisons << std::endl;

    // Sequential Search using Linked List
    Node<int>* node1 = new_node(15);
    Node<int>* node2 = new_node(18);
    Node<int>* node3 = new_node(2);
    Node<int>* node4 = new_node(19);
    Node<int>* node5 = new_node(18);
    Node<int>* node6 = new_node(0);
    Node<int>* node7 = new_node(8);
    Node<int>* node8 = new_node(14);
    Node<int>* node9 = new_node(19);
    Node<int>* node10 = new_node(14);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;
    node8->next = node9;
    node9->next = node10;
    node10->next = nullptr;

    std::cout << std::endl;
    std::cout << "Sequential Search using Linked List:" << std::endl;
    std::cout << "Key to find: " << dataFind << std::endl;

    int listComparisons = linearSearchLLCount(
        node1, dataFind
    );

    std::cout << "Number of comparisons: " << listComparisons << std::endl;
    std::cout << "---------------------------------------\n" << std::endl;

    // PROBLEM 2
    std::cout << "PROBLEM 2:" << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    // Count repeating instances using Array
    std::cout << "Repeating Instances using Array:" << std::endl;
    std::cout << "Key to find: " << dataFind << std::endl;

    int arrCount = countRepeatingArr(
        arrSize, dataFind, numbers
    );

    std::cout << "Number of repeating instances: " << arrCount << std::endl;

    // Count repeating instances using Linked List
    std::cout << std::endl;
    std::cout << "Repeating Instances using Linked List:" << std::endl;
    std::cout << "Key to find: " << dataFind << std::endl;

    int listCount = countRepeatingLL(
        node1, dataFind
    );

    std::cout << "Number of repeating instances: " << listCount << std::endl;
    std::cout << "---------------------------------------\n" << std::endl;

    // PROBLEM 3
    int binaryNumbers[] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18};
    int binarySize = 10;
    int binaryKey = 8;

    std::cout << "PROBLEM 3:" << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    // Binary Search using Array
    std::cout << "Binary Search using Array:" << std::endl;
    std::cout << "Key to find: " << binaryKey << std::endl;

    int binaryComparisons = binarySearchArr(
        binarySize, binaryKey, binaryNumbers
    );

    std::cout << "Number of comparisons: " << binaryComparisons << std::endl;
    std::cout << "---------------------------------------\n" << std::endl;

    // PROBLEM 4
    std::cout << "PROBLEM 4:" << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    // Recursive Binary Search using Array
    std::cout << "Recursive Binary Search using Array:" << std::endl;
    std::cout << "Key to find: " << binaryKey << std::endl;

    int recursiveComparisons = 0;

    int recursiveResult = recursiveBinarySearch(
        binaryNumbers, 0, binarySize - 1, binaryKey, recursiveComparisons
    );

    if (recursiveResult != -1) {
        std::cout << "Key " << binaryKey << " was found at index " << recursiveResult << std::endl;
    }
    else {
        std::cout << "Key was not found." << std::endl;
    }

    std::cout << "Number of comparisons: " << recursiveComparisons << std::endl;
    std::cout << "---------------------------------------\n" << std::endl;

    return 0;
}