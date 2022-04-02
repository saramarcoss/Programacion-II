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

    string getCorreo() const;
    void setCorreo(const string &value);

    int getAsignaturas() const;
    void setAsignaturas(int value);

protected:
    string nombre;
    string correo;
    int asignaturas;
};

#endif // PERSONA_H
