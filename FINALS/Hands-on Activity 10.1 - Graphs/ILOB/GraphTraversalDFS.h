#ifndef GRAPHTRAVERSALDFS_H
#define GRAPHTRAVERSALDFS_H

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
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

// Traverse the graph using Depth-First Search
template <typename T>
std::vector<std::size_t> depth_first_search(
    const Graph<T> &G, std::size_t start){

    std::stack<std::size_t> stack;
    std::vector<std::size_t> visit_order;
    std::set<std::size_t> visited;

    // Check if the starting vertex exists
    if(start < 1 || start > G.vertices()){
        return visit_order;
    }

    // Start from the given vertex
    stack.push(start);

    // Continue while the stack is not empty
    while(!stack.empty()){
        auto current_vertex = stack.top();
        stack.pop();

        // Check if the vertex has not been visited
        if(visited.find(current_vertex) == visited.end()){
            visited.insert(current_vertex);
            visit_order.push_back(current_vertex);

            // Traverse the outgoing edges
            for(const auto &e : G.outgoing_edges(current_vertex)){

                // Add unvisited vertices to the stack
                if(visited.find(e.dest) == visited.end()){
                    stack.push(e.dest);
                }
            }
        }
    }

    return visit_order;
}

// Create the reference graph
template <typename T>
Graph<T> create_reference_graph(){
    Graph<T> G(8);
    std::map<unsigned, std::vector<std::pair<std::size_t, T>>> edges;

    edges[1] = {{2, 0}, {5, 0}};
    edges[2] = {{1, 0}, {5, 0}, {4, 0}};
    edges[3] = {{4, 0}, {7, 0}};
    edges[4] = {{2, 0}, {3, 0}, {5, 0}, {6, 0}, {8, 0}};
    edges[5] = {{1, 0}, {2, 0}, {4, 0}, {8, 0}};
    edges[6] = {{4, 0}, {7, 0}, {8, 0}};
    edges[7] = {{3, 0}, {6, 0}};
    edges[8] = {{4, 0}, {5, 0}, {6, 0}};

    // Insert the edges into the graph
    for(const auto &i : edges){
        for(const auto &j : i.second){
            G.add_edge(Edge<T>{i.first, j.first, j.second});
        }
    }

    return G;
}

// Test the DFS implementation
template <typename T>
void test_DFS(){

    // Create the reference graph
    auto G = create_reference_graph<T>();

    // Display the graph
    std::cout << G << std::endl;

    // Display the DFS traversal
    std::cout << "DFS Order of vertices:" << std::endl;
    std::cout << "-------------------------------------------------" 
            << std::endl;

    auto dfs_visit_order = depth_first_search(G, 1);

    // Display the visited vertices
    for(auto v : dfs_visit_order){
        std::cout << v << std::endl;
    }
}

#endif