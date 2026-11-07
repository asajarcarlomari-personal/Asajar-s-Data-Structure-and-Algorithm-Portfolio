#include <iostream>
#include <iomanip>

void lines();
void input(double &firstNumber, double &secondNumber);
void swapNumbers(double &firstNumber, double &secondNumber);
void prompt();

int main() {

    double firstNumber, secondNumber;
    int option = 0;

    std::cout << "===== SWAPPING TWO NUMBERS =====" << std::endl;

    do {
        lines();
        input(firstNumber, secondNumber);

        std::cout << std::endl << "\tBEFORE SWAPPING";
		lines();
		std::cout << std::left;
		std::cout << std::setw(15) << "First number"  << ":  " << firstNumber << std::endl;
		std::cout << std::setw(15) << "Second number" << ":  " << secondNumber << std::endl;
		
		swapNumbers(firstNumber, secondNumber);
		
		std::cout << std::endl << "\tAFTER SWAPPING";
		lines();
		std::cout << std::left;
		std::cout << std::setw(15) << "First number"  << ":  " << firstNumber << std::endl;
		std::cout << std::setw(15) << "Second number" << ":  " << secondNumber << std::endl;

        do {
            lines();
            prompt();
            std::cin >> option;

            if (option != 1 && option != 2) {
                std::cout << std::endl << "Invalid option. Please try again." << std::endl;
            }

        } while (option != 1 && option != 2);

    } while (option == 1);

    lines();
    std::cout << "Program ended. Thank you." << std::endl;

    return 0;
}

void lines() {
    std::cout << std::endl;
    for (int dash = 0; dash < 32; dash++) {
        std::cout << "-";
    }
    std::cout << std::endl;
}

void input(double &firstNumber, double &secondNumber) {
    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;
    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;
}

void swapNumbers(double &firstNumber, double &secondNumber) {
    double temporaryVariable = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temporaryVariable;
}

void prompt() {
    std::cout << "Do you want to swap again?" << std::endl;
	std::cout << "(1) Yes" << std::endl;
	std::cout << "(2) No" << std::endl << std::endl;
	std::cout << "Select option: ";
}