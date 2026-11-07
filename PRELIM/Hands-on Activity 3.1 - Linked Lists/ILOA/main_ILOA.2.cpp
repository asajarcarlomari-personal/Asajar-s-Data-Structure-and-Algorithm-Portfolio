#include <iostream>
#include "doubly_LL.h"

int main() {

    // Creating the first nodes 'C', 'P', 'E'
    DoubleList<char>* head = createNode('C');
    DoubleList<char>* second = createNode('P');
    DoubleList<char>* third = createNode('E');

    // Link the nodes together
    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    // Line Divider for formatting
    std::cout << "\n----------------------------------------" << std::endl;

    // Traversal
    std::cout << "Traversal Testing:" << std::endl;
    dllTraverse(head);
    std::cout << "\n----------------------------------------" << std::endl;

    // Insertion at the head
    std::cout << "Insert Head Testing:" << std::endl;
    dllInsertHead('X', head);
    dllTraverse(head);
    std::cout << "\n----------------------------------------" << std::endl;

    // Insertion at any part of the list
    std::cout << "Insert Any Node Testing:" << std::endl;

    // First option
    dllInsertAny('Y', head, head->next);
    dllTraverse(head);

    // Second option
    DoubleList<char>* current = head;

    while (current != nullptr && current->data != 'P') {
        current = current->next;
    }

    if (current != nullptr) {
        dllInsertAny('Y', current, current->next);
    }

    dllTraverse(head);
    std::cout << "\n----------------------------------------" << std::endl;

    // Insertion at the end
    std::cout << "Insert End Testing:" << std::endl;
    dllInsertEnd('Z', &head);
    dllTraverse(head);
    std::cout << "\n----------------------------------------" << std::endl;

    // Deletion of a node
    std::cout << "Delete Node Testing:" << std::endl;
    dllDeleteNode(second, &head);
    dllTraverse(head);
    std::cout << "\n----------------------------------------" << std::endl;

    // Delete all nodes
    std::cout << "Delete All Nodes Testing:" << std::endl;
    dllDeleteList(head);
    dllTraverse(head);
    std::cout << std::endl;

    return 0;
}