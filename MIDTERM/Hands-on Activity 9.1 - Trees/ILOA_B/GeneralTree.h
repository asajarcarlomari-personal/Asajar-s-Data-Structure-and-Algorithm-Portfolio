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
        void insert(GeneralTree<T>* child);
        void preOrder();
        void postOrder();
        void inOrder();
        bool findPreOrder(T findData);
        bool findPostOrder(T findData);
        bool findInOrder(T findData);
        void findData(int choice, T key);
};

// Create a new tree node
template <typename T>
GeneralTree<T>::GeneralTree(T value){
    key = value;
    firstchild = nullptr;
    sibling = nullptr;
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

    // Traverse the first child
    if(firstchild != nullptr){
        firstchild->preOrder();
    }

    // Traverse the sibling nodes
    if(sibling != nullptr){
        sibling->preOrder();
    }
}

// Traverse the tree using Post-order
template <typename T>
void GeneralTree<T>::postOrder(){

    // Traverse the first child
    if(firstchild != nullptr){
        firstchild->postOrder();
    }

    // Traverse the sibling nodes
    if(sibling != nullptr){
        sibling->postOrder();
    }

    // Visit the current node
    std::cout << key << " ";
}

// Traverse the tree using In-order
template <typename T>
void GeneralTree<T>::inOrder(){

    // Traverse the first child
    if(firstchild != nullptr){
        firstchild->inOrder();
    }

    // Visit the current node
    std::cout << key << " ";

    // Traverse the sibling nodes
    if(sibling != nullptr){
        sibling->inOrder();
    }
}

// Search the tree using Pre-order
template <typename T>
bool GeneralTree<T>::findPreOrder(T findData){

    // Check the current node
    if(key == findData){
        return true;
    }

    // Search the first child
    if(firstchild != nullptr){
        if(firstchild->findPreOrder(findData)){
            return true;
        }
    }

    // Search the sibling nodes
    if(sibling != nullptr){
        if(sibling->findPreOrder(findData)){
            return true;
        }
    }

    return false;
}

// Search the tree using Post-order
template <typename T>
bool GeneralTree<T>::findPostOrder(T findData){

    // Search the first child
    if(firstchild != nullptr){
        if(firstchild->findPostOrder(findData)){
            return true;
        }
    }

    // Search the sibling nodes
    if(sibling != nullptr){
        if(sibling->findPostOrder(findData)){
            return true;
        }
    }
    
    // Check the current node
    if(key == findData){
        return true;
    }

    return false;
}

// Search the tree using In-order
template <typename T>
bool GeneralTree<T>::findInOrder(T findData){

    // Search the first child
    if(firstchild != nullptr){
        if(firstchild->findInOrder(findData)){
            return true;
        }
    }

    // Check the current node
    if(key == findData){
        return true;
    }

    // Search the sibling nodes
    if(sibling != nullptr){
        if(sibling->findInOrder(findData)){
            return true;
        }
    }

    return false;
}

// Find data using the selected traversal
template <typename T>
void GeneralTree<T>::findData(int choice, T key){
    bool found = false;

    // Use Pre-order traversal
    if(choice == 1){
        found = findPreOrder(key);
    }

    // Use Post-order traversal
    else if(choice == 2){
        found = findPostOrder(key);
    }

    // Use In-order traversal
    else if(choice == 3){
        found = findInOrder(key);
    }

    // Display the result if the key is found
    if(found){
        std::cout << key << " was found!" << std::endl;
    }
}

#endif