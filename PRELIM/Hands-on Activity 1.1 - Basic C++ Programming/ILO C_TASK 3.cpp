#include <iostream>
#include <iomanip>
#include <cmath>

void lines();
void input(double &x1, double &y1, double &x2, double &y2);
double calculateDistance(double x1, double y1, double x2, double y2);
void prompt();

int main() {

    double x1, y1, x2, y2;
    double distance = 0;
    int option = 0;

    std::cout << "=========== DISTANCE BETWEEN TWO POINTS ==========" << std::endl;
    lines();
	std::cout << "\t\t  FORMULA:" << std::endl << std::endl;
    std::cout << "Distance = sqrt[(x2 - x1)^2 + (y2 - y1)^2]" << std::endl;
    std::cout << std::fixed << std::setprecision(2);

    do {
        lines();
        input(x1, y1, x2, y2);
        distance = calculateDistance(x1, y1, x2, y2);
        std::cout << "The distance between the two points is " << distance << std::endl;

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
    for (int dash = 0; dash < 50; dash++) {
        std::cout << "-";
    }
    std::cout << std::endl;
}

void input(double &x1, double &y1, double &x2, double &y2) {
    std::cout << "Enter the x-coordinate of the first point: ";
    std::cin >> x1;
    std::cout << "Enter the y-coordinate of the first point: ";
    std::cin >> y1;
    std::cout << "Enter the x-coordinate of the second point: ";
    std::cin >> x2;
    std::cout << "Enter the y-coordinate of the second point: ";
    std::cin >> y2;
}

double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance;
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}

void prompt() {
    std::cout << "Do you want to compute again?" << std::endl;
    std::cout << "(1) Yes" << std::endl;
	std::cout << "(2) No" << std::endl << std::endl;
	std::cout << "Select option: ";
}