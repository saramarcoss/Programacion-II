#include <iostream>
#include"persona.h"
#include"alumnos.h"
#include"profesores.h"
#include"Lista.h"
using namespace std;
auto print=[](Persona p){
    cout<<"nombre: "<<p.getNombre()<< " correo: "<<p.getCorreo()<<" num asignaturas: "<<p.getAsignaturas()<<"\n";
};
int main()
{
    Lista<Persona>listaalum;
    Lista<Persona>listaprof;
    Alumnos pepe;
    pepe.setNombre("pepe");
    Alumnos juan;
    Profesores alberto;
    Profesores fonsi;
    listaprof.push_back(alberto);
    listaprof.push_back(fonsi);
    listaalum.push_back(pepe);
    listaalum.push_back(juan);
    listaalum.for_each(print);
    listaprof.for_each(print);
}
