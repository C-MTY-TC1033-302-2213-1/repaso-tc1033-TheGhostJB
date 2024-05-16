#include "Punto.hpp"

// Copiar todo del header en el cpp - Para evitar errores en los metodos

Punto::Punto(){
    x = 0;
    y = 0;
}
Punto::Punto(double _x, double _y){ // Constructor con parametros
    x = _x;
    y = _y;
}

// Metodos modificadores - setters - cambiar el valor de un atributo
void Punto::setX(double _x){
    x = _x;

}
void Punto::setY(double _y){
    y = _y;
}

//Metodos de acceso - getters  - retorna el valor del atributo
double Punto::getX(){
    return x;
}
double Punto::getY(){
    return y;
}

// Otros Metodos
double Punto::calculaDistancia(Punto p2){
    return sqrt((p2.x - x) * (p2.x - x) + (p2.y - y) * (p2.y - y));
}
string Punto::str(){
    return '(' + std::to_string(x) + ',' + std::to_string(y) + ')';
}