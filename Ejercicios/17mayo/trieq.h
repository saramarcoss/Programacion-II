#ifndef TRIEQ_H
#define TRIEQ_H
#include<iostream>
#include "figura.h"

class Trieq : public Figura
{
public:
    Trieq(int l);
    float getPerimetro()const;
    float getArea()const;
    void PrintInfo();
protected:
    float lado;
};

#endif // TRIEQ_H
