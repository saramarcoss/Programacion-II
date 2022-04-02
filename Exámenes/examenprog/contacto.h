#ifndef CONTACTO_H
#define CONTACTO_H
#include<iostream>
using namespace std;
struct FechaN{
    int d,m,a;


public:
    int getD() const;
    void setD(int value);
    int getM() const;
    void setM(int value);
    int getA() const;
    void setA(int value);
};
class Contacto
{
    friend ostream & operator<<(ostream & os, Contacto const & c);
public:
   Contacto(){};
   Contacto(string n, string pa, string t, string c, int di, int me, int an){
       nombre=n;
       primerapellido=pa;
       telefono=t;
       correo=c;
       f.d=di;
       f.m=me;
       f.a=an;
   };
    string getNombre() const;
    void setNombre(const string &value);

    string getPrimerapellido() const;
    void setPrimerapellido(const string &value);

    string getTelefono() const;
    void setTelefono(const string &value);

    string getCorreo() const;
    void setCorreo(const string &value);



public:

    string nombre;
    string primerapellido;
    string telefono;
    string correo;
    FechaN f;


};


#endif // CONTACTO_H
