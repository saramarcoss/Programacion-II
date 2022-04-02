#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
using namespace std;

class Persona
{
public:
    Persona();
    Persona(int age, string name, string dni);
    int getEdad() const;
    void setEdad(int value);

    string getNombre() const;
    void setNombre(const string &value);

    string getDni() const;
    void setDni(const string &value);

private:
    int edad;
    string nombre;
    string dni;
};

#endif // PERSONA_H
