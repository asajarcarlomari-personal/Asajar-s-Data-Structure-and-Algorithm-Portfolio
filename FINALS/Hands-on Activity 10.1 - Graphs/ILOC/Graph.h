#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>

class Graph{
    private:
        static const int maxVertices = 10;
        char vertices[maxVertices];
        int matrix[maxVertices][maxVertices];
        int vertexCount;

    public:
        Graph();
        void addVertex(char vertex);
        int findVertex(char vertex) const;
        void addEdge(char start, char end);
        void addWeightedEdge(char start, char end, int weight);
        void displayVertices();
        void displayMatrix();

        int getVertexCount() const;
        char getVertexAt(int index) const;
        bool hasEdge(char start, char end) const;
};

// Create a new graph
inline Graph::Graph(){
    vertexCount = 0;

    // Initialize the adjacency matrix
    for(int i = 0; i < maxVertices; i++){
        for(int j = 0; j < maxVertices; j++){
            matrix[i][j] = 0;
        }
    }
}

// Add a vertex
inline void Graph::addVertex(char vertex){

    // Check if there is space for a new vertex
    if(vertexCount < maxVertices && findVertex(vertex) == -1){
        vertices[vertexCount] = vertex;
        vertexCount++;
    }
}

// Find the position of a vertex
inline int Graph::findVertex(char vertex) const{
    for(int i = 0; i < vertexCount; i++){
        if(vertices[i] == vertex){
            return i;
        }
    }

    return -1;
}

// Get the number of vertices
inline int Graph::getVertexCount() const{
    return vertexCount;
}

// Get a vertex by its index
inline char Graph::getVertexAt(int index) const{
    if(index >= 0 && index < vertexCount){
        return vertices[index];
    }

    return '\0';
}

// Check if an edge exists
inline bool Graph::hasEdge(char start, char end) const{
    int startIndex = findVertex(start);
    int endIndex = findVertex(end);

    if(startIndex != -1 && endIndex != -1){
        return matrix[startIndex][endIndex] != 0;
    }

    return false;
}

// Add an undirected edge
inline void Graph::addEdge(char start, char end){
    int startIndex = findVertex(start);
    int endIndex = findVertex(end);

    // Check if both vertices exist
    if(startIndex != -1 && endIndex != -1){
        matrix[startIndex][endIndex] = 1;
        matrix[endIndex][startIndex] = 1;
    }
}

// Add a weighted directed edge
inline void Graph::addWeightedEdge(char start, char end, int weight){
    int startIndex = findVertex(start);
    int endIndex = findVertex(end);

    // Check if both vertices exist
    if(startIndex != -1 && endIndex != -1){
        matrix[startIndex][endIndex] = weight;
    }
}

// Display the graph vertices
inline void Graph::displayVertices(){
    for(int i = 0; i < vertexCount; i++){
        std::cout << vertices[i] << " ";
    }

    std::cout << std::endl;
}

// Display the adjacency matrix
inline void Graph::displayMatrix(){
    std::cout << "    ";

    for(int i = 0; i < vertexCount; i++){
        std::cout << vertices[i] << "   ";
    }

    std::cout << std::endl;

    for(int i = 0; i < vertexCount; i++){
        std::cout << vertices[i] << "   ";

        for(int j = 0; j < vertexCount; j++){
            std::cout << matrix[i][j] << "   ";
        }

        std::cout << std::endl;
    }
}

#endif