#ifndef CUADRADO_H
#define CUADRADO_H

#include "figura.h"

class Cuadrado : public Figura
{
public:
    Cuadrado();
    float getLado() const;
    float getDiagonal() const;
    void ComputeArea();
    void ComputePerim();

    void setLado(float value);

    void setDiagonal(float value);

protected:
    float lado;
    float diagonal;
};

#endif // CUADRADO_H
