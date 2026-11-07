#ifndef JOB_ILOC_H
#define JOB_ILOC_H

#include <iostream>
#include <iomanip>
#include <string>

class Job {
public:
    int id;
    std::string user;
    int pages;

    // Constructor
    Job(int i = 0, std::string u = "", int p = 0) {
        id = i;
        user = u;
        pages = p;
    }

    // Display job information
    void display() {
        std::cout << std::left
                  << std::setw(10) << id
                  << std::setw(20) << user
                  << std::setw(10) << pages
                  << std::endl;
    }
};

#endif