# Hands-on Activity 7.1 — Sorting Algorithms Part 1

## Description

This activity focuses on implementing basic sorting algorithms in C++. It demonstrates Bubble Sort, Selection Sort, and Insertion Sort using arrays containing random values. The supplementary activity applies sorting and vote-counting techniques to a voting system that identifies the candidate with the highest number of votes.

## Objectives

- Understand the basic concepts of sorting algorithms.
- Implement Bubble Sort, Selection Sort, and Insertion Sort.
- Apply sorting algorithms to arrays containing random values.
- Solve a sorting-related problem using vote counting.
- Identify the winning candidate based on the number of votes received.

## Files Included

| File | Description |
|---|---|
| `ILOA/main.cpp` | Generates an array of 100 random values and demonstrates Bubble Sort, Selection Sort, and Insertion Sort. |
| `ILOA/sortingAlgo.h` | Contains the templated implementations of Bubble Sort, Selection Sort, Insertion Sort, and the helper function `routine_smallest()`. |
| `ILOB/main_ILOB.cpp` | Generates 100 random votes, sorts them, counts the votes for five candidates, and identifies the winning candidate. |
| `ILOB/votingSort.h` | Contains the functions for displaying arrays, sorting votes using Bubble Sort, and counting votes for each candidate. |
| `CPE010_HOA7p1_ASAJAR.pdf` | Contains the activity manual, procedures, program outputs, observations, and documentation. |

## Concepts Applied

- Sorting algorithms
- Bubble Sort
- Selection Sort
- Insertion Sort
- Arrays
- Templates
- Nested loops
- Element comparison and swapping
- Random number generation
- Vote counting
- Identifying the highest value

## Implementation

### ILO A — Basic Sorting Algorithms

The program generates an array containing 100 random values and creates separate copies for each sorting algorithm. Bubble Sort compares and swaps elements, Selection Sort finds the smallest element and places it in its correct position, and Insertion Sort moves elements into their proper positions. The output displays the original array and the sorted results of the three techniques.

### ILO B — Voting System

The supplementary activity implements a voting system using sorting and vote-counting techniques. It generates 100 random votes ranging from 1 to 5, sorts the votes using Bubble Sort, and counts the votes received by each candidate. The program then compares the vote counts to determine and display the winning candidate and the number of votes received.

## How to Run

1. Open the desired `.cpp` file in a C++ IDE.
2. Make sure the compiler is properly configured.
3. Compile and run the program.
4. Follow the instructions displayed in the console.

## Documentation

The complete activity documentation, including procedures, outputs, and observations, is available in the PDF file:

[CPE010_HOA7p1_ASAJAR.pdf](CPE010_HOA7p1_ASAJAR.pdf)