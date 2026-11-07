#ifndef GENERALTREE_H
#define GENERALTREE_H

#include <iostream>

template <typename T>
class GeneralTree{
    private:
        T key;
        GeneralTree<T>* firstchild;
        GeneralTree<T>* sibling;

    public:
        GeneralTree(T value);
        ~GeneralTree();

        void insert(GeneralTree<T>* child);
        void preOrder();
};

// Create a new tree node
template <typename T>
GeneralTree<T>::GeneralTree(T value){
    key = value;
    firstchild = nullptr;
    sibling = nullptr;
}

// Delete the child and sibling nodes
template <typename T>
GeneralTree<T>::~GeneralTree(){
    delete firstchild;
    delete sibling;
}

// Insert a child node
template <typename T>
void GeneralTree<T>::insert(GeneralTree<T>* child){

    // Check if the node has no child
    if(firstchild == nullptr){
        firstchild = child;
    }
    else{

        // Start with the first child
        GeneralTree<T>* current = firstchild;

        // Find the last sibling
        while(current->sibling != nullptr){
            current = current->sibling;
        }

        // Add the child as the last sibling
        current->sibling = child;
    }
}

// Traverse the tree using Pre-order
template <typename T>
void GeneralTree<T>::preOrder(){

    // Visit the current node
    std::cout << key << " ";

    // Traverse the first child and its descendants
    if(firstchild != nullptr){
        firstchild->preOrder();
    }

    // Traverse the remaining siblings
    if(sibling != nullptr){
        sibling->preOrder();
    }
}

#endif