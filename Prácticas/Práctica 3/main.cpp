#include <iostream>
#include "tiempo.h"



using namespace std;

int main()
{
    try {

        Tiempo a;
        Tiempo b;

        cout << "Introduce tiempo 1 en horas, minutos y segundos en ese orden: ";
        cin >> a;

        a.setHoras(a.getHoras());
        a.setMinutos(a.getMinutos());
        a.setSegundos(a.getSegundos());



        cout << "Introduce tiempo 2 en horas, minutos y segundos en ese orden: ";
        cin >> b;

        b.setHoras(b.getHoras());
        b.setMinutos(b.getMinutos());
        b.setSegundos(b.getSegundos());




        cout << "La suma de los tiempos es: " << a+b << "\n";
        cout << "La resta de los tiempos es: " << a-b << "\n";
        if(a == b){
            cout << "Son iguales" << "\n";
        }else{
            cout << "Son distintos" << "\n";
        }

    }catch(string msg){
        cout << msg << "\n";
    }


}
