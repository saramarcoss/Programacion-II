#include "cuadrado.h"

Cuadrado::Cuadrado()
{

}

float Cuadrado::getLado() const
{
    return lado;
}

float Cuadrado::getDiagonal() const
{
    return diagonal;
}

void Cuadrado::ComputeArea()
{
    area=lado*lado;
}

void Cuadrado::ComputePerim()
{
    perimetro=lado*4;
}

void Cuadrado::setLado(float value)
{
    lado = value;
}

void Cuadrado::setDiagonal(float value)
{
    diagonal = value;
}
