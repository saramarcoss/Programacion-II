#include "numcomplejo.h"

NumComplejo::NumComplejo()
{

}

NumComplejo::NumComplejo(float r, float i): real{r}, imaginaria{i}
{

}

float NumComplejo::getReal() const
{
    return real;
}

void NumComplejo::setReal(float value)
{
    real = value;
}

float NumComplejo::getImaginaria() const
{
    return imaginaria;
}

void NumComplejo::setImaginaria(float value)
{
    imaginaria = value;
}
