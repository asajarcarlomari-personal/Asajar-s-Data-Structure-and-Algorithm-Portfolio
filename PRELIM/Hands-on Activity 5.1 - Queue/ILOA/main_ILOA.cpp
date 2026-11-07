#include <iostream>
#include <queue> // call the queue from the STL

void displayAll(std::queue<char> copyQueue);
void isEmpty(std::queue<char> emptyQueue);

int main() {
    // Create an object
    std::queue<char> myQ;

    // Testing the empty() function to check if the queue is empty
    std::cout << "\nIs the queue empty? " << std::endl;
    isEmpty(myQ);

    // Insert five elements into the queue
    myQ.push('C');
    myQ.push('A');
    myQ.push('R');
    myQ.push('L');
    myQ.push('O');

    // Display all elements in the queue
    std::cout << "\nElements in the queue: ";
    displayAll(myQ);

    // Testing the empty() function again after inserting elements
    std::cout << "\nIs the queue empty? " << std::endl;
    isEmpty(myQ);

    // size() -> returns the total number of elements in the queue
    std::cout << "\nSize of the queue: " << myQ.size() << "." << std::endl;

    // front() -> returns the first element in the queue
    std::cout << "\nFront of the queue: " << myQ.front() << std::endl;

    // back() -> returns the last element in the queue
    std::cout << "Back of the queue: " << myQ.back() << std::endl;

    // push() -> inserts an element at the back of the queue
    myQ.push('M');
    std::cout << "\nAfter pushing 'M': ";
    displayAll(myQ);

    // pop() -> removes the first element from the queue
    std::cout << "\nElement to be popped: " << myQ.front() << std::endl;
    myQ.pop();

    // Display the queue after removing the first element
    std::cout << "Queue after popping: ";
    displayAll(myQ);

    return 0;
}

void displayAll(std::queue<char> copyQueue) {
    // Creates a copy of the queue that was passed
    std::queue<char> c = copyQueue;

    while (!c.empty()) {
        std::cout << c.front();
        c.pop();
    }

    std::cout << std::endl;
}

void isEmpty(std::queue<char> emptyQueue) {
    // empty() -> checks if the queue contains any elements
    if (emptyQueue.empty()) {
        std::cout << "Queue is empty." << std::endl;
    } else {
        std::cout << "Queue is not empty." << std::endl;
    }
}