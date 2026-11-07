# Hands-on Activity 3.1 — Linked Lists

## Description

This activity focuses on the implementation and manipulation of linked lists in C++. It demonstrates singly and doubly linked lists, including node creation, traversal, insertion, and deletion. The supplementary activity applies linked list concepts through a circular linked list-based song playlist that supports playlist creation, song insertion and removal, and song navigation.

## Objectives

- Implement the List ADT using singly and doubly linked lists.
- Define and perform operations based on the List ADT.
- Construct C++ programs for singly and doubly linked lists.
- Solve programming problems utilizing linked lists in C++.

## Files Included

| File | Description |
|------|-------------|
| `ILOA/simple_main.cpp` | Demonstrates the basic creation and linking of nodes in a singly linked list using dynamically allocated memory. |
| `ILOA/simple_singly_LL.h` | Defines the basic templated node structure for a singly linked list. |
| `ILOA/main_ILOA.1.cpp` | Demonstrates singly linked list operations, including traversal, insertion at the head, insertion after a given node, insertion at the end, node deletion, and deletion of the entire list. |
| `ILOA/singly_LL.h` | Contains the templated singly linked list structure and functions for traversal, insertion, node deletion, and list deletion. |
| `ILOA/main_ILOA.2.cpp` | Demonstrates doubly linked list operations, including forward and backward traversal, insertion at the head, insertion between nodes, insertion at the end, node deletion, and deletion of the entire list. |
| `ILOA/doubly_LL.h` | Defines the templated doubly linked list node and functions for node creation, traversal, insertion, and deletion. |
| `ILOB/main_ILOB.cpp` | Implements a menu-driven song playlist program that allows users to create a playlist, add and remove songs, play all songs, and navigate to the next or previous song. |
| `ILOB/playlist_ILOB.h` | Contains the templated circular linked list structure and functions for playlist creation, song insertion and removal, traversal, and song navigation. |
| `CPE010_HOA3p1_ASAJAR.pdf` | Contains the activity manual, procedures, output requirements, supplementary activity, and documentation. |

## Concepts Applied

- Linked Lists
- Singly Linked Lists
- Doubly Linked Lists
- Circular Linked Lists
- List Abstract Data Type (ADT)
- Nodes and Pointers
- Dynamic Memory Allocation
- Templates
- Traversal
- Insertion and Deletion
- Forward and Backward Traversal
- Circular Data Representation
- Memory Management

## Implementation

### ILO A — Singly and Doubly Linked Lists

The first part of the activity demonstrates the basic structure of linked lists through dynamically allocated nodes. The singly linked list stores data and a pointer to the next node, while the doubly linked list stores data along with pointers to both the previous and next nodes.

The programs implement common linked list operations, such as traversal, insertion at the head, insertion between nodes, insertion at the end, deletion of a node, and deletion of the entire list. The doubly linked list also demonstrates forward and backward traversal.

### ILO B — Supplementary Activity: Song Playlist Using Linked List

The supplementary activity implements a song playlist using a circular linked list. Each node stores a song title and a pointer to the next song, with the last node pointing back to the first node.

The menu-driven program allows users to create a playlist, add songs, remove songs, play all songs once, and navigate to the next or previous song. This demonstrates how circular linked lists can be applied to playlist management and sequential navigation.

## How to Run

1. Open the desired `.cpp` file using a C++ IDE or code editor.
2. Make sure a C++ compiler is installed and configured.
3. Compile and run the program.
4. Enter the required inputs and follow the displayed instructions.

## Documentation

The complete activity manual and documentation can be accessed through the following file:

[CPE010_HOA3p1_ASAJAR.pdf](CPE010_HOA3p1_ASAJAR.pdf)