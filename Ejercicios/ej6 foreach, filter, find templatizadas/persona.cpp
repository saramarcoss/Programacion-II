#include "persona.h"

Persona::Persona()
{

}

Persona::Persona(int age, string name, string dni):edad{age},nombre{name},dni{dni}
{

}

int Persona::getEdad() const
{
    return edad;
}

void Persona::setEdad(int value)
{
    edad = value;
}

string Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(const string &value)
{
    nombre = value;
}

string Persona::getDni() const
{
    return dni;
}

void Persona::setDni(const string &value)
{
    dni = value;
}
