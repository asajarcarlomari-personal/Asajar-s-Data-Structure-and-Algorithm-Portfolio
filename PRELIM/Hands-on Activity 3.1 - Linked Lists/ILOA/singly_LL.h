#ifndef SINGLY_LL_H
#define SINGLY_LL_H

#include <iostream>

template <typename T>
class SinglyList {
public:
    T data;
    SinglyList<T>* next = nullptr;
};

// Traversal
template <typename T>
void listTraversal(SinglyList<T>* head) {

    // Check if the list is empty
    if (head == nullptr) {
        std::cout << "List is empty!" << std::endl;
        return;
    }

    // Traverse the list
    while (head != nullptr) {

        // Print the data
        std::cout << head->data;

        // Check if there is a next node
        if (head->next != nullptr) {
            std::cout << "->";
        }

        // Move to the next node
        head = head->next;
    }
}

// Node Insertion (Head)
template <typename T>
void sllinsertHead(T newData, SinglyList<T>** currentHead) {

    // Create a new node
    SinglyList<T>* newNode = new SinglyList<T>;

    // Store data in the new node
    newNode->data = newData;

    // Connect the new node to the current head
    newNode->next = *currentHead;

    // Make the new node the head
    *currentHead = newNode;
}

// Node Insertion (Body)
template <typename T>
void sllGeneralInsert(T newData, SinglyList<T>* prevNode) {

    // Check if the previous node is null
    if (prevNode == nullptr) {
        std::cout << "Previous node cannot be null!" << std::endl;
        return;
    }

    // Create a new node
    SinglyList<T>* newNode = new SinglyList<T>;

    // Store data in the new node
    newNode->data = newData;

    // Point the new node to the node after the previous node
    newNode->next = prevNode->next;

    // Connect the previous node to the new node
    prevNode->next = newNode;
}

// Node Insertion (End)
template <typename T>
void sllinsertEnd(T newData, SinglyList<T>** head) {

    // Create a new node
    SinglyList<T>* newNode = new SinglyList<T>;

    // Store data in the new node
    newNode->data = newData;

    // Point next of the new node to NULL
    newNode->next = nullptr;

    // If the list is empty
    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    // Traverse to the last node
    SinglyList<T>* currentNode = *head;

    while (currentNode->next != nullptr) {
        currentNode = currentNode->next;
    }

    // Connect the last node to the new node
    currentNode->next = newNode;
}

// Delete Nodes
template <typename T>
void sllDeleteNodes(T findData, SinglyList<T>** head) {

    if (*head == nullptr) return;

    SinglyList<T>* currNode = *head;
    SinglyList<T>* prevNode = nullptr;

    // Search for the node
    while (currNode != nullptr && currNode->data != findData) {
        prevNode = currNode;
        currNode = currNode->next;
    }

    // Data not found
    if (currNode == nullptr) return;

    // If the node is the head
    if (prevNode == nullptr) {
        *head = currNode->next;
    }
    else {
        prevNode->next = currNode->next;
    }

    // Delete the found node
    delete currNode;
}

// Delete All Nodes
template <typename T>
void sllDeleteList(SinglyList<T>** head) {

    SinglyList<T>* current = *head;

    while (current != nullptr) {

        SinglyList<T>* temp = current;
        current = current->next;

        // Delete the current node
        delete temp;
    }

    // Set the head to null
    *head = nullptr;
}

#endif