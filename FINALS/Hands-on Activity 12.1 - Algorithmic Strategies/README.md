# Hands-on Activity 12.1 — Algorithmic Strategies

## Description
This activity explores different algorithmic strategies, including recursion, brute force, backtracking, greedy algorithms, and divide-and-conquer. It also implements Memoization and Bottom-Up Dynamic Programming to solve the minimum steps to one problem, then compares recursive and memoized approaches for counting paths in a matrix with a given cost.

## Objectives
- Understand different algorithmic strategies and their applications.
- Identify algorithmic strategies used in previous activities.
- Implement Memoization and Bottom-Up Dynamic Programming.
- Analyze and compare algorithm execution times.
- Apply recursion and memoization to solve a matrix path-counting problem.

## Files Included

| File | Description |
|---|---|
| `ILOA/memoization_ILOA.cpp` | Implements Memoization to find the minimum steps needed to reach 1 using subtraction by 1 or division by 2 or 3. It also measures execution time. |
| `ILOA/bottom_up_dynamic_ILOA.cpp` | Implements Bottom-Up Dynamic Programming for the minimum steps to one problem and measures execution time for different input sizes. |
| `ILOB_C/main_ILOB_C.cpp` | Implements recursive and memoized algorithms to count paths in a matrix with a given cost. It compares their results and execution times. |
| `CPE010_HOA12p1_AsajarCarlo_GodinoJaime.pdf` | Contains the activity instructions, pseudocode, implementation screenshots, outputs, and analysis. |

## Concepts Applied
- Algorithmic Strategies
- Recursion
- Brute Force
- Backtracking
- Greedy Algorithms
- Divide-and-Conquer
- Dynamic Programming
- Memoization
- Bottom-Up Approach
- Optimal Substructure
- Matrix Traversal
- Time Complexity
- Experimental Analysis
- Execution Time Measurement

## Implementation

### ILO A — Minimum Steps to One
Identifies algorithmic strategies used in previous activities and implements Memoization and Bottom-Up Dynamic Programming to determine the minimum number of steps required to reach 1. Both implementations use subtraction by 1 or division by 2 or 3 and compare their execution times.

### ILO B and C — Matrix Path Counting
Implements recursive and memoized algorithms to count the number of paths from the first cell to the destination cell of a matrix with a target cost. Movement is limited to right or down. The program compares both methods' results and execution times.

## How to Run
1. Open the selected C++ source file in a C++ IDE or compiler.
2. Compile the `.cpp` file.
3. Run the executable.
4. Enter the required input when prompted.
5. Observe the results and execution-time measurements.

## Documentation
[CPE010_HOA12p1_AsajarCarlo_GodinoJaime.pdf](CPE010_HOA12p1_AsajarCarlo_GodinoJaime.pdf)