# Hands-on Activity 5.1 — Queue

## Description

This activity focuses on the implementation and operations of queues in C++. It demonstrates the use of the Standard Template Library (STL), arrays, and linked lists to create and manipulate queues. The supplementary activity applies queue operations through a shared printer simulation, where print jobs are added and processed in order.

## Objectives

- Understand the basic concept and behavior of a queue.
- Implement queue operations using the C++ STL.
- Develop queue implementations using arrays and linked lists.
- Apply queue operations to simulate a real-world process.

## Files Included

| File | Description |
|---|---|
| `ILOA/main_ILOA.cpp` | Demonstrates queue operations using the C++ STL, including `push()`, `pop()`, `front()`, `back()`, `size()`, and `empty()`. |
| `ILOB/main_ILOB1.cpp` | Demonstrates queue operations using a linked list, including enqueue, dequeue, front, back, and display operations. |
| `ILOB/queueLL_ILOB1.h` | Contains the templated linked list queue implementation and its operations. |
| `ILOB/main_ILOB2.cpp` | Demonstrates queue operations using an array-based queue, including enqueue, dequeue, clear, and copying. |
| `ILOB/queueArr_ILOB2.h` | Contains the templated array-based queue implementation, including its constructor, destructor, and copy operations. |
| `ILOC/main_ILOC.cpp` | Implements a shared printer simulation that manages and processes print jobs using a queue. |
| `ILOC/job_ILOC.h` | Contains the `Job` class for storing and displaying print job information. |
| `ILOC/printer_ILOC.h` | Contains the `Printer` class and its queue operations for adding, processing, and displaying print jobs. |
| `CPE010_HOA5p1_ASAJAR.pdf` | Contains the activity manual, procedures, program outputs, and documentation. |

## Concepts Applied

- Queue Abstract Data Type (ADT)
- First In, First Out (FIFO)
- C++ Standard Template Library (STL)
- Queue operations: enqueue, dequeue, front, back, size, and empty
- Array-based queue implementation
- Linked list-based queue implementation
- Circular queue
- Templates and pointers
- Dynamic memory allocation and deallocation
- Constructors, destructors, and copy operations
- Queue simulation and job processing

## Implementation

### ILO A — Queue Using the C++ STL

The program uses the `std::queue` library to demonstrate the basic operations of a queue. It tests functions such as `push()`, `pop()`, `front()`, `back()`, `size()`, and `empty()`. The implementation shows how elements are inserted at the rear and removed from the front following the First In, First Out (FIFO) principle.

### ILO B — Queue Using Arrays and Linked Lists

This section demonstrates two ways of implementing a queue.

The linked list-based implementation uses dynamically allocated nodes to store elements. It includes enqueue, dequeue, front, back, and display operations while maintaining front and back pointers.

The array-based implementation uses a fixed-size array to store queue elements. It demonstrates enqueue, dequeue, checking the front and back, clearing the queue, and copying queue objects through the copy constructor and copy assignment operator.

### ILO C — Shared Printer Simulation

The supplementary activity implements a shared printer simulation using a queue. Print jobs are added with their job ID, user name, and number of pages. The printer processes the jobs in the order they were added, demonstrating how the FIFO principle can be applied to a real-world system.

## How to Run

1. Open the desired `.cpp` file in a C++ IDE.
2. Make sure the compiler is properly configured.
3. Compile and run the program.
4. Follow the instructions displayed in the console.

## Documentation

The complete activity documentation, including procedures and outputs, is available in the PDF file:

[CPE010_HOA5p1_ASAJAR.pdf](CPE010_HOA5p1_ASAJAR.pdf)