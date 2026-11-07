#include <iostream>
#include <stack> // call the stack from the STL

int main(){
    std::stack<int> newStack;
    std::stack<int> firstStack;
    std::stack<int> secondStack; // created an object

    // testing the empty() function to check if the stack is empty
    std::cout << "\nIs the stack empty? " << newStack.empty() << std::endl;

    // insert three elements into the stack
    newStack.push(3);
    std::cout << "Top of stack: " << newStack.top() << std::endl;
    newStack.push(2);
    std::cout << "Top of stack: " << newStack.top() << std::endl;
    newStack.push(1);
    std::cout << "Top of stack: " << newStack.top() << std::endl;

    // testing the empty() function again after inserting elements
    std::cout << "\nIs the stack empty? " << newStack.empty() << std::endl;
    newStack.push(4);
    newStack.push(5);
    newStack.push(6);

    // size() -> returns the total number of elements in the stack
    std::cout << "Size of the stack: " << newStack.size() << "." << std::endl;

    // swap -> swap the content of the public member function
    firstStack.push(7);
    secondStack.push(8);
    firstStack.swap(secondStack);
    std::cout << "\nSwapping..." << std::endl;
    std::cout << "firstStack: " << firstStack.top() << std::endl;
    std::cout << "secondStack: " << secondStack.top() << std::endl;

    // emplace() -> constructs and inserts an element into the stack
    std::cout << "\nEmplace of the stack..." << std::endl;
    newStack.emplace(9);
    std::cout << "Top of the stack: " << newStack.top() << std::endl;
    std::cout << "Size of the stack: " << newStack.size() << std::endl << std::endl;
    
    return 0;
}