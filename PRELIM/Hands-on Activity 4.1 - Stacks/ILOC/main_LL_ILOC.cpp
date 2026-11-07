#include <iostream>
#include <string>
#include "Stack_LL_ILOC.h"

int main() {

    int choice;
    std::string expr;

    do {

        std::cout << "\n=============== BALANCED SYMBOLS MENU ===============" << std::endl;
        std::cout << "-----------------------------------------------------" << std::endl;
        std::cout << "(1) Check Balanced Symbols" << std::endl;
        std::cout << "(2) Exit" << std::endl;
        std::cout << "Select an option: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {

            // Check the expression for balanced symbols
            case 1: {
                std::cout << "\nEnter an expression: ";
                std::getline(std::cin, expr);

                // Display the result of the balanced-symbol check
                if (checkBalanced(expr)) {
                    std::cout << "Expression is Balanced!" << std::endl;
                }
                else {
                    std::cout << "Expression is not Balanced!" << std::endl;
                }

                break;
            }

            // Exit the program
            case 2:
                std::cout << "\nExiting balanced symbols checker..." << std::endl;
                break;

            // Handle an invalid menu option
            default:
                std::cout << "\nInvalid option. Please try again." << std::endl;
        }

    } \
    while (choice != 2);

    return 0;
}