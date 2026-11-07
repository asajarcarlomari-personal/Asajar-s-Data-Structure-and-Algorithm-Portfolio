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
        int findVertex(char vertex);
        void addEdge(char start, char end);
        void addWeightedEdge(char start, char end, int weight);
        void displayVertices();
        void displayMatrix();
};

// Create a new graph
Graph::Graph(){
    vertexCount = 0;

    // Initialize the adjacency matrix
    for(int i = 0; i < maxVertices; i++){
        for(int j = 0; j < maxVertices; j++){
            matrix[i][j] = 0;
        }
    }
}

// Add a vertex
void Graph::addVertex(char vertex){

    // Check if there is space for a new vertex
    if(vertexCount < maxVertices){
        vertices[vertexCount] = vertex;
        vertexCount++;
    }
}

// Find the position of a vertex
int Graph::findVertex(char vertex){

    // Search the vertices
    for(int i = 0; i < vertexCount; i++){
        if(vertices[i] == vertex){
            return i;
        }
    }

    return -1;
}

// Add an undirected edge
void Graph::addEdge(char start, char end){
    int startIndex = findVertex(start);
    int endIndex = findVertex(end);

    // Check if both vertices exist
    if(startIndex != -1 && endIndex != -1){
        matrix[startIndex][endIndex] = 1;
        matrix[endIndex][startIndex] = 1;
    }
}

// Add a weighted directed edge
void Graph::addWeightedEdge(char start, char end, int weight){
    int startIndex = findVertex(start);
    int endIndex = findVertex(end);

    // Check if both vertices exist
    if(startIndex != -1 && endIndex != -1){
        matrix[startIndex][endIndex] = weight;
    }
}

// Display the graph vertices
void Graph::displayVertices(){

    // Display all vertices
    for(int i = 0; i < vertexCount; i++){
        std::cout << vertices[i] << " ";
    }

    std::cout << std::endl;
}

// Display the adjacency matrix
void Graph::displayMatrix(){

    // Display the column vertices
    std::cout << "    ";

    for(int i = 0; i < vertexCount; i++){
        std::cout << vertices[i] << "   ";
    }

    std::cout << std::endl;

    // Display the matrix values
    for(int i = 0; i < vertexCount; i++){
        std::cout << vertices[i] << "   ";

        for(int j = 0; j < vertexCount; j++){
            std::cout << matrix[i][j] << "   ";
        }

        std::cout << std::endl;
    }
}

struct AdjNode{
    char vertex;
    AdjNode* next;
};

class AdjacencyList{
    private:
        static const int maxVertices = 10;
        char vertices[maxVertices];
        AdjNode* head[maxVertices];
        int vertexCount;

        void addNode(int index, char vertex);

    public:
        AdjacencyList();
        ~AdjacencyList();
        void addVertex(char vertex);
        int findVertex(char vertex);
        void addUndirectedEdge(char start, char end);
        void addDirectedEdge(char start, char end);
        void displayList();
};

// Create a new adjacency list
AdjacencyList::AdjacencyList(){
    vertexCount = 0;

    // Initialize all head pointers
    for(int i = 0; i < maxVertices; i++){
        head[i] = nullptr;
    }
}

// Delete the adjacency list
AdjacencyList::~AdjacencyList(){

    // Delete all nodes
    for(int i = 0; i < vertexCount; i++){
        AdjNode* current = head[i];

        while(current != nullptr){
            AdjNode* temp = current;
            current = current->next;
            delete temp;
        }
    }
}

// Add a vertex
void AdjacencyList::addVertex(char vertex){

    // Check if there is space for a new vertex
    if(vertexCount < maxVertices){
        vertices[vertexCount] = vertex;
        head[vertexCount] = nullptr;
        vertexCount++;
    }
}

// Find the position of a vertex
int AdjacencyList::findVertex(char vertex){

    // Search the vertices
    for(int i = 0; i < vertexCount; i++){
        if(vertices[i] == vertex){
            return i;
        }
    }

    return -1;
}

// Add a node to the adjacency list
void AdjacencyList::addNode(int index, char vertex){
    AdjNode* newNode = new AdjNode;

    newNode->vertex = vertex;
    newNode->next = nullptr;

    // Check if the list has no node
    if(head[index] == nullptr){
        head[index] = newNode;
    }
    else{

        // Start with the first node
        AdjNode* current = head[index];

        // Find the last node
        while(current->next != nullptr){
            current = current->next;
        }

        // Add the new node at the end
        current->next = newNode;
    }
}

// Add an undirected edge
void AdjacencyList::addUndirectedEdge(char start, char end){
    int startIndex = findVertex(start);
    int endIndex = findVertex(end);

    // Check if both vertices exist
    if(startIndex != -1 && endIndex != -1){
        addNode(startIndex, end);
        addNode(endIndex, start);
    }
}

// Add a directed edge
void AdjacencyList::addDirectedEdge(char start, char end){
    int startIndex = findVertex(start);

    // Check if the starting vertex exists
    if(startIndex != -1){
        addNode(startIndex, end);
    }
}

// Display the adjacency list
void AdjacencyList::displayList(){

    // Display all adjacency lists
    for(int i = 0; i < vertexCount; i++){
        std::cout << vertices[i] << " -> ";

        // Start with the first node
        AdjNode* current = head[i];

        // Display the connected vertices
        while(current != nullptr){
            std::cout << current->vertex;

            if(current->next != nullptr){
                std::cout << " -> ";
            }

            current = current->next;
        }

        // Display NULL for an empty list
        if(head[i] == nullptr){
            std::cout << "NULL";
        }

        std::cout << std::endl;
    }
}

#endif