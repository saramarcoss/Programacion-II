#include "pentregular.h"

PentRegular::PentRegular()
{

}

float PentRegular::getApotema() const
{
    return apotema;
}

void PentRegular::setApotema(float value)
{
    apotema = value;
}

float PentRegular::getLado() const
{
    return lado;
}

void PentRegular::setLado(float value)
{
    lado = value;
}

void PentRegular::ComputeArea()
{
   area=this->getPerimetro()*apotema/2;
}

void PentRegular::ComputePerim()
{
   perimetro=lado*5;
}
