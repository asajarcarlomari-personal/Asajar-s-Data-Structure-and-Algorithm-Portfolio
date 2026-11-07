# Hands-on Activity 13.1 — Parallel Algorithms and Multithreading

## Description
This activity explores parallel algorithms and multithreading in C++. It demonstrates how threads can execute tasks concurrently, how mutexes protect shared data, and how multithreaded Merge Sort can improve sorting performance. The activity also measures execution time to observe the performance of multithreaded programs.

## Objectives
- Understand the basic concepts of parallel algorithms and multithreading.
- Create and manage threads using `std::thread`.
- Apply `join()` to synchronize thread execution.
- Use mutexes to protect shared variables.
- Implement a multithreaded sorting algorithm.
- Measure and analyze execution time.

## Files Included

| File | Description |
|---|---|
| `PROCEDURE/main_Part1.cpp` | Demonstrates a simple one-threaded example that executes a function using `std::thread` and `join()`. |
| `PROCEDURE/main_Part2.cpp` | Creates multiple threads to execute a print function concurrently using a vector of threads. |
| `SUPPLEMENTARY/main_PartB.cpp` | Demonstrates multithreading with a shared global variable, mutex protection, thread synchronization, and execution-time measurements. |
| `SUPPLEMENTARY/main_PartC.cpp` | Implements multithreaded Merge Sort using recursive division, separate threads for larger sections, and execution-time testing. |
| `CPE010_HOA13p1_AsajarCarlo_GodinoJaime.pdf` | Contains the activity instructions, code screenshots, outputs, and analysis. |

## Concepts Applied
- Parallel Algorithms
- Multithreading
- Concurrency
- `std::thread`
- `join()`
- Thread Synchronization
- Mutex
- `std::lock_guard`
- Shared Variables
- Recursive Algorithms
- Merge Sort
- Execution Time Measurement
- Experimental Analysis

## Implementation

### ILO A and B — Basic Multithreading
Implements a simple thread that prints an integer and a string, then creates multiple threads to execute the same function with different values. The programs use `std::thread` and `join()` to manage and synchronize thread execution.

### Supplementary Part B — Shared Variables and Synchronization
Uses multiple threads to modify a shared global variable. A mutex and `std::lock_guard` protect the variable from simultaneous access. The program also demonstrates thread synchronization and measures execution time across multiple tests.

### Supplementary Part C — Multithreaded Merge Sort
Implements Merge Sort using recursive division and multithreading for larger sections of an array. The program sorts 100,000 randomly generated integers, checks whether the array is sorted correctly, and measures execution time across three tests.

## How to Run
1. Open the selected C++ source file in a C++ IDE or compiler.
2. Compile the `.cpp` file with C++11 or a later standard and thread support enabled.
3. Run the executable.
4. Observe the output and execution-time measurements.

## Documentation
[CPE010_HOA13p1_AsajarCarlo_GodinoJaime.pdf](CPE010_HOA13p1_AsajarCarlo_GodinoJaime.pdf)