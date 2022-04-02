#ifndef AGENDA_H
#define AGENDA_H
#include"contacto.h"
#include"Fecha.h"
#include<functional>
#include<vector>
class Agenda
{
public:
    Agenda();
    void add(Contacto const & c);
    void erase(int p);
    Contacto findNombreAp(string nombre, string ap);
    vector<Contacto>filter(FechaN const & f);

    vector<Contacto> getData() const;

protected:
    vector<Contacto>data;
};


#endif // AGENDA_H
