#include "circle.hpp"

int main() {
    Circle c1(5.0); // Constructor cu parametru
    Circle c2;      // Constructor implicit

    c2 = c1;        // Operator de atribuire
    Circle c3 = c1; // Constructor de copiere

    c1 = c1;        // Test atribuirea la sine

    std::cout << "c1 radius: " << c1.getRadius() << ", area: " << c1.calculateArea() << ", diameter: " << c1.calculateDiameter() << "\n";
    std::cout << "c2 radius: " << c2.getRadius() << ", area: " << c2.calculateArea() << ", diameter: " << c2.calculateDiameter() << "\n";
    std::cout << "c3 radius: " << c3.getRadius() << ", area: " << c3.calculateArea() << ", diameter: " << c3.calculateDiameter() << "\n";

    return 0;
}
