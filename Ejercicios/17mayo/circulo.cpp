#include "circulo.h"

Circulo::Circulo(int r)
{
    radio=r;
}

float Circulo::getPerimetro() const
{
   return 2*3.14*radio;
}

float Circulo::getArea() const
{
    return 3.14*radio*radio;
}

void Circulo::PrintInfo()
{
    std::cout<<"Circulo\n";
}


