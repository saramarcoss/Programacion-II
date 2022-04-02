#include "persona.h"

Persona::Persona(std::string const & _nombre, int _nacimiento, std::string const & _telefono)
{
nombre=_nombre;
ano=_nacimiento;
numerotel=_telefono;
}

string Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(const string &value)
{
    nombre = value;
}

int Persona::getAno() const
{
    return ano;
}

void Persona::setAno(int value)
{
    ano = value;
}

string Persona::getNumerotel() const
{
    return numerotel;
}

void Persona::setNumerotel(const string &value)
{
    numerotel = value;
}
ostream & operator<<(ostream & os,const Persona & p){
    os<<"nombre: "<<p.getNombre()<<" ano: "<<p.getAno()<<" numero: "<<p.getNumerotel()<<"\n";
    return os;
}
