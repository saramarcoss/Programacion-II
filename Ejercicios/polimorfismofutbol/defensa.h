#ifndef DEFENSA_H
#define DEFENSA_H
#include<iostream>
#include "jugador.h"

class Defensa : public Jugador
{
public:
    Defensa();
    void chutar()const;
};

#endif // DEFENSA_H
