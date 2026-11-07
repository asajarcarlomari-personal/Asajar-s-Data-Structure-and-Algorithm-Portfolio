# Hands-on Activity 11.1 — Basic Algorithm Analysis

## Description
This activity focuses on analyzing algorithms through theoretical and experimental methods. It includes measuring execution time, examining algorithm efficiency, and comparing different approaches to solving computational problems.

## Objectives
- Understand the basic principles of algorithm analysis.
- Analyze the time complexity of algorithms.
- Measure and compare algorithm execution times.
- Understand the differences between iterative and recursive approaches.
- Apply algorithm analysis to searching and problem-solving tasks.

## Files Included

| File | Description |
|---|---|
| `PROCEDURE/main_Procedure_ILOB.cpp` | Implements a binary search to determine whether a student needs vaccination based on their vaccination status. It also measures the search execution time for different input sizes. |
| `SUPPLEMENTARY/main_Supplementary_ILOA.cpp` | Implements the `Unique()` algorithm for checking duplicate values and compares the execution times of `rpower()` and `brpower()` for calculating powers recursively. |
| `CPE010_HOA11p1_AsajarCarlo_GodinoJaime.pdf` | Contains the activity instructions, analysis, results, and documentation. |

## Concepts Applied
- Algorithm Analysis
- Time Complexity
- Theoretical Analysis
- Experimental Analysis
- Big-O Notation
- Binary Search
- Sorting
- Iterative Algorithms
- Recursive Algorithms
- Execution Time Measurement
- Brute-Force Approach
- Divide-and-Conquer Approach

## Implementation

### ILO A — Theoretical Analysis
Analyzes the worst-case time complexity of an algorithm that checks for common values between two arrays. The analysis considers the number of comparisons performed and demonstrates the quadratic growth of the algorithm.

### ILO B — Experimental Runtime Analysis
Implements a `Student` class with overloaded comparison operators and uses binary search to check vaccination records. The program measures execution time using `std::chrono` for input sizes of 1,000, 10,000, and 100,000 students.

### Supplementary Activity — Algorithm Efficiency
Implements the `Unique()` function to determine whether all elements in a vector are unique using nested loops. It also compares the recursive `rpower()` and `brpower()` algorithms through execution-time measurements.

## How to Run
1. Open the C++ source file in a C++ IDE or compiler.
2. Compile the selected `.cpp` file.
3. Run the executable.
4. Observe the output and execution-time measurements.

## Documentation
[CPE010_HOA11p1_AsajarCarlo_GodinoJaime.pdf](CPE010_HOA11p1_AsajarCarlo_GodinoJaime.pdf)