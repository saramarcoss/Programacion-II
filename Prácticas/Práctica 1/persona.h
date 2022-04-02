#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
using namespace std;

class Persona
{
public:
    Persona();
    string getNombre() const;
    void setNombre(const string &value);

    int getBirthyear() const;
    void setBirthyear(int value);

    string getTelefono() const;
    void setTelefono(const string &value);

    string getDni() const;
    void setDni(const string &value);

    void print()const;
    int age(int year)const;
    bool isAdult(int year)const;

private:
    string nombre;
    int birthyear;
    string telefono;
    string dni;
};

#endif // PERSONA_H
