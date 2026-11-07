#ifndef QUEUELL_ILOB1_H
#define QUEUELL_ILOB1_H

#include <iostream>

// Create a class for the node
template <typename T>
class qNode{
    public:
        T data;
        qNode<T>* next;
};

// Create the new node
template <typename T>
qNode<T>* new_node(T newData){
    qNode<T>* newNode = new qNode<T>;
    newNode->data = newData;
    newNode->next = nullptr;

    return newNode;
}

// Enqueue operation
template <typename T>
void enqueue(T newData, qNode<T>** frontPtr, qNode<T>** backPtr){
    // Create the new node
    qNode<T>* newNode = new_node(newData);

    // Inserting an item into an empty queue
    if((*frontPtr) == nullptr && (*backPtr) == nullptr){
        (*frontPtr) = newNode;
        (*backPtr) = newNode;

        return;
    }

    // Inserting an item into a non-empty queue
    (*backPtr)->next = newNode;
    (*backPtr) = newNode;
}

// Dequeue operation
template <typename T>
void dequeue(qNode<T>** frontPtr, qNode<T>** backPtr){
    // Check if the queue is empty
    if((*frontPtr) == nullptr && (*backPtr) == nullptr){
        std::cout << "Queue is empty." << std::endl << std::endl;

        return;
    }

    // Create a temporary node
    qNode<T>* deleteNode = nullptr;
    deleteNode = (*frontPtr);

    // Deleting an item from a queue with one item
    if((*frontPtr)->next == nullptr){
        (*frontPtr) = nullptr;
        (*backPtr) = nullptr;

        delete deleteNode;

        return;
    }

    // Deleting an item from a queue with more than one item
    (*frontPtr) = (*frontPtr)->next;

    deleteNode->next = nullptr;
    delete deleteNode;
}

// Check the front
template <typename T>
void checkFront(qNode<T>* frontPtr){
    // Check if the queue is empty
    if(frontPtr == nullptr){
        std::cout << "Queue is empty." << std::endl << std::endl;

        return;
    }

    // Display the front element
    std::cout << "Current Front: " << frontPtr->data << std::endl;
}

// Check the back
template <typename T>
void checkBack(qNode<T>* backPtr){
    // Check if the queue is empty
    if(backPtr == nullptr){
        std::cout << "Queue is empty." << std::endl << std::endl;

        return;
    }

    // Display the back element
    std::cout << "Current Back: " << backPtr->data << std::endl;
}

// Display all elements
template <typename T>
void displayAll(qNode<T>* frontPtr){
    // Check if the queue is empty
    if(frontPtr == nullptr){
        std::cout << "Queue is empty." << std::endl << std::endl;

        return;
    }

    // Display all elements in the queue
    std::cout << "Current Queue: ";

    while(frontPtr != nullptr){
        std::cout << frontPtr->data << " ";
        frontPtr = frontPtr->next;
    }

    std::cout << std::endl;
}

#endif