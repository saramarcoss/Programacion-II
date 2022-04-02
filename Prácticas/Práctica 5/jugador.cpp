#include"jugador.h"
Jugador::Jugador(){}

bool Jugador::getPlantarse() const
{
    return plantarse;
}

void Jugador::setPlantarse(bool value)
{
    plantarse = value;
}

int Jugador::getApuesta() const
{
    return apuesta;
}

void Jugador::setApuesta(int value)
{
    apuesta = value;
}

int Jugador::getPuntos() const
{
    return puntos;
}

void Jugador::setPuntos(int value)
{
    puntos = value;
}
