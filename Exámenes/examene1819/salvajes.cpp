#include "salvajes.h"

void Salvajes::printInfo() const
{
  cout<<"caballo llamado: "<<nombre<<"\n";
  cout<<"edad: "<<edad<<"\n";
  cout<<"sexo: "<<sexo<<"\n";
  cout<<"si me acaricias me encabrito\n";
  cout<<"soy salvaje y no tengo dueno\n";
}

Salvajes::Salvajes(string nom,int ed,string sex)
{
    nombre=nom;
    edad=ed;
    sexo=sex;
}
