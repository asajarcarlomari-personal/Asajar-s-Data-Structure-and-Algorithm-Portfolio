#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include <iostream>

// Create a Binary Search Tree node
template <typename T>
class BinarySearchTree{
    private:
        T key;
        BinarySearchTree<T>* left;
        BinarySearchTree<T>* right;
    
    public:
        // Constructor
        BinarySearchTree(T value);
        
        // Insert a value into the tree
        void insert(T value);
        
        // Traverse the tree using In-order
        void inOrder();
        
        // Traverse the tree using Pre-order
        void preOrder();
        
        // Traverse the tree using Post-order
        void postOrder();
};

// Create a new tree node
template <typename T>
BinarySearchTree<T>::BinarySearchTree(T value){
    key = value;
    left = nullptr;
    right = nullptr;
}

// Insert a value into the correct position
template <typename T>
void BinarySearchTree<T>::insert(T value){
    
    // Go to the left if the value is smaller
    if (value < key) {
        if(left == nullptr){
            left = new BinarySearchTree<T>(value);
        } else{
            left->insert(value);
        }
    }
    
    // Go to the right if the value is larger
    else if (value > key) {
        if (right == nullptr){
            right = new BinarySearchTree<T>(value);
        } else{
            right->insert(value);
        }
    }
}

// Traverse the tree using In-order
template <typename T>
void BinarySearchTree<T>::inOrder(){
    
    // Visit the left subtree
    if(left != nullptr){
        left->inOrder();
    }

    // Display the current node
    std::cout << key << " ";

    // Visit the right subtree
    if(right != nullptr){
        right->inOrder();
    }
}

// Traverse the tree using Pre-order
template <typename T>
void BinarySearchTree<T>::preOrder(){
    
    // Display the current node
    std::cout << key << " ";

    // Visit the left subtree
    if(left != nullptr){
        left->preOrder();
    }

    // Visit the right subtree
    if(right != nullptr){
        right->preOrder();
    }
}

// Traverse the tree using Post-order
template <typename T>
void BinarySearchTree<T>::postOrder(){
    
    // Visit the left subtree
    if(left != nullptr){
        left->postOrder();
    }

    // Visit the right subtree
    if(right != nullptr){
        right->postOrder();
    }

    // Display the current node
    std::cout << key << " ";
}

#endif