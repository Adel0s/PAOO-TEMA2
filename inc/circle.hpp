#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

class Circle {
public:
    // Destructor implicit
    ~Circle();   
    // Constructor care initializeaza raza cercului
    Circle(double radius);

    // Dezactivam constructorul de copiere si operatorul de atribuire
    // Pentru a arata ca aceste metode se genereaza in mod automat o sa comentez linia construcotrului de copiere(anulez dezactivarea)
    // In aces caz se genereaza automat constructorul de copiere si voi exemplifica in main.cpp acest lucru
    Circle(const Circle&) = delete;
    Circle& operator=(const Circle&) = delete;

    // Metode pentru calculul ariei si diametrului
    double calculateArea() const;
    double calculateDiameter() const;

    // Getter pentru raza cercului
    double getRadius() const;

private:
    double m_radius; // Membru de date pentru raza cercului
};

#endif // CIRCLE_H
