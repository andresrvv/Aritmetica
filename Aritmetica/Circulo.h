// Circulo.h
#pragma once
#include "Forma.h"

class Circulo : public Forma {
private:
    double radio;

public:
    Circulo(double radio);
    ~Circulo();

    void calcularArea() const override;
    void imprimir() const override;
    void metodoPropioCirculo() const;
};
