#include <iostream>

using namespace std;

#include "lista.h"
auto print=[](int n,int index){
    cout<<n<<"\n";
};
int main()
{
    Lista<int> listaEnteros;
    Lista<std::string> ListaStrings;
    listaEnteros.push_back(3);
    listaEnteros.push_back(2);
    listaEnteros.push_back(1);
    listaEnteros.forEach(print);

}
