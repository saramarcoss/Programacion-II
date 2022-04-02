#ifndef JUGADOR_H
#define JUGADOR_H
#include"bolsa.h"

class Jugador
{
public:
       Jugador();
       bool getPlantarse() const;
       void setPlantarse(bool value);

       int getApuesta() const;
       void setApuesta(int value);

       int getPuntos() const;
       void setPuntos(int value);

public:
       int apuesta;
       int puntos;
       bool plantarse = false;

};
#endif // JUGADOR_H
