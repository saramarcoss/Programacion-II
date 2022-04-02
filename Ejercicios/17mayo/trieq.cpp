#include "trieq.h"
#include<math.h>
Trieq::Trieq(int l)
{
    lado=l;
}
float Trieq::getPerimetro() const
{
   return lado*3;
}

float Trieq::getArea() const
{
    return sqrt(3)*lado*lado/4;
}

void Trieq::PrintInfo()
{
    std::cout<<"Triangulo\n";
}
