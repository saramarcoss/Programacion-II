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

int Persona::getBirthyear() const
{
    return birthyear;
}

void Persona::setBirthyear(int value)
{
    birthyear = value;
}

string Persona::getTelefono() const
{
    return telefono;
}

void Persona::setTelefono(const string &value)
{
    telefono = value;
}

string Persona::getDni() const
{
    return dni;
}

void Persona::setDni(const string &value)
{
    dni = value;
}

void Persona::print() const
{
    cout<<nombre<<birthyear<<telefono<<dni<<"\n";
}

int Persona::age(int year)const
{
    int result;
    result=year-birthyear;
    return result;
}

bool Persona::isAdult(int year) const
{
    if(year-birthyear>18)return true;
    return false;
}
