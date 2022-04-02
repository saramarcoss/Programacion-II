#include <iostream>
#include<vector>
#include<memory>
#include<functional>
#include"persona.h"
using namespace std;
shared_ptr<Persona>find(vector<shared_ptr<Persona>>v,function<bool(shared_ptr<Persona>)>f){
    shared_ptr<Persona>result=make_shared<Persona>(Persona{});
    for(auto elem:v){
        if(f(elem)) return elem;
    }
    return nullptr;
}

int main()
{
    vector<shared_ptr<Persona>>v;
    shared_ptr<Persona>p1=make_shared<Persona>(Persona{});
    for(int i=0;i<5;i++){
        cout<<"Introduce un nombre:\n";
        string nombre;
        cin>>nombre;
        p1->setNombre(nombre);
        cout<<"Introduce ano de nacimiento\n";
        int anonacimiento;cin>>anonacimiento;
        p1->setBirthyear(anonacimiento);
        cout<<"Introduce el DNI\n";
        string dni;cin>>dni;
        p1->setDni(dni);
        cout<<"Introduce un telefono:\n";
        string telefono;
        cin>>telefono;
        p1->setTelefono(telefono);
        v.push_back(p1);
    }
}

