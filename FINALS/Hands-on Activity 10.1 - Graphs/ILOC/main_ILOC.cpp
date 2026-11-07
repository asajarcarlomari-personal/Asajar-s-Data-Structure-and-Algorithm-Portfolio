#include <iostream>
#include <vector>
#include "Problem2.h"

int main(){

    // Create the graph
    Graph G;

    // Insert vertices into the graph
    G.addVertex('A');
    G.addVertex('B');
    G.addVertex('C');
    G.addVertex('D');
    G.addVertex('E');

    // Insert edges into the graph
    G.addEdge('A', 'B');
    G.addEdge('A', 'C');
    G.addEdge('A', 'D');
    G.addEdge('B', 'E');
    G.addEdge('C', 'D');
    G.addEdge('D', 'E');

    // Display the DFS traversal
    std::vector<char> result = depth_first_search(G, 'A');

    std::cout << "\nDFS Traversal:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;

    for(char vertex : result){
        std::cout << vertex << " ";
    }

    std::cout << std::endl;

    // Create the root node
    GeneralTree<char>* root = new GeneralTree<char>('A');

    // Insert values into the tree
    GeneralTree<char>* B = new GeneralTree<char>('B');
    GeneralTree<char>* E = new GeneralTree<char>('E');
    GeneralTree<char>* D = new GeneralTree<char>('D');
    GeneralTree<char>* C = new GeneralTree<char>('C');

    root->insert(B);
    B->insert(E);
    E->insert(D);
    D->insert(C);

    // Display the Pre-order traversal
    std::cout << "\nPre-order Traversal:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    root->preOrder();
    std::cout << std::endl << std::endl;

    // Delete the tree
    delete root;

    return 0;
}