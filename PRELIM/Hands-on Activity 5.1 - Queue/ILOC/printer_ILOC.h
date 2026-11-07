#ifndef PRINTER_ILOC_H
#define PRINTER_ILOC_H

#include <iostream>
#include <iomanip>
#include "job_ILOC.h"

class Printer {
private:
    Job* q_array;
    int q_capacity;
    int q_size;
    int q_front;
    int q_back;

public:
    // Constructor
    Printer(int capacity = 10) {
        q_capacity = capacity;
        q_array = new Job[q_capacity];
        q_size = 0;
        q_front = 0;
        q_back = -1;
    }

    // Destructor
    ~Printer() {
        delete[] q_array;
    }

    // Add a new print job to the queue
    void addJob(Job j) {
        if (q_size == q_capacity) {
            std::cout << "Queue is full. Job cannot be added.\n";
            return;
        }

        q_back = (q_back + 1) % q_capacity;
        q_array[q_back] = j;
        q_size++;

        std::cout << "Job added: ";
        j.display();
    }

    // Process the next print job
    void processJob() {
        if (q_size == 0) {
            return;
        }

        q_array[q_front].display();

        q_front = (q_front + 1) % q_capacity;
        q_size--;
    }

    // Display all pending jobs
    void displayQueue() {
        if (q_size == 0) {
            std::cout << "Queue is empty.\n";
            return;
        }

        std::cout << std::left
                  << std::setw(10) << "ID"
                  << std::setw(20) << "User"
                  << std::setw(10) << "Pages"
                  << std::endl;

        std::cout << "-----------------------------------------------\n";

        for (int i = 0; i < q_size; i++) {
            int index = (q_front + i) % q_capacity;
            q_array[index].display();
        }

        std::cout << "-----------------------------------------------\n";
    }
};

#endif