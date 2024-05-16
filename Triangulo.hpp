#ifndef Triangulo_hpp
#define Triangulo_hpp

#include <stdio.h>
#include <string>
#include <math.h>
#include "Punto.hpp"
using namespace std;

class Triangulo{
private:
    Punto v1, v2, v3;
public: 
    Triangulo();
    Triangulo(Punto _v1, Punto _v2, Punto _v3);

    // Metodos de Acceso
    Punto getVertice1();
    Punto getVertice2();
    Punto getVertice3();

    // Metodos modificadores
    void setVertice1(Punto _v1);
    void setVertice2(Punto _v2);
    void setVertice3(Punto _v3);

    // Otros metodos
    double perimetro();
    double area();
    std::string str();
};

#endif /* Triangulo_hpp */