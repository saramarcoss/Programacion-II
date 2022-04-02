#include <iostream>
#include"Pair.h"
#include"Data.h"
#include"DB.h"
using namespace std;

int main()
{
    Pair<string,string>nombre{"nombre","Julian"};
    Pair<string,string>apellido{"apellido","Santurche"};
    Pair<string,string>telefono{"telefono","32323232"};

    Data<string,string>persona1;
    persona1.insert(nombre);
    persona1.insert(apellido);
    persona1.insert(telefono);

    Pair<string,string>nombre2{"nombre","Alberto"};
    Pair<string,string>apellido2{"apellido","Valero"};
    Pair<string,string>telefono2{"telefono","32323232"};

    Data<string,string>persona2;
    persona2.insert(nombre2);
    persona2.insert(apellido2);
    persona2.insert(telefono2);

    DB<string,string>database;
    database.insert(persona1);
    database.insert(persona2);

    auto print=[](Data<string,string>d){
        auto parejas=d.getData();
        for(auto elem:parejas){
            cout<<elem<<"\n";
        }
    };
    auto f_busq=[](Data<string,string>d){
        auto parejas=d.getData();
        for(auto elem:parejas){
            if(elem.clave()=="nombre" && elem.valor()=="Alberto")return true;
            }
        return false;
    };
    auto result=database.find(f_busq);
    cout<<result<<"\n";
    auto filtered_result=database.filter(f_busq);
    cout<<filtered_result<<"\n";
    database.forEach(print);
}
