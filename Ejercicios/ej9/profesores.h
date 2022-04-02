#ifndef PROFESORES_H
#define PROFESORES_H

#include "persona.h"

class Profesores : public Persona
{
public:
    Profesores();
protected:
    int asignaturasdan;
};

#endif // PROFESORES_H
