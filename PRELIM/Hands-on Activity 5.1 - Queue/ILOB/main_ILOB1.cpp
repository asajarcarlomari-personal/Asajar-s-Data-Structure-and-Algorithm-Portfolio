#include <iostream>
#include "queueLL_ILOB1.h"

int main(){

    qNode<char>* front = nullptr;
    qNode<char>* back = nullptr;

    // Inserting an item into an empty queue
    enqueue('C', &front, &back);
    std::cout << front->data << " " << back->data << std::endl;

    // Inserting an item into a non-empty queue
    enqueue('A', &front, &back);
    std::cout << front->data << " " << back->data << std::endl;
    enqueue('R', &front, &back);
    std::cout << front->data << " " << back->data << std::endl;
    enqueue('L', &front, &back);
    std::cout << front->data << " " << back->data << std::endl;
    enqueue('O', &front, &back);
    std::cout << front->data << " " << back->data << std::endl << std::endl;

    // Display all elements in the queue
    displayAll(front);

    // Check the front of the queue
    checkFront(front);

    // Check the back of the queue
    checkBack(back);

    std::cout << std::endl;

    // Deleting an item from a queue of more than one item
    dequeue(&front, &back);
    std::cout << front->data << " " << back->data << std::endl;
    dequeue(&front, &back);
    std::cout << front->data << " " << back->data << std::endl;
    dequeue(&front, &back);
    std::cout << front->data << " " << back->data << std::endl << std::endl;
    
    // Display the queue
    displayAll(front);

    // Delete an item until only one item remains
    dequeue(&front, &back);

    // Deleting an item from a queue with one item
    dequeue(&front, &back);

    // Display the queue after deleting the last item
    displayAll(front);

    return 0;
}