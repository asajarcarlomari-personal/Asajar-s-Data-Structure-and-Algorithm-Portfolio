# Hands-on Activity 6.1 — Searching Techniques

## Description

This activity focuses on implementing different searching techniques in C++. It demonstrates sequential search and binary search using arrays and linked lists. The supplementary activity explores counting comparisons, identifying repeated instances of a search value, and implementing recursive binary search.

## Objectives

- Understand the basic concepts of searching techniques.
- Implement sequential search using arrays and linked lists.
- Implement binary search using arrays and linked lists.
- Modify searching algorithms to count comparisons and repeated instances.
- Apply recursion to binary search.

## Files Included

| File | Description |
|---|---|
| `ILOA/main.cpp` | Generates a random dataset and demonstrates sequential and binary search using arrays and linked lists. |
| `ILOA/node.h` | Contains the templated node structure used for linked list searching. |
| `ILOA/searchingAlgo.h` | Contains the sequential search and binary search implementations for arrays and linked lists. |
| `ILOB/main_ILOB.cpp` | Demonstrates searching algorithms with comparison counting, repeated-instance counting, and recursive binary search. |
| `ILOB/node_ILOB.h` | Contains the templated node structure used in the supplementary searching problems. |
| `ILOB/searchingAlgo_ILOB.h` | Contains the modified searching algorithms, including comparison counters, repeated-instance counters, and recursive binary search. |
| `CPE010_HOA6p1_ASAJAR.pdf` | Contains the activity manual, procedures, program outputs, observations, and documentation. |

## Concepts Applied

- Searching algorithms
- Sequential (Linear) Search
- Binary Search
- Array-based searching
- Linked list-based searching
- Sorted datasets
- Templates and pointers
- Comparison counting
- Counting repeated instances
- Recursive algorithms
- Search range using `low`, `up`, and `middle`

## Implementation

### ILO A — Searching Techniques Using Arrays and Linked Lists

The program generates a dataset containing random integers and demonstrates sequential search using an array. It also creates linked lists to perform sequential search and binary search. The implementation shows how searching algorithms can be applied to different data structures and how binary search reduces the search range when the data is sorted.

### ILO B — Modified Searching Algorithms

The supplementary activity modifies the searching algorithms to perform additional operations.

Problem 1 counts the number of comparisons made by sequential search using both arrays and linked lists.

Problem 2 modifies sequential search to count the repeating instances of a given value in the dataset.

Problem 3 implements binary search and counts the number of comparisons required to find a key in a sorted array.

Problem 4 implements recursive binary search, which repeatedly searches the left or right portion of the sorted array until the key is found or the search range becomes invalid.

## How to Run

1. Open the desired `.cpp` file in a C++ IDE.
2. Make sure the compiler is properly configured.
3. Compile and run the program.
4. Follow the instructions displayed in the console.

## Documentation

The complete activity documentation, including procedures, outputs, and observations, is available in the PDF file:

[CPE010_HOA6p1_ASAJAR.pdf](CPE010_HOA6p1_ASAJAR.pdf)