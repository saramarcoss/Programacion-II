#ifndef TRIEQ_H
#define TRIEQ_H

#include "figura.h"

class TriEq : public Figura
{
public:
    TriEq();
    void ComputeArea();
    void ComputePerim();
    float getLado() const;
    void setLado(float value);

    float getAltura() const;
    void setAltura(float value);
    void ComputeAltura();

protected:
    float lado;
    float altura;
};

#endif // TRIEQ_H
