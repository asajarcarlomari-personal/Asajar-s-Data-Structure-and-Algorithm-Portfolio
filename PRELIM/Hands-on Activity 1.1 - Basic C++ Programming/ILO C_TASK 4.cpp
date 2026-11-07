#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

const double PI = 3.14159265358979323846;

class Triangle {
private:
    double totalAngle;
    double angleA, angleB, angleC;
    double sideA, sideB, sideC;

    double computeSide(double knownSide, double knownAngle, double targetAngle);

public:
    Triangle(double A, double B, double C, double a);

    void setAngles(double A, double B, double C, double a);
    bool validateTriangle();

    double computeArea();
    double computePerimeter();
    std::string determineType();
};

void lines();
void menu();
void formulas();
void inputs(double &A, double &B, double &C, double &sideA);

int main() {
    
	double angleA, angleB, angleC;
    double sideA;
    int option = 0;

    std::cout << "======================= TRIANGLE CALCULATOR ======================" << std::endl;
    lines();
	formulas();
    std::cout << std::fixed << std::setprecision(2);

    while (option != 4) {
        lines();
        menu();
        std::cin >> option;

        switch (option) {
            case 1:
            case 2:
            case 3: {
                lines();
                inputs(angleA, angleB, angleC, sideA);
                Triangle triangle(angleA, angleB, angleC, sideA);

                if (triangle.validateTriangle()) {
                    std::cout << std::endl << "The shape is a VALID triangle." << std::endl;

                    switch (option) {
                        case 1:
                            std::cout << "Area of Triangle: " << triangle.computeArea() << std::endl;
                            break;
                        case 2:
                            std::cout << "Perimeter of Triangle: " << triangle.computePerimeter() << std::endl;
                            break;
                        case 3:
                            std::cout << "Triangle Type: " << triangle.determineType() << std::endl;
                            break;
                    }
                } else {
                    std::cout << std::endl << "The shape is NOT A VALID triangle." << std::endl;
                }

                break;
            }

            case 4:
                lines();
                std::cout << "Program ended. Thank you." << std::endl;
                break;

            default:
                std::cout << std::endl << "Invalid option. Please try again." << std::endl;
        }
    }

    return 0;
}

void lines() {
    std::cout << std::endl;
    for (int i = 0; i < 66; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;
}

void menu() {
    std::cout << "(1) Compute the Area" << std::endl;
    std::cout << "(2) Compute the Perimeter" << std::endl;
    std::cout << "(3) Determine Triangle Type" << std::endl;
    std::cout << "(4) Exit" << std::endl << std::endl;
    std::cout << "Select option: ";
}

void formulas() {
	std::cout << "\t\t\tFORMULAS AND GUIDES";
    lines();
    std::cout << "AREA OF TRIANGLE:" << std::endl;
    std::cout << char(249) << " A = 1/2 (b)(c) sin(A)" << std::endl << std::endl;
    std::cout << "PERIMETER OF TRIANGLE:" << std::endl;
    std::cout << char(249) << " P = a + b + c" << std::endl << std::endl;
    std::cout << "TRIANGLE TYPE:" << std::endl;
    std::cout << char(249) << " Acute-angled Triangle  : All angles are less than 90 degrees" << std::endl;
    std::cout << char(249) << " Obtuse-angled Triangle : One angle is greater than 90 degrees" << std::endl;
    std::cout << char(249) << " Others                 : One angle is exactly 90 degrees" << std::endl;
}

void inputs(double &A, double &B, double &C, double &sideA) {
    std::cout << "Enter Angle A: ";
    std::cin >> A;
    std::cout << "Enter Angle B: ";
    std::cin >> B;
    std::cout << "Enter Angle C: ";
    std::cin >> C;
    std::cout << "Enter Side A: ";
    std::cin >> sideA;
}

Triangle::Triangle(double A, double B, double C, double a) {
    setAngles(A, B, C, a);
}

void Triangle::setAngles(double A, double B, double C, double a) {
    angleA = A;
    angleB = B;
    angleC = C;
    sideA = a;

    totalAngle = A + B + C;

    if (validateTriangle()) {
        sideB = computeSide(sideA, angleA, angleB);
        sideC = computeSide(sideA, angleA, angleC);
    }
}

bool Triangle::validateTriangle() {
    return (fabs(totalAngle - 180.0) < 0.0001 &&
            angleA > 0 &&
            angleB > 0 &&
            angleC > 0 &&
            sideA > 0);
}

double Triangle::computeSide(double knownSide, double knownAngle, double targetAngle) {
    return knownSide * sin(targetAngle * PI / 180) / sin(knownAngle * PI / 180);
}

double Triangle::computeArea() {
    return 0.5 * sideB * sideC * sin(angleA * PI / 180);
}

double Triangle::computePerimeter() {
    return sideA + sideB + sideC;
}

std::string Triangle::determineType() {
    if (angleA < 90 && angleB < 90 && angleC < 90) {
        return "Acute-angled Triangle";
    } else if (angleA > 90 || angleB > 90 || angleC > 90) {
        return "Obtuse-angled Triangle";
    } else {
        return "Others";
    }
}