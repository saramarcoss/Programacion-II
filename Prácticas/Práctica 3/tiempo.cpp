#include "tiempo.h"

Tiempo::Tiempo():horas{0}, minutos{0}, segundos{0}
{

}

Tiempo::Tiempo(const Tiempo &other)
{
    horas = other.horas;
    minutos = other.minutos;
    segundos = other.segundos;
}

Tiempo::Tiempo(int _horas,  int _minutos,int _segundos)
{
    horas = _horas;
    minutos = _minutos;
    segundos = _segundos;
}

int Tiempo::getHoras() const
{
    return horas;
}

void Tiempo::setHoras(int value)
{
    horas = value;
}

unsigned short int Tiempo::getMinutos() const
{
    return minutos;
}

void Tiempo::setMinutos(unsigned short int value)
{
    if (value > 59){
              cout << "There must be a mistake, your minutes cannot be " << value
                   << " . I'll set your minutes to 0"
                   << endl;
              minutos = 0;
          }else{
              minutos = value;
          }
}



unsigned short int Tiempo::getSegundos() const
{
    return segundos;
}

void Tiempo::setSegundos(unsigned short int value)
{
    if (value > 59){
              cout << "There must be a mistake, your seconds cannot be " << value
                   << " . I'll set your seconds to 0"
                   << endl;
              segundos = 0;
          }else{
              segundos = value;
    }
}



int Tiempo::Time()
{
    minutos = horas * 60;
    segundos = minutos * 60;
    return segundos;
}
istream & operator >> (istream & is, Tiempo & c){
    is >> c.horas;
    is >> c.minutos;
    is >> c.segundos;
    return is;
}
ostream & operator << (ostream & os, Tiempo c){
    os << c.horas << " hora " << c.minutos << " minutos" << c.segundos << " segundos";
    return os;
}
bool  operator== (Tiempo const & c1, Tiempo  const  & c2){
    return(c1.horas == c2.horas && c1.minutos == c2.minutos && c1.segundos == c2.segundos);
}
Tiempo operator+ (Tiempo const & c1, Tiempo const & c2){
    Tiempo result{c1.horas + c2.horas, c1.minutos + c2.minutos, c1.segundos + c2.segundos};
    return result;
}
Tiempo operator- (Tiempo const & c1, Tiempo const & c2){
    Tiempo result{c1.horas - c2.horas, c1.minutos - c2.minutos, c1.segundos - c2.segundos};
    return result;
}
