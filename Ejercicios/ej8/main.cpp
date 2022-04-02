#include <iostream>
#include"figura.h"
#include"trieq.h"
#include"pentregular.h"
#include"cuadrado.h"
using namespace std;

int main()
{
   TriEq triangulo;
   float lado;
   cout<<"introduce el lado del triangulo\n";
   cin>>lado;
   triangulo.setLado(lado);
   triangulo.ComputeArea();
   triangulo.ComputePerim();
   cout<<triangulo.getPerimetro()<<"\n";
   cout<<triangulo.getArea()<<"\n";
   triangulo.ComputeAltura();
   cout<<triangulo.getAltura()<<"\n";

   Cuadrado Micuadrado;
   Micuadrado.setLado(3);
   Micuadrado.ComputeArea();
   Micuadrado.ComputePerim();
   cout<<Micuadrado.getArea()<<"\n";
   cout<<Micuadrado.getPerimetro()<<"\n";

   PentRegular pentagono;
   pentagono.setLado(2);
   pentagono.setApotema(4);
   pentagono.ComputeArea();
   pentagono.ComputePerim();
   cout<<pentagono.getPerimetro()<<"\n";
   cout<<pentagono.getArea()<<"\n";


}
