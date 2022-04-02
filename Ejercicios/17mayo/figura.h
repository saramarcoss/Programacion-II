#ifndef FIGURA_H
#define FIGURA_H
#include<iostream>

class Figura
{
public:
    Figura();
    virtual ~Figura();
    virtual float getArea() const;
    virtual float getPerimetro() const;
    virtual void PrintInfo()=0;

protected:
    float area;
    float perimetro;
};

#endif // FIGURA_H
