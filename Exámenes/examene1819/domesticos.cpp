
#include "domesticos.h"

Domesticos::Domesticos(string nom,int ed,string sex, string nomd)
{
    nombre=nom;
    edad=ed;
    sexo=sex;
    nombredueno=nomd;
}

void Domesticos::printInfo() const
{
    cout<<"caballo llamado: "<<nombre<<"\n";
    cout<<"edad: "<<edad<<"\n";
    cout<<"sexo: "<<sexo<<"\n";
    cout<<"si me acaricias agacho la cabeza\n";
    cout<<"soy domestico y mi dueno se llama: "<<nombredueno<<"\n";
}
