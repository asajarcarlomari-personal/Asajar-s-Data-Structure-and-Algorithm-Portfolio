#ifndef STACK_ARR_ILOC_H
#define STACK_ARR_ILOC_H

#include <iostream>
#include <string>

// Maximum number of symbols that can be stored in the stack
const int MAX_SIZE = 100;

// Array used to store the stack elements
char stack[MAX_SIZE];

// Index that points to the top of the stack
int top = -1;

// Push an opening symbol onto the stack
void push(char newData) {

    // Check if the stack is full
    if (top == MAX_SIZE - 1) {
        std::cout << "Stack overflow." << std::endl;
        return;
    }

    // Move the top index to the next position
    top++;

    // Store the symbol in the stack
    stack[top] = newData;
}

// Pop the top symbol from the stack
char pop() {

    // Store the top symbol
    char tempVal = stack[top];

    // Move the top index down
    top--;

    // Return the symbol that was removed
    return tempVal;
}

// Check if the stack is empty
bool isEmpty() {

    // Return true if the top index is -1
    return top == -1;
}

// Reset the stack before checking a new expression
void resetStack() {

    // Reset the top index to -1
    top = -1;
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
            char topSymbol = pop();

            // Check if the opening and closing symbols match
            if ((c == ')' && topSymbol != '(') ||
                (c == '}' && topSymbol != '{') ||
                (c == ']' && topSymbol != '[')) {

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