#ifndef PENTREGULAR_H
#define PENTREGULAR_H

#include "figura.h"

class PentRegular : public Figura
{
public:
    PentRegular();
    float getApotema() const;
    void setApotema(float value);

    float getLado() const;
    void setLado(float value);

    void ComputeArea();
    void ComputePerim();
protected:
    float apotema;
    float lado;
};

#endif // PENTREGULAR_H
