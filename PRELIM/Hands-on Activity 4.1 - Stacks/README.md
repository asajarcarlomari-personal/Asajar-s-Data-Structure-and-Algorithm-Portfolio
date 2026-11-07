# Hands-on Activity 4.1 — Stacks

## Description

This activity focuses on the implementation and operations of stacks in C++. It demonstrates the use of the Standard Template Library (STL), arrays, and linked lists to create and manipulate stacks. The supplementary activity applies stack operations to check whether symbols in an expression are properly balanced.

## Objectives

- Understand the basic concept and behavior of a stack.
- Implement stack operations using the C++ STL.
- Develop stack implementations using arrays and linked lists.
- Apply stack operations to solve problems involving balanced symbols.

## Files Included

| File | Description |
|---|---|
| `ILOA/ILOA.cpp` | Demonstrates stack operations using the C++ STL, including `push()`, `top()`, `empty()`, `size()`, `swap()`, and `emplace()`. |
| `ILOB/ILOB1.cpp` | Implements an array-based stack with push, pop, top, empty, full, and display operations. |
| `ILOB/main_ILOB2.cpp` | Demonstrates stack operations using a linked list with character elements. |
| `ILOB/listStack.h` | Contains the templated linked list stack implementation and its operations. |
| `ILOC/main_ARR_ILOC.cpp` | Implements a menu-driven balanced symbols checker using an array-based stack. |
| `ILOC/Stack_ARR_ILOC.h` | Contains the array-based stack functions used to check balanced symbols. |
| `ILOC/main_LL_ILOC.cpp` | Implements a menu-driven balanced symbols checker using a linked list-based stack. |
| `ILOC/Stack_LL_ILOC.h` | Contains the linked list-based stack functions used to check balanced symbols. |
| `CPE010_HOA4p1_ASAJAR.pdf` | Contains the activity manual, procedures, program outputs, and documentation. |

## Concepts Applied

- Stack Abstract Data Type (ADT)
- Last In, First Out (LIFO)
- C++ Standard Template Library (STL)
- Stack operations: push, pop, top, empty, and size
- Array-based stack implementation
- Linked list-based stack implementation
- Templates and pointers
- Dynamic memory allocation and deallocation
- Stack overflow and underflow
- Balanced symbol checking

## Implementation

### ILO A — Stack Using the C++ STL

The program uses the `std::stack` library to demonstrate the basic operations of a stack. It tests functions such as `push()`, `top()`, `empty()`, `size()`, `swap()`, and `emplace()`. The implementation shows how elements are added and accessed following the Last In, First Out (LIFO) principle.

### ILO B — Stack Using Arrays and Linked Lists

This section demonstrates two ways of implementing a stack.

The array-based implementation uses a fixed-size array to store elements. It includes functions for inserting, removing, accessing, checking, and displaying stack elements. It also handles stack overflow and underflow conditions.

The linked list-based implementation uses dynamically allocated nodes to store stack elements. It includes push, pop, top, empty, and display operations. The implementation also demonstrates how nodes are linked and removed during stack operations.

### ILO C — Balanced Symbols Checker

The supplementary activity implements a balanced symbols checker using both an array-based stack and a linked list-based stack. The program checks whether opening and closing parentheses, braces, and brackets are properly matched in an expression. It uses stack operations to determine whether the expression is balanced.

## How to Run

1. Open the desired `.cpp` file in a C++ IDE.
2. Make sure the compiler is properly configured.
3. Compile and run the program.
4. Follow the instructions displayed in the console.

## Documentation

The complete activity documentation, including procedures and outputs, is available in the PDF file:

[CPE010_HOA4p1_ASAJAR.pdf](CPE010_HOA4p1_ASAJAR.pdf)