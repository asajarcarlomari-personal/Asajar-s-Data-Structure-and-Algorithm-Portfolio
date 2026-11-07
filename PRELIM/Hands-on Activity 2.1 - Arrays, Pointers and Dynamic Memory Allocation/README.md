# Hands-on Activity 2.1 — Arrays, Pointers and Dynamic Memory Allocation

## Description

This activity focuses on the use of arrays, pointers, and dynamic memory allocation in C++. It demonstrates the creation and management of objects using static and dynamic memory allocation. The activity also explores object-oriented programming concepts through a Student class and a grocery list program that uses inheritance, pointers, and memory deallocation.

## Objectives

- Demonstrate the use of dynamic memory allocation.
- Implement static and dynamic memory allocation in C++.
- Create dynamically allocated objects using pointers and arrays.
- Solve programming problems using dynamic memory allocation, arrays, and pointers.

## Files Included

| File | Description |
|------|-------------|
| `Procedure.cpp` | Implements a `Student` class with a constructor, destructor, copy constructor, and a method for displaying student details. It demonstrates static allocation of a student array and dynamic allocation of Student objects using pointers. |
| `Supplementary.cpp` | Implements a grocery list program using a `GroceryItem` base class and derived `Fruit` and `Vegetable` classes. It uses dynamic allocation, calculates item subtotals and the total amount, and demonstrates memory deallocation when removing an item. |
| `CPE010_HOA2p1_ASAJAR.pdf` | Contains the activity manual, procedures, supplementary activity, and documentation. |

## Concepts Applied

- Static and Dynamic Memory Allocation
- Arrays
- Pointers
- Reference and Dereference Operators
- `new` and `delete` Operators
- Classes and Objects
- Constructors and Destructors
- Copy Constructors
- Copy Assignment Operators
- Inheritance
- Polymorphism
- Virtual Functions
- Memory Management
- Object Copying

## Implementation

### ILO A and ILO B — Student List and Dynamic Object Allocation

The program implements a `Student` class with private attributes for the student's name and age. It includes a constructor for initializing student details, a destructor, a copy constructor, and a `printDetails()` method for displaying the information.

The driver program creates a static array of five Student objects and uses separate arrays for the students' names and ages. It then dynamically allocates Student objects using pointers and copies their details into the student array. The program demonstrates object creation, copying, and the use of pointers in managing student information.

### ILO C — Supplementary Activity: Jenna's Grocery List

The supplementary program implements a grocery list that distinguishes fruits from vegetables and calculates the total amount of the items.

The `GroceryItem` base class contains the common attributes and functions for grocery items. The `Fruit` and `Vegetable` classes inherit from the base class and provide their respective item types.

The program dynamically allocates grocery items and stores them in an array of pointers. It displays the details of each item, calculates the subtotal based on its price and quantity, and computes the total amount using the `totalSum()` function. It also demonstrates memory deallocation by deleting the Lettuce item and updating the grocery list.

## How to Run

1. Open the desired `.cpp` file using a C++ IDE or code editor.
2. Make sure a C++ compiler is installed and configured.
3. Compile and run the program.
4. Enter the required inputs, if applicable, and observe the displayed output.

## Documentation

The complete activity manual and documentation can be accessed through the following file:

[CPE010_HOA2p1_ASAJAR.pdf](CPE010_HOA2p1_ASAJAR.pdf)