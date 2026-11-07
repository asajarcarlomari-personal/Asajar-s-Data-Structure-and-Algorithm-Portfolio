#include <iostream>
#include "GraphTraversalDFS.h"

int main(){

    // Display the DFS activity heading
    std::cout << "\nDepth-First Search (DFS):" << std::endl;
    std::cout << "-------------------------------------------------" 
            << std::endl;

    // Run the DFS test
    using T = unsigned;
    test_DFS<T>();

    std::cout << std::endl;

    return 0;
}