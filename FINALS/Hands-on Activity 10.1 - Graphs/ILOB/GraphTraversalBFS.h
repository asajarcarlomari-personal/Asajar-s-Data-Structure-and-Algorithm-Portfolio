#ifndef GRAPHTRAVERSALBFS_H
#define GRAPHTRAVERSALBFS_H

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <utility>
#include <cstddef>

// Create a graph edge
template <typename T>
struct Edge{
    std::size_t src;
    std::size_t dest;
    T weight;

    // Compare edges using their weights
    bool operator<(const Edge<T> &e) const{
        return weight < e.weight;
    }

    bool operator>(const Edge<T> &e) const{
        return weight > e.weight;
    }
};

// Create a graph
template <typename T>
class Graph{
    private:
        std::size_t V;
        std::vector<Edge<T>> edge_list;

    public:
        Graph(std::size_t N);
        std::size_t vertices() const;
        const std::vector<Edge<T>> &edges() const;
        void add_edge(Edge<T> &&e);
        std::vector<Edge<T>> outgoing_edges(std::size_t v) const;
};

// Create a new graph
template <typename T>
Graph<T>::Graph(std::size_t N) : V(N){
}

// Return the number of vertices
template <typename T>
std::size_t Graph<T>::vertices() const{
    return V;
}

// Return all graph edges
template <typename T>
const std::vector<Edge<T>> &Graph<T>::edges() const{
    return edge_list;
}

// Insert an edge into the graph
template <typename T>
void Graph<T>::add_edge(Edge<T> &&e){

    // Check if both vertices exist
    if(e.src >= 1 && e.src <= V &&
       e.dest >= 1 && e.dest <= V){
        edge_list.emplace_back(e);
    }
    else{
        std::cerr << "Vertex out of bounds" << std::endl;
    }
}

// Find the outgoing edges from a vertex
template <typename T>
std::vector<Edge<T>> Graph<T>::outgoing_edges(std::size_t v) const{
    std::vector<Edge<T>> edges_from_v;

    // Search the outgoing edges
    for(const auto &e : edge_list){
        if(e.src == v){
            edges_from_v.emplace_back(e);
        }
    }

    return edges_from_v;
}

// Display the graph
template <typename T>
std::ostream &operator<<(std::ostream &os, const Graph<T> &G){

    // Display each vertex and its outgoing edges
    for(std::size_t i = 1; i <= G.vertices(); i++){
        os << i << ":\t";
        auto edges = G.outgoing_edges(i);

        // Display the connected vertices
        for(const auto &e : edges){
            os << "{" << e.dest << ": " << e.weight << "}, ";
        }

        os << std::endl;
    }

    return os;
}

// Create the reference graph
template <typename T>
Graph<T> create_reference_graph(){
    Graph<T> G(8);
    std::map<unsigned, std::vector<std::pair<std::size_t, T>>> edges;

    edges[1] = {{2, 2}, {5, 3}};
    edges[2] = {{1, 2}, {5, 5}, {4, 1}};
    edges[3] = {{4, 2}, {7, 3}};
    edges[4] = {{2, 1}, {3, 2}, {5, 2}, {6, 4}, {8, 5}};
    edges[5] = {{1, 3}, {2, 5}, {4, 2}, {8, 3}};
    edges[6] = {{4, 4}, {7, 4}, {8, 1}};
    edges[7] = {{3, 3}, {6, 4}};
    edges[8] = {{4, 5}, {5, 3}, {6, 1}};

    // Insert the edges into the graph
    for(const auto &i : edges){
        for(const auto &j : i.second){
            G.add_edge(Edge<T>{i.first, j.first, j.second});
        }
    }

    return G;
}

// Traverse the graph using Breadth-First Search
template <typename T>
std::vector<std::size_t> breadth_first_search(
    const Graph<T> &G, std::size_t start){

    std::queue<std::size_t> queue;
    std::vector<std::size_t> visit_order;
    std::set<std::size_t> visited;

    // Check if the starting vertex exists
    if(start < 1 || start > G.vertices()){
        return visit_order;
    }

    // Start from the given vertex
    queue.push(start);
    visited.insert(start);

    // Continue while the queue is not empty
    while(!queue.empty()){
        auto current_vertex = queue.front();
        queue.pop();

        // Visit the current vertex
        visit_order.push_back(current_vertex);

        // Traverse the outgoing edges
        for(const auto &e : G.outgoing_edges(current_vertex)){

            // Add unvisited vertices to the queue
            if(visited.find(e.dest) == visited.end()){
                visited.insert(e.dest);
                queue.push(e.dest);
            }
        }
    }

    return visit_order;
}

// Test the BFS implementation
template <typename T>
void test_BFS(){

    // Create the reference graph
    auto G = create_reference_graph<T>();

    // Display the graph
    std::cout << G << std::endl;

    // Display the BFS traversal
    std::cout << "BFS Order of vertices:" << std::endl;
    std::cout << "-------------------------------------------------" 
            << std::endl;

    auto bfs_visit_order = breadth_first_search(G, 1);

    // Display the visited vertices
    for(auto v : bfs_visit_order){
        std::cout << v << std::endl;
    }
}

#endif