// Forma.cpp
#include "Forma.h"
#include <iostream>
using namespace std;
Forma::Forma() {}

Forma::~Forma() {}

void Forma::calcularArea() const {
    cout << "Calculate base shape area." << endl;
}

void Forma::imprimir() const {
    cout << "Print base form." << endl;
}
