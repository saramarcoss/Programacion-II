#include "cuadrado.h"

Cuadrado::Cuadrado(float l)
{
    lado=l;
}
float Cuadrado::getPerimetro() const
{
   return lado*4;
}

float Cuadrado::getArea() const
{
    return lado*lado;
}

void Cuadrado::PrintInfo()
{
    std::cout<<"Cuadrado\n";
}
