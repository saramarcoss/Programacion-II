#ifndef SALVAJES_H
#define SALVAJES_H

#include "caballos.h"

class Salvajes : public Caballos
{
public:
    void printInfo()const;
    Salvajes(string nom,int ed,string sex);
};

#endif // SALVAJES_H
