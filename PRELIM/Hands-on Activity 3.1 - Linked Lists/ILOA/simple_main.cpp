#include <iostream>
#include "simple_singly_LL.h"

int main(){

    // Create and allocate memory for each node
    SinglyList<char>* head = new SinglyList<char>;
    SinglyList<char>* second = new SinglyList<char>;
    SinglyList<char>* third = new SinglyList<char>;
    SinglyList<char>* fourth = new SinglyList<char>;
    SinglyList<char>* fifth = new SinglyList<char>;

    // Assign values and link the nodes together
    head->data = 'C';
    head->next = second;

    second->data = 'A';
    second->next = third;

    third->data = 'R';
    third->next = fourth;

    fourth->data = 'L';
    fourth->next = fifth;

    fifth->data = 'O';
    fifth->next = nullptr;

    std::cout << head->data << second->data << std::endl;
    std::cout << head->next << second->next->data << std::endl;
}