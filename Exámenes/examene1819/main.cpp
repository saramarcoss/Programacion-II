#include <iostream>
#include<caballos.h>
#include<domesticos.h>
#include<salvajes.h>
#include<vector>
#include<memory>
using namespace std;

int main()
{
    vector<shared_ptr<Caballos>>v;
    string nombre;
    int edad;
    string sexo;
    string nomdue;
    int opcion=9;
    while(opcion != 0){
     cout << "Que quieres hacer?" << endl;
     cout << "1. Nuevo Caballo Salvaje " << endl;
     cout << "2. Nuevo Caballo Domestico " << endl;
     cout << "3. Imprimir lista de caballos " << endl;
     cout << "0. Salir " << endl;
     cin >> opcion;


    if(opcion==2){
     cout<<"Introduce el nombre del caballo\n";
     cin>>nombre;
     cout<<"introduce la edad\n";
     cin>>edad;
     cout<<"introduce el sexo del caballo\n";
     cin>>sexo;
     cout<<"introduce el nombre el dueno\n";
     cin>>nomdue;
     auto cd=make_shared<Domesticos>(Domesticos{nombre,edad,sexo,nomdue});
     v.push_back(cd);
    }
    if(opcion==1){
     cout<<"Introduce el nombre del caballo\n";
     cin>>nombre;
     cout<<"introduce la edad\n";
     cin>>edad;
     cout<<"introduce el sexo del caballo\n";
     cin>>sexo;
     auto cs=make_shared<Salvajes>(Salvajes{nombre,edad,sexo});
     v.push_back(cs);
    }
    if(opcion==3){
        for(auto elem:v){
           elem->printInfo();
        }
    }
}
}
