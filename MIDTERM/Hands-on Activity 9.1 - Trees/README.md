# Hands-on Activity 9.1 — Trees

## Description

This activity focuses on implementing tree data structures in C++. It demonstrates the construction of a general tree using linked nodes, tree traversal methods, and searching for data using different traversal strategies. The supplementary activity implements a Binary Search Tree (BST) and demonstrates its in-order, pre-order, and post-order traversals.

## Objectives

- Implement general trees and binary search trees in C++.
- Understand tree structures and their hierarchical organization.
- Implement pre-order, in-order, and post-order traversal methods.
- Create a function to search for data using different traversal methods.
- Solve problems using tree data structures.

## Files Included

| File | Description |
|---|---|
| `ILOA_B/main_ILOA_B.cpp` | Creates a general tree containing character nodes and demonstrates tree traversals and data searching. It also adds a new leaf node and searches for it. |
| `ILOA_B/GeneralTree.h` | Contains the templated general tree implementation, including child insertion, pre-order, post-order, in-order traversal, and searching functions. |
| `ILOC/main_ILOC.cpp` | Creates a Binary Search Tree using the values `2, 3, 9, 18, 0, 1, 4, 5` and displays its traversal results. |
| `ILOC/BinarySearchTree.h` | Contains the templated Binary Search Tree implementation, including insertion and in-order, pre-order, and post-order traversal functions. |
| `CPE010_HOA9p1_ASAJAR.pdf` | Contains the activity manual, procedures, program outputs, observations, and documentation. |

## Concepts Applied

- Tree Abstract Data Type (ADT)
- General trees
- Binary Search Trees (BST)
- Root, parent, child, sibling, and leaf nodes
- Linked-node representation
- Tree insertion
- Pre-order traversal
- In-order traversal
- Post-order traversal
- Recursive algorithms
- Tree searching
- Templates and pointers

## Implementation

### ILO A and ILO B — General Tree and Traversal Methods

The program creates a general tree using character nodes and linked-node representation. It demonstrates pre-order, post-order, and in-order traversal methods, which visit the nodes in different sequences. The `findData()` function searches for a specified key using the selected traversal method. A new leaf node containing the value `O` is also inserted under node `G`, and the program searches for the newly added node.

### ILO C — Binary Search Tree

The supplementary activity implements a Binary Search Tree using the values `2, 3, 9, 18, 0, 1, 4, 5`. The values are inserted according to the BST property, where smaller values are placed in the left subtree and larger values are placed in the right subtree. The program displays the in-order, pre-order, and post-order traversal results to demonstrate how each method visits the nodes.

## How to Run

1. Open the desired `.cpp` file in a C++ IDE.
2. Make sure the compiler is properly configured.
3. Compile and run the program.
4. Observe the traversal and search results displayed in the console.

## Documentation

The complete activity documentation, including procedures, outputs, observations, and tree diagrams, is available in the PDF file:

[CPE010_HOA9p1_ASAJAR.pdf](CPE010_HOA9p1_ASAJAR.pdf)