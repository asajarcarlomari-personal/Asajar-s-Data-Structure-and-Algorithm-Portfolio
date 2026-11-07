#include <iostream>
#include "queueArr_ILOB2.h"

int main(){

    //create an object
    QueueArr<char> q(6);

    //Test the empty() function
    std::cout << "Is queue empty? "
              << (q.Empty() ? "Yes" : "No") << std::endl;

    //Insert elements into the queue
    q.Enqueue('C');
    q.Enqueue('A');
    q.Enqueue('R');
    q.Enqueue('L');
    q.Enqueue('O');

    //Check the front and back of the queue
    std::cout << "Front: " << q.Front() << std::endl;
    std::cout << "Back: " << q.Back() << std::endl;

    //Check the size of the queue
    std::cout << "Size: " << q.Size() << std::endl;

    //Remove the front element from the queue
    q.Dequeue();

    std::cout << "Front after dequeue: "
              << q.Front() << std::endl;

    //Insert an element after dequeue
    q.Enqueue('M');

    std::cout << "After enqueueing M:" << std::endl;
    std::cout << "Front: " << q.Front() << std::endl;
    std::cout << "Back: " << q.Back() << std::endl;
    std::cout << "Size: " << q.Size() << std::endl;

    //Clear the queue
    q.Clear();

    std::cout << "Is queue empty after clear? "
              << (q.Empty() ? "Yes" : "No") << std::endl;

    //Insert elements into the queue
    q.Enqueue('C');
    q.Enqueue('A');
    q.Enqueue('R');

    //Test the copy constructor
    QueueArr<char> qCopy(q);

    std::cout << "Copy constructor front: "
              << qCopy.Front() << std::endl;
    std::cout << "Copy constructor back: "
              << qCopy.Back() << std::endl;

    //Test the copy assignment operator
    QueueArr<char> qAssign(6);

    qAssign = q;

    std::cout << "Copy assignment front: "
              << qAssign.Front() << std::endl;
    std::cout << "Copy assignment back: "
              << qAssign.Back() << std::endl;

    return 0;

}