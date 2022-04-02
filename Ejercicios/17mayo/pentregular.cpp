#include "pentregular.h"

PentRegular::PentRegular(float ap, float l)
{
    apotema=ap;
    lado=l;
}
float PentRegular::getPerimetro() const
{
   return lado*5;
}

float PentRegular::getArea() const
{
    return perimetro*apotema/2;
}

void PentRegular::PrintInfo()
{
    std::cout<<"Pentagono\n";
}
