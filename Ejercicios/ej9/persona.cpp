#include "persona.h"

Persona::Persona()
{

}

string Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(const string &value)
{
    nombre = value;
}

string Persona::getCorreo() const
{
    return correo;
}

void Persona::setCorreo(const string &value)
{
    correo = value;
}

int Persona::getAsignaturas() const
{
    return asignaturas;
}

void Persona::setAsignaturas(int value)
{
    asignaturas = value;
}
