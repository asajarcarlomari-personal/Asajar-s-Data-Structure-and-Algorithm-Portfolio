# Hands-on Activity 14.1 — Algorithm Complexity

## Description
This activity focuses on analyzing algorithm complexity using theoretical and experimental methods. It compares the performance of sorting and searching algorithms, examines their best-case and worst-case time complexities, and measures execution time across different input sizes and data arrangements.

## Objectives
- Understand the concept of algorithm complexity.
- Analyze the best-case and worst-case time complexity of algorithms.
- Compare sorting and searching algorithms.
- Apply theoretical and experimental analysis.
- Measure execution time for different input sizes.
- Understand how input arrangement affects algorithm performance.

## Files Included

| File | Description |
|---|---|
| `PROCEDURE/main_Procedure.cpp` | Demonstrates Merge Sort and Quick Sort, then compares their execution times using randomized, ascending, and descending datasets of different sizes. |
| `PROCEDURE/sortingAlgo.h` | Contains the implementation of Merge Sort, Quick Sort, their helper functions, partitioning, merging, and array generation. |
| `SUPPLEMENTARY/main_Supplementary.cpp` | Demonstrates Linear Search and Binary Search for arrays and linked lists, then compares their execution times using different input sizes. |
| `SUPPLEMENTARY/node.h` | Defines the templated `Node` class and the `new_node()` function for creating linked-list nodes. |
| `SUPPLEMENTARY/searchingAlgo.h` | Contains implementations of Linear Search and Binary Search for arrays and linked lists, including the helper function for finding the middle node. |
| `CPE010_HOA14p1_AsajarCarlo_GodinoJaime.pdf` | Contains the activity instructions, theoretical analysis, experimental results, and documentation. |

## Concepts Applied
- Algorithm Complexity
- Big-O Notation
- Best-Case and Worst-Case Analysis
- Theoretical Analysis
- Experimental Analysis
- Merge Sort
- Quick Sort
- Linear Search
- Binary Search
- Arrays
- Linked Lists
- Divide-and-Conquer
- Execution Time Measurement
- Input Size and Data Arrangement

## Implementation

### Procedure — Sorting Algorithm Complexity
Implements Merge Sort and Quick Sort to sort an array of 100 randomly generated elements. It also compares both algorithms using randomized, ascending, and descending datasets with input sizes of 100, 1,000, and 10,000. The program measures execution time in microseconds and checks whether the sorted results are correct.

### Supplementary — Searching Algorithm Complexity
Implements Linear Search and Binary Search for arrays and linked lists. It demonstrates searching operations using sample data, then measures and compares the execution times of Linear Search and Binary Search for ascending datasets with input sizes of 1,000, 10,000, and 100,000.

## How to Run
1. Open the selected C++ source file in a C++ IDE or compiler.
2. Compile the `.cpp` file.
3. Run the executable.
4. Enter the requested search value when prompted.
5. Observe the algorithm outputs and execution-time measurements.

## Documentation
[CPE010_HOA14p1_AsajarCarlo_GodinoJaime.pdf](CPE010_HOA14p1_AsajarCarlo_GodinoJaime.pdf)