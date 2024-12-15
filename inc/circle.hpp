#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

class Circle {
public:
    // Destructor
    ~Circle();  
    //Implicit constructor
    Circle();
    // Constructor care initializeaza raza cercului
    Circle(double radius);

    // Constructor de copiere
    Circle(const Circle&);

    // Operator de atribuire prin copiere
    Circle& operator=(const Circle&);

    // Constructor de mutare
    Circle(Circle&&) noexcept;

    // Operator de mutared
    Circle& operator=(Circle&&) noexcept;

    // Metode pentru calculul ariei si diametrului
    double calculateArea() const;
    double calculateDiameter() const;

    // Getter pentru raza cercului
    double getRadius() const;

private:
    double m_radius; 
    double *dynamicData;
};

#endif // CIRCLE_H
