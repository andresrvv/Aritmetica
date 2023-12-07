// Cuadrado.cpp
#include "Cuadrado.h"
#include <iostream>
using namespace std;

Cuadrado::Cuadrado(double lado) : lado(lado) {}

Cuadrado::~Cuadrado() {}

void Cuadrado::calcularArea() const {
    cout << "Square area: " << lado * lado << endl;
}

void Cuadrado::imprimir() const {
    cout << "side square: " << lado << endl;
}

void Cuadrado::metodoPropioCuadrado() const {
    cout << "Squares own method." << endl;
}
