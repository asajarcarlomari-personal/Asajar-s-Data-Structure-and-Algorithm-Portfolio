#include <iostream>
#include <iomanip>

void lines();
void input(double &kelvinInput);
double kelvinToFahrenheit(double kelvinInput);
void prompt();

int main() {
	
    double kelvinInput;
    double fahrenheit = 0;
    int option = 0;

    std::cout << "============ KELVIN TO FAHRENHEIT CONVERTER ============" << std::endl;
    lines();
	std::cout << "\t\t  FORMULA:" << std::endl << std::endl;
    std::cout << "Fahrenheit = (Kelvin - 273.15) * 9 / 5 + 32" << std::endl;
    std::cout << std::fixed << std::setprecision(2);

    do {
        lines();
        input(kelvinInput);
        fahrenheit = kelvinToFahrenheit(kelvinInput);
        std::cout << "Temperature in Fahrenheit: " << fahrenheit << " " << char(248) << "F" << std::endl;

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
    for (int dash = 0; dash < 56; dash++) {
        std::cout << "-";
    }
    std::cout << std::endl;
}

void input(double &kelvinInput) {
    do {
        std::cout << "Enter temperature in Kelvin: ";
        std::cin >> kelvinInput;

        if (kelvinInput < 0) {
            std::cout << "Invalid input. Kelvin temperature cannot be negative." << std::endl;
            lines();
        }

    } while (kelvinInput < 0);
}

double kelvinToFahrenheit(double kelvinInput) {
    double fahrenheit = (kelvinInput - 273.15) * 9 / 5 + 32;
    return fahrenheit;
}

void prompt() {
    std::cout << "Do you want to convert again?" << std::endl;
    std::cout << "(1) Yes" << std::endl;
	std::cout << "(2) No" << std::endl << std::endl;
	std::cout << "Select option: ";
}