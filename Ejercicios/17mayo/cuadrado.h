#ifndef CUADRADO_H
#define CUADRADO_H
#include<iostream>
#include "figura.h"

class Cuadrado : public Figura
{
public:
    Cuadrado(float l);
    float getPerimetro()const;
    float getArea()const;
    void PrintInfo();
protected:
    float lado;

};

#endif // CUADRADO_H
