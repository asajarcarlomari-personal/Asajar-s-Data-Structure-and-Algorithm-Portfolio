#ifndef PROBLEM2_H
#define PROBLEM2_H

#include <stack>
#include <vector>
#include <set>
#include "GeneralTree.h"
#include "Graph.h"

// Traverse the graph using DFS
inline std::vector<char> depth_first_search(const Graph &G, char start){
    std::stack<char> stack;
    std::vector<char> visit_order;
    std::set<char> visited;

    // Check if the starting vertex exists
    if(G.findVertex(start) == -1){
        return visit_order;
    }

    stack.push(start);

    while(!stack.empty()){
        char current_vertex = stack.top();
        stack.pop();

        if(visited.find(current_vertex) == visited.end()){
            visited.insert(current_vertex);
            visit_order.push_back(current_vertex);

            // Push neighbors in reverse order
            for(int i = G.getVertexCount() - 1; i >= 0; i--){
                char neighbor = G.getVertexAt(i);

                if(G.hasEdge(current_vertex, neighbor) &&
                   visited.find(neighbor) == visited.end()){
                    stack.push(neighbor);
                }
            }
        }
    }

    return visit_order;
}

#endif