#ifndef FECHA_H
#define FECHA_H
#include<iostream>
using namespace std;
struct Fecha{
   int d;
   int m;
   int a;

public:
   int getD() const;
   void setD(int value);
};

inline int Fecha::getD() const
{
    return d;
}

inline void Fecha::setD(int value)
{
    d = value;
}

#endif // FECHA_H
