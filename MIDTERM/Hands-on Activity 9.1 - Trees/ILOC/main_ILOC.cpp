#include <iostream>
#include "BinarySearchTree.h"

int main(){

    // Create the root node
    BinarySearchTree<int>* tree = new BinarySearchTree<int>(2);

    // Insert values into the tree
    tree->insert(3);
    tree->insert(9);
    tree->insert(18);
    tree->insert(0);
    tree->insert(1);
    tree->insert(4);
    tree->insert(5);

    // Display the In-order traversal
    std::cout << "\nIn-order Traversal:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    tree->inOrder();
    std::cout << std::endl;
    
    // Display the Pre-order traversal
    std::cout << "\nPre-order Traversal:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    tree->preOrder();
    std::cout << std::endl;

    // Display the Post-order traversal
    std::cout << "\nPost-order Traversal:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    tree->postOrder();
    std::cout << std::endl << std::endl;

    return 0;
}