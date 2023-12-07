// Circulo.cpp
#include "Circulo.h"
#include <iostream>
using namespace std;
Circulo::Circulo(double radio) : radio(radio) {}

Circulo::~Circulo() {}

void Circulo::calcularArea() const {
    cout << "Circle area: " << 3.14159 * radio * radio << endl;
}

void Circulo::imprimir() const {
    cout << "radius of the circle: " << radio << endl;
}

void Circulo::metodoPropioCirculo() const {
    cout << "Circles own method." << endl;
}
