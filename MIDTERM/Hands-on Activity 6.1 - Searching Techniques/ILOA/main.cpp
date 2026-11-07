#include <iostream>
#include <cstdlib> // For generating random integers
#include <time.h> // Will be used for our seeding function
#include "node.h"
#include "searchingAlgo.h"

const int max_size = 50;

int main() {

    // Generate random dataset
    int dataset[max_size];
    srand(time(0));

    for (int i = 0; i < max_size; i++) {
        dataset[i] = rand() % 100;
    }

    for (int i = 0; i < max_size; i++) {
        std::cout << dataset[i] << " ";
    }

    std::cout << std::endl;
    
    // Create linear search for arrays
    int userInput;
    std::cout << "\nLinear Search for Arrays:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "What number to search? ";
    std::cin >> userInput;
    linearSearchArr(max_size, userInput, dataset);
    std::cout << std::endl;

    // Create linear search for linked list
    Node<char>* name1 = new_node('C');
    Node<char>* name2 = new_node('A');
    Node<char>* name3 = new_node('R');
    Node<char>* name4 = new_node('L');
    Node<char>* name5 = new_node('O');

    name1->next = name2;
    name2->next = name3;
    name3->next = name4;
    name4->next = name5;
    name5->next = nullptr;

    std::cout << "Linear Search for Linked List:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    linearSearchLL(name1, 'R');
    linearSearchLL(name2, 'r');
    std::cout << std::endl;

    // Create binary search for arrays
    std::cout << "Binary Search for Arrays:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    int numbers[] = {15, 20, 25, 35, 40, 45, 55, 60, 65, 75};
    binarySearchArr(10, 45, numbers);
    binarySearchArr(10, 50, numbers);
    std::cout << std::endl;

    // Create binary search for linked list
    Node<int>* value1 = new_node(12);
    Node<int>* value2 = new_node(24);
    Node<int>* value3 = new_node(36);
    Node<int>* value4 = new_node(48);
    Node<int>* value5 = new_node(60);

    value1->next = value2;
    value2->next = value3;
    value3->next = value4;
    value4->next = value5;
    value5->next = nullptr;

    std::cout << "Binary Search for Linked List:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    binarySearchLL(value1, 36);
    binarySearchLL(value1, 12);
    binarySearchLL(value1, 30);
    std::cout << std::endl;
    
}