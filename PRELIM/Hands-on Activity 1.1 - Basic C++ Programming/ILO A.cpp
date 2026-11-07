#include <iostream>
#include <iomanip>

void prompt();
void lines();
void inputs(double &firstNumber, double &secondNumber);
double computeSum(double firstNumber, double secondNumber);
bool compareTwoVariables(double A, double B);
bool logicalOperations(bool value1, bool value2);

int main() {
    
	double firstNumber, secondNumber;
    int option = 0;
    double inputA, inputB;

    std::cout << "================== BASIC FUNCTION PROGRAM ==================" << std::endl;

    while (option != 4) {
        lines();
        prompt();
        std::cin >> option;
        std::cout << std::endl;

        switch (option) {
            case 1: {
                inputs(firstNumber, secondNumber);
                std::cout << "The sum is " << computeSum(firstNumber, secondNumber) << std::endl;
                break;
            }

            case 2: {
                inputs(firstNumber, secondNumber);

                if (compareTwoVariables(firstNumber, secondNumber)) {
                    std::cout << "A is greater than B." << std::endl;
                } else {
                    std::cout << "A is not greater than B." << std::endl;
                }
                break;
            }

            case 3: {
                while (true) {
			        std::cout << "Enter the first Boolean value (1 = true, 0 = false): ";
			        std::cin >> inputA;
			
			        if (inputA == 0 || inputA == 1)
			            break;
			
			        std::cout << "Invalid input. Please enter only 0 or 1." << std::endl;
			    }
			
			    while (true) {
			        std::cout << "Enter the second Boolean value (1 = true, 0 = false): ";
			        std::cin >> inputB;
			
			        if (inputB == 0 || inputB == 1)
			            break;
			
			        std::cout << "Invalid input. Please enter only 0 or 1." << std::endl;
			    }
			
				lines();
				
			    if (logicalOperations(inputA, inputB)) {
			        lines();
					std::cout << "Logical operations completed successfully." << std::endl;
			    }
			    break;
            }

            case 4: {
                lines();
                std::cout << "Program ended. Thank you." << std::endl;
                break;
            }

            default: {
                std::cout << "Invalid option. Please try again." << std::endl;
                break;
            }
        }
    }

    return 0;
}

void prompt() {  
	std::cout << "(1) Sum of Two Numbers" << std::endl;
    std::cout << "(2) Compare Two Variables" << std::endl;
    std::cout << "(3) Perform Logical Operations" << std::endl;
    std::cout << "(4) Exit" << std::endl << std::endl;
    std::cout << "Select option: ";
}

void lines() {
    std::cout << std::endl;
    for (int line = 0; line < 60; line++) {
        std::cout << "-";
    }
    std::cout << std::endl;
}

void inputs(double &firstNumber, double &secondNumber) {
    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;
    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;
}

double computeSum(double firstNumber, double secondNumber) {
    double sum = firstNumber + secondNumber;
    return sum;
}

bool compareTwoVariables(double firstNumber, double secondNumber) {
    return firstNumber > secondNumber;
}

bool logicalOperations(bool inputA, bool inputB) {
	std::cout << "\t\t     LOGICAL OPERATIONS";
	lines();
	std::cout << std::left;
	std::cout << std::setw(18) << "AND   (&&)"  << ":  " << (inputA && inputB) << std::endl;
	std::cout << std::setw(18) << "OR    (||)"   << ":  " << (inputA || inputB) << std::endl;
	std::cout << std::setw(18) << "NOT a (!a)"<< ":  " << (!inputA) << std::endl;
	std::cout << std::setw(18) << "NOT b (!b)"<< ":  " << (!inputB);
    return true;
}