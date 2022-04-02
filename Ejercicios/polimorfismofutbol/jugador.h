#ifndef JUGADOR_H
#define JUGADOR_H


class Jugador
{
public:
    Jugador();
    virtual ~Jugador();
    virtual void chutar()const=0;

};

#endif // JUGADOR_H
