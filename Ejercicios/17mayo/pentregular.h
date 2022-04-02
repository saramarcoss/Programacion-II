#ifndef PENTREGULAR_H
#define PENTREGULAR_H
#include<iostream>
#include "figura.h"

class PentRegular : public Figura
{
public:
    PentRegular(float ap,float l);
    float getPerimetro()const;
    float getArea()const;
    void PrintInfo();

protected:
    float apotema;
    float lado;
};

#endif // PENTREGULAR_H
