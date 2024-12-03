#include "circle.hpp"
#include <cmath> // pentru M_PI

// Destructor
Circle::~Circle() {
    delete dynamicData;
    std::cout << "Destructor called for circle with radius: " << m_radius << "\n";
}

// Constructor
Circle::Circle() : m_radius(1.0), dynamicData(new double(1.0)) {
    std::cout << "Default constructor called. Radius set to 1.0\n";
}

// Constructor care initializeaza raza cercului
Circle::Circle(double radius) : m_radius(radius), dynamicData(new double(1.0)) {
    if (m_radius <= 0) {
        std::cerr << "Error: Radius must be positive. Default radius value set to 1.\n";
        m_radius = 1.0; // Setez raza la 1.0 ca valoare implicita
        *dynamicData = 2.0;
    }
    std::cout << "Circle initialized with radius: " << m_radius << " and dynamic data: " << *dynamicData << std::endl;
}

// Constructor de copiere
Circle::Circle(const Circle& circle) : m_radius(circle.m_radius), dynamicData(new double(*circle.dynamicData)) {
    std::cout << "Copy constructor called. Radius copied: " << m_radius << ", dynamic data copied: " << *dynamicData << std::endl;
}

// Operator de atribuire
Circle& Circle::operator=(const Circle& circle) {
    std::cout << "Assignment operator called.\n";

    // Gestionarea atribuirii la sine
    if (this == &circle) {
        std::cout << "Self-assignment detected. No changes made.\n";
        return *this;
    }

    // Eliberăm memoria veche
    delete dynamicData;

    // Copierea valorilor
    m_radius = circle.m_radius;
    dynamicData = new double(*circle.dynamicData); // deep copy

    // Returnam referinta la *this
    return *this;
}

// Calcularea ariei cercului
double Circle::calculateArea() const {
    return M_PI * m_radius * m_radius;
}

// Calcularea diametrului cercului
double Circle::calculateDiameter() const {
    return 2 * m_radius;
}

// Getter pentru raza cercului
double Circle::getRadius() const {
    return m_radius;
}
