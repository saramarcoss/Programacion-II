#ifndef ELIPSE_H
#define ELIPSE_H
#include<iostream>
#include "figura.h"

class Elipse : public Figura
{
public:
    Elipse(float smayor,float smenor);
    float getPerimetro()const;
    float getArea()const;
    void PrintInfo();
protected:
    float semiejemayor;
    float semiejemenor;
};

#endif // ELIPSE_H
