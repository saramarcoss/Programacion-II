#ifndef CIRCULO_H
#define CIRCULO_H
#include<iostream>
#include "figura.h"

class Circulo : public Figura
{
public:
    Circulo(int r);
    float getPerimetro()const;
    float getArea()const;
    void PrintInfo();
protected:
    float radio;
};

#endif // CIRCULO_H
