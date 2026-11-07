#include <iostream>
#include "Graph.h"

int main(){

    // CREATE A GRAPH
    std::cout << "\nCreate a Graph:" << std::endl;
    std::cout << "--------------------------------------" << std::endl;

    // Create a new graph
    Graph graph;

    // Add the vertices
    graph.addVertex('A');
    graph.addVertex('B');
    graph.addVertex('C');
    graph.addVertex('D');
    graph.addVertex('E');

    // Add the edges
    graph.addEdge('A', 'B');
    graph.addEdge('A', 'C');
    graph.addEdge('A', 'D');
    graph.addEdge('B', 'E');
    graph.addEdge('C', 'D');
    graph.addEdge('D', 'E');

    // Display the graph vertices
    std::cout << "Graph Vertices: ";
    graph.displayVertices();

    // Display the graph
    std::cout << "\nGraph:" << std::endl;
    graph.displayMatrix();

    // ADJACENCY MATRIX OF UNDIRECTED GRAPH
    std::cout << "\nAdjacency Matrix of Undirected Graph:" << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    // Create a new graph
    Graph undirectedMatrix;

    // Add the vertices
    undirectedMatrix.addVertex('A');
    undirectedMatrix.addVertex('B');
    undirectedMatrix.addVertex('C');
    undirectedMatrix.addVertex('D');
    undirectedMatrix.addVertex('E');

    // Add the edges
    undirectedMatrix.addEdge('A', 'B');
    undirectedMatrix.addEdge('A', 'C');
    undirectedMatrix.addEdge('A', 'D');
    undirectedMatrix.addEdge('B', 'E');
    undirectedMatrix.addEdge('C', 'D');
    undirectedMatrix.addEdge('D', 'E');

    // Display the adjacency matrix
    undirectedMatrix.displayMatrix();

    // ADJACENCY MATRIX OF WEIGHTED GRAPH
    std::cout << "\nAdjacency Matrix of Weighted Graph:" << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    // Create a new graph
    Graph weightedMatrix;

    // Add the vertices
    weightedMatrix.addVertex('A');
    weightedMatrix.addVertex('B');
    weightedMatrix.addVertex('C');
    weightedMatrix.addVertex('D');
    weightedMatrix.addVertex('E');

    // Add the weighted edges
    weightedMatrix.addWeightedEdge('A', 'B', 4);
    weightedMatrix.addWeightedEdge('A', 'C', 3);
    weightedMatrix.addWeightedEdge('C', 'D', 2);
    weightedMatrix.addWeightedEdge('D', 'B', 1);
    weightedMatrix.addWeightedEdge('D', 'E', 1);
    weightedMatrix.addWeightedEdge('E', 'A', 1);

    // Display the weighted adjacency matrix
    weightedMatrix.displayMatrix();

    // ADJACENCY LIST OF UNDIRECTED GRAPH 
    std::cout << "\nAdjacency List of Undirected Graph:" << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    // Create a new adjacency list
    AdjacencyList undirectedList;

    // Add the vertices
    undirectedList.addVertex('A');
    undirectedList.addVertex('B');
    undirectedList.addVertex('C');
    undirectedList.addVertex('D');
    undirectedList.addVertex('E');

    // Add the undirected edges
    undirectedList.addUndirectedEdge('A', 'B');
    undirectedList.addUndirectedEdge('A', 'C');
    undirectedList.addUndirectedEdge('A', 'D');
    undirectedList.addUndirectedEdge('B', 'E');
    undirectedList.addUndirectedEdge('C', 'D');
    undirectedList.addUndirectedEdge('D', 'E');

    // Display the adjacency list
    undirectedList.displayList();

    // ADJACENCY LIST OF DIRECTED GRAPH
    std::cout << "\nAdjacency List of Directed Graph:" << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    // Create a new adjacency list
    AdjacencyList directedList;

    // Add the vertices
    directedList.addVertex('A');
    directedList.addVertex('B');
    directedList.addVertex('C');
    directedList.addVertex('D');
    directedList.addVertex('E');

    // Add the directed edges
    directedList.addDirectedEdge('A', 'B');
    directedList.addDirectedEdge('A', 'C');
    directedList.addDirectedEdge('C', 'D');
    directedList.addDirectedEdge('D', 'B');
    directedList.addDirectedEdge('B', 'E');
    directedList.addDirectedEdge('D', 'E');

    // Display the adjacency list
    directedList.displayList();
    std::cout << std::endl;

    return 0;
}