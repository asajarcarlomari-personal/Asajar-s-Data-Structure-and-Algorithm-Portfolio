#include <iostream>
#include "GeneralTree.h"

int main(){

    // Create the root node
    GeneralTree<char>* A = new GeneralTree<char>('A');

    // Create the child nodes
    GeneralTree<char>* B = new GeneralTree<char>('B');
    GeneralTree<char>* C = new GeneralTree<char>('C');
    GeneralTree<char>* D = new GeneralTree<char>('D');
    GeneralTree<char>* E = new GeneralTree<char>('E');
    GeneralTree<char>* F = new GeneralTree<char>('F');
    GeneralTree<char>* G = new GeneralTree<char>('G');

    // Create the nodes under D and E
    GeneralTree<char>* H = new GeneralTree<char>('H');
    GeneralTree<char>* I = new GeneralTree<char>('I');
    GeneralTree<char>* J = new GeneralTree<char>('J');

    // Create the nodes under F
    GeneralTree<char>* K = new GeneralTree<char>('K');
    GeneralTree<char>* L = new GeneralTree<char>('L');
    GeneralTree<char>* M = new GeneralTree<char>('M');
    GeneralTree<char>* N = new GeneralTree<char>('N');

    // Create the nodes under J
    GeneralTree<char>* P = new GeneralTree<char>('P');
    GeneralTree<char>* Q = new GeneralTree<char>('Q');

    // Insert the child nodes under A
    A->insert(B);
    A->insert(C);
    A->insert(D);
    A->insert(E);
    A->insert(F);
    A->insert(G);

    // Insert H under D
    D->insert(H);

    // Insert I and J under E
    E->insert(I);
    E->insert(J);

    // Insert K, L, and M under F
    F->insert(K);
    F->insert(L);
    F->insert(M);

    // Insert N under G
    G->insert(N);

    // Insert P and Q under J
    J->insert(P);
    J->insert(Q);

    // Display the Pre-order traversal
    std::cout << "\nPre-order Traversal:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    A->preOrder();
    std::cout << std::endl;

    // Display the Post-order traversal
    std::cout << "\nPost-order Traversal:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    A->postOrder();
    std::cout << std::endl;

    // Display the In-order traversal
    std::cout << "\nIn-order Traversal:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    A->inOrder();
    std::cout << std::endl;

    // Find data using Pre-order traversal
    std::cout << "\nFind Data - Pre-order:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    A->findData(1, 'J');

    // Find data using Post-order traversal
    std::cout << "\nFind Data - Post-order:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    A->findData(2, 'M');

    // Find data using In-order traversal
    std::cout << "\nFind Data - In-order:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    A->findData(3, 'Q');

    // Find data that does not exist
    std::cout << "\nFind Data - Not Found:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    A->findData(1, 'Z');

    // Create the new leaf node O
    GeneralTree<char>* O = new GeneralTree<char>('O');

    // Insert O under G
    G->insert(O);

    // Find the new node O using Pre-order
    std::cout << "\nNew Leaf Node O - Pre-order:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    A->findData(1, 'O');

    // Find the new node O using Post-order
    std::cout << "\nNew Leaf Node O - Post-order:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    A->findData(2, 'O');

    // Find the new node O using In-order
    std::cout << "\nNew Leaf Node O - In-order:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    A->findData(3, 'O');
    std::cout << std::endl;

    return 0;
}