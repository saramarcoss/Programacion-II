#include "contacto.h"
#include"Fecha.h"

string Contacto::getNombre() const
{
    return nombre;
}

void Contacto::setNombre(const string &value)
{
    nombre = value;
}

string Contacto::getPrimerapellido() const
{
    return primerapellido;
}

void Contacto::setPrimerapellido(const string &value)
{
    primerapellido = value;
}

string Contacto::getTelefono() const
{
    return telefono;
}

void Contacto::setTelefono(const string &value)
{
    telefono = value;
}

string Contacto::getCorreo() const
{
    return correo;
}

void Contacto::setCorreo(const string &value)
{
    correo = value;
}





int FechaN::getM() const
{
    return m;
}

void FechaN::setM(int value)
{
    m = value;
}

int FechaN::getA() const
{
    return a;
}

void FechaN::setA(int value)
{
    a = value;
}

int FechaN::getD() const
{
    return d;
}

void FechaN::setD(int value)
{
    d = value;
}
