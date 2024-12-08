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

    // Dezactivam constructorul de copiere si operatorul de atribuire
    // Pentru a arata ca aceste metode se genereaza in mod automat o sa comentez linia construcotrului de copiere(anulez dezactivarea)
    // In aces caz se genereaza automat constructorul de copiere si voi exemplifica in main.cpp acest lucru
    Circle(const Circle&);
    Circle& operator=(const Circle&);

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
