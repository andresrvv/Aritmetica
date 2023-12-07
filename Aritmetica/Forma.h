// Forma.h
#pragma once

class Forma {
public:
    Forma();
    virtual ~Forma();

    virtual void calcularArea() const;
    virtual void imprimir() const;
};
