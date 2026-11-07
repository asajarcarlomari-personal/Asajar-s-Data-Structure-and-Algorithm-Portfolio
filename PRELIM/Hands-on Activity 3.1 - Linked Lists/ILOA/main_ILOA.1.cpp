#include <iostream>
#include "singly_LL.h"

int main() {

    // Create and allocate memory for each node
    SinglyList<char>* head = new SinglyList<char>();
    SinglyList<char>* second = new SinglyList<char>();
    SinglyList<char>* third = new SinglyList<char>();
    SinglyList<char>* fourth = new SinglyList<char>();
    SinglyList<char>* fifth = new SinglyList<char>();

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

    // Line Divider for formatting
    std::cout << "\n----------------------------------------\n";

    // Display the values stored in the first two nodes
    std::cout << std::endl << head->data << second->data << std::endl;
    std::cout << "\n----------------------------------------\n" << std::endl;

    // Display the value of the second node using the head pointer
    std::cout << head->next->data << std::endl;
    std::cout << "\n----------------------------------------\n" << std::endl;

    // Traverse and display the complete list
    std::cout << "Traversal:" << std::endl;
    listTraversal(head);
    std::cout << "\n----------------------------------------\n" << std::endl;

    // Insert a new node at the beginning of the list
    std::cout << "Insert a New Node at the Head:" << std::endl;
    sllinsertHead('S', &head);
    listTraversal(head);
    std::cout << "\n----------------------------------------\n" << std::endl;

    // Insert a new node after the third node
    std::cout << "Insert a New Node after the Third Node:" << std::endl;
    sllGeneralInsert('I', head->next->next);
    listTraversal(head);
    std::cout << "\n----------------------------------------\n" << std::endl;

    // Insert a new node at the end of the list
    std::cout << "Insert a New Node at the End:" << std::endl;
    sllinsertEnd('W', &head);
    listTraversal(head);
    std::cout << "\n----------------------------------------\n" << std::endl;

    // Remove the node containing the specified value
    std::cout << "Delete a Node:" << std::endl;
    sllDeleteNodes('I', &head);
    listTraversal(head);
    std::cout << "\n----------------------------------------\n" << std::endl;

    // Remove the current head node
    std::cout << "Delete the Head Node:" << std::endl;
    sllDeleteNodes('S', &head);
    listTraversal(head);
    std::cout << "\n----------------------------------------\n" << std::endl;

    // Delete all nodes in the list
    std::cout << "Delete All Nodes:" << std::endl;
    sllDeleteList(&head);
    listTraversal(head);
    std::cout << "----------------------------------------\n" << std::endl;

    return 0;
}