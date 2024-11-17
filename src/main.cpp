#include <circle.hpp>
#include <iostream>

int main() {
    // Cream un obiect Circle
    Circle circle(5.0);
    // Afisam aria și diametrul cercului
    std::cout << "Circle with radius " << circle.getRadius() << " has:" << std::endl;
    std::cout << "Area: " << circle.calculateArea() << std::endl;
    std::cout << "Diameter: " << circle.calculateDiameter() << std::endl;

    std::cout << std::endl;

    Circle circle2(-5);
    // Afisam aria și diametrul cercului initializat cu raza negativa
    std::cout << "Circle with radius " << circle2.getRadius() << " has:" << std::endl;
    std::cout << "Area: " << circle2.calculateArea() << std::endl;
    std::cout << "Diameter: " << circle2.calculateDiameter() << std::endl;

    std::cout << std::endl;
    
    Circle circle3();

    // Incercam copierea (aceste linii ar trebui sa fie comentate pentru a compila cu succes)
    // Circle circleCopy = circle;       // Eroare: constructorul de copiere este dezactivat, pentru activare voi comenta linia din fisierul header circle.hpp
    // std::cout << "Circle with radius " << circleCopy.getRadius() << " has:" << std::endl;
    // std::cout << "Area: " << circleCopy.calculateArea() << std::endl;
    // std::cout << "Diameter: " << circleCopy.calculateDiameter() << std::endl;
    // Circle anotherCircle(10.0);
    // anotherCircle = circle;           // Eroare: operatorul de atribuire este dezactivat

    // Demonstrarea apelarii move constructorului default
    Circle tempCircle(10.0);
    tempCircle = std::move(circle); // Mutam resursele de la circle in tempCircle

    return 0;
}
