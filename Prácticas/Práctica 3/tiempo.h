#ifndef TIEMPO_H
#define TIEMPO_H
#include <iostream>
#include<string>
using namespace std;
#include <ostream>
#include <istream>

class Tiempo
{

      friend ostream & operator << (ostream & os, Tiempo c);
      friend istream & operator >> (istream & is, Tiempo & c);
      friend bool  operator== (Tiempo const & c1, Tiempo  const  & c2);
      friend Tiempo operator+ (Tiempo const & c1, Tiempo const & c2);
      friend Tiempo operator- (Tiempo const & c1, Tiempo const & c2);

public:
    Tiempo();
    Tiempo(Tiempo const & other);
    Tiempo(int _horas,  int _minutos,  int _segundos);

    int getHoras() const;
    void setHoras( int value);

    unsigned short int getMinutos() const;
    void setMinutos(unsigned short int value);

    unsigned short int getSegundos() const;
    void setSegundos(unsigned short int value);

    int Time();



private:
    int horas;
    int minutos;
    int segundos;
};

#endif // TIEMPO_H
