#ifndef STACK_LL_ILOC_H
#define STACK_LL_ILOC_H

#include <iostream>
#include <string>

// Node for the linked list stack
struct Node {
    char data;
    Node* next = nullptr;
};

// Global pointer that points to the top of the stack
Node* topNode = nullptr;

// Push an opening symbol onto the stack
void push(char newData) {

    // Create a new node
    Node* newNode = new Node();

    // Store the symbol in the new node
    newNode->data = newData;

    // Link the new node to the current top node
    newNode->next = topNode;

    // Make the new node the top of the stack
    topNode = newNode;
}

// Pop the top symbol from the stack
char pop() {

    // Store the current top node in a temporary pointer
    Node* temp = topNode;

    // Store the data of the top node
    char tempVal = temp->data;

    // Move the top pointer to the next node
    topNode = topNode->next;

    // Delete the old top node to free memory
    delete temp;

    // Return the symbol that was removed
    return tempVal;
}

// Check if the stack is empty
bool isEmpty() {

    // Return true if there is no node in the stack
    return topNode == nullptr;
}

// Reset the stack before checking a new expression
void resetStack() {

    // Remove all remaining nodes from the stack
    while (topNode != nullptr) {

        // Store the current top node temporarily
        Node* temp = topNode;

        // Move the top pointer to the next node
        topNode = topNode->next;

        // Free the removed node from memory
        delete temp;
    }
}

// Check if the expression contains balanced symbols
bool checkBalanced(std::string expr) {

    // Reset the stack for every new expression
    resetStack();

    // Read the expression one character at a time
    for (char c : expr) {

        // Push an opening symbol onto the stack
        if (c == '(' || c == '{' || c == '[') {
            push(c);
        }

        // Check a closing symbol against the top of the stack
        else if (c == ')' || c == '}' || c == ']') {

            // Report an error if there is no opening symbol to match
            if (isEmpty()) {
                std::cout << "Closing symbol has no matching opening symbol."
                          << std::endl;
                return false;
            }

            // Remove the top opening symbol from the stack
            char top = pop();

            // Check if the opening and closing symbols match
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {

                // Report an error if the symbols do not match
                std::cout << "Symbols do not match." << std::endl;
                return false;
            }
        }

        // Ignore all characters that are not symbols to be balanced
    }

    // Report an error if an opening symbol remains in the stack
    if (!isEmpty()) {
        std::cout << "Opening symbol has no matching closing symbol."
                  << std::endl;
        return false;
    }

    // Return true when all symbols are properly matched
    return true;
}

#endif