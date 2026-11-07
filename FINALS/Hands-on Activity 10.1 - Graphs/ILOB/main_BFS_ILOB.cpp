#include <iostream>
#include "GraphTraversalBFS.h"

int main(){

    // Display the BFS activity heading
    std::cout << "\nBreadth-First Search (BFS):" << std::endl;
    std::cout << "-------------------------------------------------" 
            << std::endl;

    // Run the BFS test
    using T = unsigned;
    test_BFS<T>();

    std::cout << std::endl;

    return 0;
}