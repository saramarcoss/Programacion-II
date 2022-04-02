#include "elipse.h"
#include<math.h>
Elipse::Elipse(float smayor,float smenor)
{
   semiejemayor=smayor;
   semiejemenor=smenor;
}
float Elipse::getPerimetro() const
{
   return 2*3.14*sqrt((semiejemayor*semiejemayor+semiejemenor*semiejemenor)/2);
}

float Elipse::getArea() const
{
    return semiejemayor*semiejemenor*3.14;
}
void Elipse::PrintInfo()
{
    std::cout<<"Elipse\n";
}
