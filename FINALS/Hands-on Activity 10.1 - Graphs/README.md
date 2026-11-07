# Hands-on Activity 10.1 — Graphs

## Description

This activity focuses on implementing graph data structures in C++. It demonstrates graph representation using adjacency matrices and adjacency lists, as well as graph traversal techniques such as Breadth-First Search (BFS) and Depth-First Search (DFS). The supplementary activity applies DFS to traverse a graph and uses a general tree to demonstrate pre-order traversal.

## Objectives

- Understand the basic concepts and structure of graphs.
- Represent graphs using adjacency matrices and adjacency lists.
- Implement directed, undirected, and weighted graphs.
- Apply Breadth-First Search (BFS) and Depth-First Search (DFS).
- Construct C++ programs that perform graph traversal.
- Apply graph traversal concepts to solve problems.

## Files Included

| File | Description |
|---|---|
| `ILOA/main_ILOA.cpp` | Demonstrates graph creation, adjacency matrices, weighted graphs, and adjacency lists for directed and undirected graphs. |
| `ILOA/Graph.h` | Contains the graph implementation using adjacency matrices and adjacency lists, including vertex and edge insertion and graph display functions. |
| `ILOB/main_BFS_ILOB.cpp` | Executes the Breadth-First Search (BFS) traversal test using a reference graph. |
| `ILOB/GraphTraversalBFS.h` | Contains the templated graph structure, edge representation, reference graph, and BFS traversal implementation using a queue. |
| `ILOB/main_DFS_ILOB.cpp` | Executes the Depth-First Search (DFS) traversal test using a reference graph. |
| `ILOB/GraphTraversalDFS.h` | Contains the templated graph structure, edge representation, reference graph, and DFS traversal implementation using a stack. |
| `ILOC/main_ILOC.cpp` | Demonstrates DFS traversal of a graph starting from vertex `A` and pre-order traversal of a general tree. |
| `ILOC/Graph.h` | Contains the graph implementation using an adjacency matrix, including vertex and edge insertion and graph access functions. |
| `ILOC/Problem2.h` | Contains the DFS traversal function used to visit graph vertices and record the traversal order. |
| `ILOC/GeneralTree.h` | Contains the general tree implementation using first-child and sibling pointers, including insertion and pre-order traversal. |
| `CPE010_HOA10p1_ASAJAR.pdf` | Contains the activity manual, procedures, program outputs, observations, and documentation. |

## Concepts Applied

- Graph Abstract Data Type (ADT)
- Vertices and edges
- Directed and undirected graphs
- Weighted graphs
- Adjacency matrices
- Adjacency lists
- Breadth-First Search (BFS)
- Depth-First Search (DFS)
- Queues and stacks
- Visited vertices
- Graph traversal
- General trees
- Pre-order traversal
- Templates and pointers

## Implementation

### ILO A — Graph Representation

The program demonstrates how graphs can be represented using adjacency matrices and adjacency lists. It creates graphs with vertices `A` to `E` and inserts different types of edges. The implementation displays the vertices and graph representations, including undirected, directed, and weighted graphs.

### ILO B — Breadth-First Search and Depth-First Search

This section demonstrates two graph traversal techniques using a reference graph containing eight vertices.

Breadth-First Search (BFS) uses a queue to visit vertices level by level, starting from a selected vertex.

Depth-First Search (DFS) uses a stack to explore a path as deeply as possible before returning to other unvisited vertices.

Both implementations record and display the order in which the vertices are visited.

### ILO C — Graph DFS and General Tree Traversal

The supplementary activity creates a graph containing vertices `A` to `E` and performs DFS traversal starting from vertex `A`. It also creates a general tree using linked nodes and demonstrates pre-order traversal. This section shows how traversal techniques can be applied to both graph and tree data structures.

## How to Run

1. Open the desired `.cpp` file in a C++ IDE.
2. Make sure the compiler is properly configured.
3. Compile and run the program.
4. Observe the graph representations and traversal results displayed in the console.

## Documentation

The complete activity documentation, including procedures, outputs, observations, and graph diagrams, is available in the PDF file:

[CPE010_HOA10p1_ASAJAR.pdf](CPE010_HOA10p1_ASAJAR.pdf)