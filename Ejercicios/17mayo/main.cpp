#include <iostream>
#include<vector>
#include<memory>
#include"figura.h"
#include"circulo.h"
#include"cuadrado.h"
#include"pentregular.h"
#include"trieq.h"
#include"elipse.h"
using namespace std;

int main()
{
    Cuadrado mic(6);
    cout<<mic.getArea()<<"\n";

    vector<shared_ptr<Figura>>fig;

    float radio, lado, semiejmayor,semiejmenor,apotema;
    int opcion=9;

    while(opcion != 0){
        cout << "Que quieres hacer?" << endl;
        cout << "1. Nuevo Circulo " << endl;
        cout << "2. Nuevo Cuadrado " << endl;
        cout << "3. Elipse " << endl;
        cout << "4. Pentagono regular" << endl;
        cout << "5. Triangulo Equilatero " << endl;
        cout << "6. Imprimir lista de figuras con areas y perimetros " << endl;
        cout << "0. Salir " << endl;
        cin >> opcion;

    if(opcion == 1){
        cout << "Radio: "; cin >> radio;
        shared_ptr<Circulo> circulo1 = make_shared<Circulo>(radio);
        fig.push_back(circulo1);
    }
    if(opcion == 2){
        cout << "Lado: "; cin >> lado;
        shared_ptr<Cuadrado> cuadrado1 = make_shared<Cuadrado>(lado);
        fig.push_back(cuadrado1);
    }
    if(opcion == 3){
        cout << "semieje mayor: "; cin >> semiejmayor;
        cout << "semieje menor: "; cin >> semiejmenor;
        shared_ptr<Elipse> elipse1 = make_shared<Elipse>(semiejmayor,semiejmenor);
        fig.push_back(elipse1);
    }
    if(opcion == 4){
        cout << "apotema: "; cin >> apotema;
        cout << "lado: "; cin >> lado;
        shared_ptr<PentRegular> pentagono1 = make_shared<PentRegular>(apotema,lado);
        fig.push_back(pentagono1);
    }
    if(opcion == 5){
        cout << "lado: "; cin >> lado;
        shared_ptr<Trieq> triangulo1 = make_shared<Trieq>(lado);
        fig.push_back(triangulo1);
    }
    if(opcion == 6){
        cout << " =================================================== " << endl << endl;
        cout << "Lista de Areas y Perimetros: " << endl;
        for(auto elem:fig){
           elem->PrintInfo();
            cout<<"area: "<< elem->getArea()<<"\n";
            cout<<"perimetro: "<< elem->getPerimetro()<<"\n";
            cout << " --------------------------------------------------- " << endl << endl;
        }
        cout << " =================================================== " << endl << endl;
    }

   }
}
