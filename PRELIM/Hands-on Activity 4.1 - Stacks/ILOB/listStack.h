#ifndef LIST_STACK_H
#define LIST_STACK_H

#include <iostream>

// include node with data and next members
template <typename T>
class Node {
    public:
    T data;
    Node<T>* next = nullptr;
};

// create a pointer/reference head that always points to the current top node
template <typename T>
Node<T>* head = nullptr;

// pushing operation:
template <typename T>
void push(T newData){
    // create a new node
    Node<T>* newNode = new Node<T>;

    // assign the data to the new node
    newNode->data = newData;

    // point the new node to the current top node
    newNode->next = head<T>;

    // assign the new top to the new node
    head<T> = newNode;
}

// isEmpty()
template <typename T>
bool isEmpty(){
    // check if the head is pointing to nothing
    return head<T> == nullptr;
}

// pop() operation:
template <typename T>
T pop(){
    // if the stack is empty, display an error message and return an empty value
    if(isEmpty<T>()){
        std::cout << "Stack underflow." << std::endl;
        return T();
    }

    // save the current top node to a temporary variable
    Node<T>* temp = head<T>;

    // store the data of the current top node
    T tempVal = temp->data;

    // move the head to the next node
    head<T> = head<T>->next;

    // free up the memory of the removed node
    delete temp;

    // return the data of the removed node
    return tempVal;
}

// Top() operation:
template <typename T>
void Top(){
    // check if the stack is empty
    if(isEmpty<T>()){
        std::cout << "Stack Underflow." << std::endl;
        return;
    }

    // display the data of the current top node
    std::cout << "\nCurrent Top: " << head<T>->data << std::endl;
}

// displayAll() operation:
template <typename T>
void displayAll(){

    // check if the stack is empty
    if(isEmpty<T>()){
        std::cout << "\nList is empty." << std::endl;
        return;
    }

    // create a temporary pointer starting from the current top
    Node<T>* currNode = head<T>;

    // display all elements without changing the actual head
    std::cout << "\nDisplaying elements..." << std::endl;

    while(currNode != nullptr){

        // display the data of the current node
        std::cout << currNode->data;

        // display an arrow if another node exists
        if(currNode->next != nullptr){
            std::cout << " -> ";
        }

        // move to the next node
        currNode = currNode->next;
    }

    std::cout << std::endl;
}

#endif