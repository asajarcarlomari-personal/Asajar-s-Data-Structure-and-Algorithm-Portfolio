#include <iostream>
#include <iomanip>
#include "job_ILOC.h"
#include "printer_ILOC.h"

int main() {
    Printer printer(5);

    std::cout << "            SHARED PRINTER SIMULATION\n";
    std::cout << "===============================================\n";

    // Add jobs
    std::cout << "\n================= Adding Jobs =================\n";
    std::cout << "-----------------------------------------------\n";

    printer.addJob(Job(1, "Carlo A.", 12));
    printer.addJob(Job(2, "Ralf A.", 7));
    printer.addJob(Job(3, "Michael B.", 15));
    printer.addJob(Job(4, "Troy B.", 4));

    // Display current printing queue
    std::cout << "\n=========== Current Printing Queue ============\n";
    std::cout << "-----------------------------------------------\n";

    printer.displayQueue();

    // Process jobs
    std::cout << "\n=============== Processing Jobs ===============\n";
    std::cout << "-----------------------------------------------\n";
    std::cout << std::left
              << std::setw(10) << "ID"
              << std::setw(20) << "User"
              << std::setw(10) << "Pages"
              << std::endl;

    std::cout << "-----------------------------------------------\n";

    printer.processJob(); // Printing for Carlo A.
    printer.processJob(); // Printing for Ralf A.

    std::cout << "-----------------------------------------------\n";

    // Display queue after processing
    std::cout << "\n=========== Queue After Processing ============\n";
    std::cout << "-----------------------------------------------\n";

    printer.displayQueue();

    // Add more jobs
    std::cout << "\n============== Adding More Jobs ===============\n";
    std::cout << "-----------------------------------------------\n";

    printer.addJob(Job(5, "Emmanuel B.", 10));
    printer.addJob(Job(6, "Jeffordniel C.", 6));
    printer.addJob(Job(7, "Lorenzo D.", 9));

    // Display final queue
    std::cout << "\n============ Final Printing Queue =============\n";
    std::cout << "-----------------------------------------------\n";

    printer.displayQueue();

    // Process remaining jobs
    std::cout << "\n========== Processing Remaining Jobs ==========\n";
    std::cout << "-----------------------------------------------\n";

    std::cout << std::left
              << std::setw(10) << "ID"
              << std::setw(20) << "User"
              << std::setw(10) << "Pages"
              << std::endl;

    std::cout << "-----------------------------------------------\n";

    printer.processJob(); // Printing for Michael B.
    printer.processJob(); // Printing for Troy B.
    printer.processJob(); // Printing for Emmanuel B.
    printer.processJob(); // Printing for Jeffordniel C.
    printer.processJob(); // Printing for Lorenzo D.

    std::cout << "-----------------------------------------------\n";

    // Display queue after all jobs are processed
    std::cout << "\n============ Queue After All Jobs =============\n";
    std::cout << "-----------------------------------------------\n";
    
    printer.displayQueue();

    return 0;
}