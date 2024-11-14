#include <circle.hpp>
#include <cmath> // pentru M_PI

// Constructor implicit
Circle::~Circle() {
    std::cout << "Default destructor called\n";
}

// Constructor care initializeaza raza cercului
Circle::Circle(double radius) : m_radius(radius) {
    if (m_radius <= 0) {
        std::cerr << "Error: Radius must be positive. Default radius value set to 1.\n";
        m_radius = 1.0; // Setez raza la 1.0 ca valoare implicita
    }
    std::cout << "Circle initialized with radius: " << m_radius << std::endl;
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
