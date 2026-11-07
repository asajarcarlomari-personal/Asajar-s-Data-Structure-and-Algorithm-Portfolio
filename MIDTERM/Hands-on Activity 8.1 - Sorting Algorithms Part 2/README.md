# Hands-on Activity 8.1 — Sorting Algorithms Part 2

## Description

This activity focuses on implementing additional sorting algorithms in C++. It demonstrates Shell Sort, Merge Sort, and Quick Sort using arrays containing random values. The supplementary activity applies Quick Sort partitioning and Bubble Sort to sort the resulting sublists.

## Objectives

- Understand the concepts of Shell Sort, Merge Sort, and Quick Sort.
- Implement the three sorting algorithms in C++.
- Apply sorting algorithms to arrays containing random values.
- Understand the divide-and-conquer approach used in Merge Sort and Quick Sort.
- Solve sorting problems using partitioning and sublist sorting.

## Files Included

| File | Description |
|---|---|
| `ILOA/main.cpp` | Generates an array of 100 random values and demonstrates Shell Sort, Merge Sort, and Quick Sort. |
| `ILOA/sortingAlgoPart2.h` | Contains the templated implementations of Shell Sort, Merge Sort, Quick Sort, and the partition function. |
| `ILOB/main_ILOB.cpp` | Demonstrates Quick Sort partitioning on a sample array, displays the left sublist, pivot, and right sublist, then sorts the sublists using Bubble Sort. |
| `ILOB/problem1_ILOB.h` | Contains the partition function, Bubble Sort implementation for sublists, and array display function. |
| `CPE010_HOA8p1_ASAJAR.pdf` | Contains the activity manual, procedures, program outputs, observations, and documentation. |

## Concepts Applied

- Sorting algorithms
- Shell Sort
- Merge Sort
- Quick Sort
- Bubble Sort
- Divide-and-conquer strategy
- Array partitioning
- Pivot selection
- Recursive algorithms
- Templates
- Element comparison and swapping
- Temporary arrays and merging

## Implementation

### ILO A — Shell Sort, Merge Sort, and Quick Sort

The program generates an array containing 100 random values and creates separate copies for each sorting algorithm. Shell Sort compares elements using decreasing gaps, Merge Sort divides the array into smaller parts and merges them in sorted order, and Quick Sort partitions the array around a pivot before recursively sorting the sublists. The output displays the original array and the sorted results of the three algorithms.

### ILO B — Quick Sort Partitioning and Bubble Sort

The supplementary activity uses a sample array containing seven elements. It applies the partition function of Quick Sort to arrange elements around a pivot. The program displays the left sublist, the pivot, and the right sublist. It then sorts both sublists using Bubble Sort and displays the final sorted array.

## How to Run

1. Open the desired `.cpp` file in a C++ IDE.
2. Make sure the compiler is properly configured.
3. Compile and run the program.
4. Follow the instructions displayed in the console.

## Documentation

The complete activity documentation, including procedures, outputs, and observations, is available in the PDF file:

[CPE010_HOA8p1_ASAJAR.pdf](CPE010_HOA8p1_ASAJAR.pdf)