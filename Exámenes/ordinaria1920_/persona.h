#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
using namespace std;

class Persona
{
    friend ostream & operator<<(ostream & os, const Persona & p);
public:
    Persona(std::string const & _nombre, int _nacimiento, std::string const & _telefono);
    string getNombre() const;
    void setNombre(const string &value);

    int getAno() const;
    void setAno(int value);

    string getNumerotel() const;
    void setNumerotel(const string &value);

private:
    string nombre;
    int ano;
    string numerotel;
};

#endif // PERSONA_H
