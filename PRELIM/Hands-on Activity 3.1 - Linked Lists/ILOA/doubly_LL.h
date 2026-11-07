#ifndef DOUBLE_LL_H
#define DOUBLE_LL_H

#include <iostream>

// Creating a template
template <typename T>
class DoubleList {
public:
    T data;
    DoubleList<T>* prev = nullptr;
    DoubleList<T>* next = nullptr;
};

// Create a new node
template <typename T>
DoubleList<T>* createNode(T newData) {

    // Dynamically allocate memory for the new node
    DoubleList<T>* newNode = new DoubleList<T>;

    newNode->data = newData;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    // Return the address of the newly created node
    return newNode;
}

// Traverse the list
template <typename T>
void dllTraverse(DoubleList<T>* currentNode) {

    DoubleList<T>* tail = nullptr;

    // Check if the list is empty
    if (currentNode == nullptr) {
        std::cout << "The list is empty." << std::endl;
        return;
    }

    // Forward traversing
    std::cout << "Forward: " << std::endl;

    while (currentNode != nullptr) {

        std::cout << currentNode->data << " ";

        // Save the current node as the last visited node
        tail = currentNode;

        // Move to the next node
        currentNode = currentNode->next;
    }

    std::cout << std::endl;

    // Backward traversing
    std::cout << "Backward: " << std::endl;

    while (tail != nullptr) {

        std::cout << tail->data << " ";

        // Move toward the previous node
        tail = tail->prev;
    }

    std::cout << std::endl;
}

// Insert at the head
template <typename T>
void dllInsertHead(T newData, DoubleList<T>*& head) {

    // Create a new node
    DoubleList<T>* newNode = createNode(newData);

    // If the list is empty
    if (head == nullptr) {
        head = newNode;
        return;
    }

    // Connect the new node to the current head
    newNode->next = head;
    head->prev = newNode;

    // Make the new node the head
    head = newNode;
}

// Insert between two nodes
template <typename T>
void dllInsertAny(
    T newData,
    DoubleList<T>* prevNode,
    DoubleList<T>* currentNode
) {

    // Check if the previous node is null
    if (prevNode == nullptr) {
        std::cout << "Previous node cannot be null." << std::endl;
        return;
    }

    // Create a new node
    DoubleList<T>* newNode = createNode(newData);

    // Connect the new node
    newNode->next = currentNode;
    newNode->prev = prevNode;

    // Connect the previous node to the new node
    prevNode->next = newNode;

    // Connect the current node back to the new node
    if (currentNode != nullptr) {
        currentNode->prev = newNode;
    }
}

// Insert at the end
template <typename T>
void dllInsertEnd(T newData, DoubleList<T>** head) {

    // Create a new node
    DoubleList<T>* newNode = createNode(newData);

    // If the list is empty
    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    // Traverse to the last node
    DoubleList<T>* currentNode = *head;

    while (currentNode->next != nullptr) {
        currentNode = currentNode->next;
    }

    // Connect the last node to the new node
    currentNode->next = newNode;
    newNode->prev = currentNode;
}

// Delete a node
template <typename T>
void dllDeleteNode(
    DoubleList<T>* nodeToDelete,
    DoubleList<T>** head
) {

    if (nodeToDelete == nullptr) {
        return;
    }

    // Get previous and next nodes
    DoubleList<T>* prevNode = nodeToDelete->prev;
    DoubleList<T>* nextNode = nodeToDelete->next;

    // Update the previous node
    if (prevNode != nullptr) {
        prevNode->next = nextNode;
    }
    else {
        // Deleting the head node
        *head = nextNode;
    }

    // Update the next node
    if (nextNode != nullptr) {
        nextNode->prev = prevNode;
    }

    // Delete the node
    delete nodeToDelete;
}

// Delete all nodes
template <typename T>
void dllDeleteList(DoubleList<T>*& head) {

    DoubleList<T>* current = head;

    while (current != nullptr) {

        DoubleList<T>* temp = current;
        current = current->next;

        // Delete the current node
        delete temp;
    }

    // Set the head to null
    head = nullptr;
}

#endif