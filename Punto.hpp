#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;

class Punto{
private:
    double x;
    double y;

public:
    // Metodos Constructores
    Punto();
    Punto(double _x, double _y); // Constructor con parametros

    // Metodos modificadores - setters - cambiar el valor de un atributo
    void setX(double _x);
    void setY(double _y);

    //Metodos de acceso - getters - retorna el valor del atributo
    double getX();
    double getY();

    // Otros Metodos
    double calculaDistancia(Punto p2);
    std::string str();

};

#endif /* Punto_hpp */