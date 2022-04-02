#ifndef DOMESTICOS_H
#define DOMESTICOS_H

#include "caballos.h"

class Domesticos : public Caballos
{
public:
    Domesticos(string nom,int ed,string sex, string nomd);
    void printInfo()const;
protected:
    string nombredueno;
};

#endif // DOMESTICOS_H
