#include "complejo.h"

Complejo::Complejo()
{

}

Complejo::Complejo(vector<Complejo>v)
{

}

float Complejo::getR() const
{
    return r;
}

void Complejo::setR(float value)
{
    r = value;
}

float Complejo::getI() const
{
    return i;
}

void Complejo::setI(float value)
{
    i = value;
}
