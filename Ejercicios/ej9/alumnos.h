#ifndef ALUMNOS_H
#define ALUMNOS_H

#include "persona.h"

class Alumnos : public Persona
{
public:
    Alumnos();
protected:
    int asignaturasreciben;
};

#endif // ALUMNOS_H
