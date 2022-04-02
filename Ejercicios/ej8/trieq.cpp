#include "trieq.h"
#include<math.h>
TriEq::TriEq()
{

}

void TriEq::ComputeArea()
{
   area=sqrt(3)*lado*lado/4;
}

void TriEq::ComputePerim()
{
    perimetro=lado*3;
}

float TriEq::getLado() const
{
    return lado;
}

void TriEq::setLado(float value)
{
    lado = value;
}

float TriEq::getAltura() const
{
    return altura;
}

void TriEq::setAltura(float value)
{
    altura = value;
}

void TriEq::ComputeAltura()
{
    altura=sqrt(3)*lado/2;
}
