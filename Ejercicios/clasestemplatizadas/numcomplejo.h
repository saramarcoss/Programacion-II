#ifndef NUMCOMPLEJO_H
#define NUMCOMPLEJO_H
#include<iostream>
using namespace std;

class NumComplejo
{
    friend NumComplejo operator+(NumComplejo const & n1, NumComplejo const & n2);
    friend NumComplejo operator*(NumComplejo const & n1, NumComplejo const & n2);
    friend ostream & operator <<(std::ostream & os, NumComplejo const & p);
public:
    NumComplejo();
    NumComplejo(float r, float i);
    float getReal() const;
    void setReal(float value);

    float getImaginaria() const;
    void setImaginaria(float value);

private:
    float real;
    float imaginaria;
};

#endif // NUMCOMPLEJO_H
