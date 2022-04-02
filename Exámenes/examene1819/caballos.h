#ifndef CABALLOS_H
#define CABALLOS_H
#include<iostream>
using namespace std;

class Caballos
{
public:
    Caballos();
    void virtual printInfo()const=0;
protected:
    string nombre;
    int edad;
    string sexo;
};

#endif // CABALLOS_H
