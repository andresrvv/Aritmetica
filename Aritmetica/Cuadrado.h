// Cuadrado.h
#pragma once
#include "Forma.h"

class Cuadrado : public Forma {
private:
    double lado;

public:
    Cuadrado(double lado);
    ~Cuadrado();

    void calcularArea() const override;
    void imprimir() const override;
    void metodoPropioCuadrado() const;
};
