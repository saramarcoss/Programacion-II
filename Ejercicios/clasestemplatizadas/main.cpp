#include <iostream>
#include"numcomplejo.h"
using namespace std;

template <typename T>
T suma(T const & a, T const & b){
  return a+b;
}
NumComplejo operator+(NumComplejo const & n1, NumComplejo const & n2){
    NumComplejo result;
    result.real=n1.real+n2.real;
    result.imaginaria=n1.imaginaria+n2.imaginaria;
    return result;
}
template<>  //lo particularizo
NumComplejo suma(NumComplejo const & n1, NumComplejo const & n2){
    float real=n1.getReal()+n2.getReal();
    float imaginaria=n1.getImaginaria()+n2.getImaginaria();
    return NumComplejo{real,imaginaria};
}

template <typename T>
T multiplica(T const & a, T const & b){
  return a*b;
}
NumComplejo operator*(NumComplejo const & c1, NumComplejo const & c2){
    NumComplejo resultado{c1.real * c2.real - c1.imaginaria*c2.imaginaria, c1.real * c2.imaginaria + c1.imaginaria*c2.real};
    return resultado;
    }
template<> //lo particularizo
NumComplejo multiplica(NumComplejo const & c1, NumComplejo const & c2){
float real=c1.getReal() * c2.getReal() - c1.getImaginaria()*c2.getImaginaria();
float imaginaria=c1.getReal() * c2.getImaginaria() + c1.getImaginaria()*c2.getReal();
return NumComplejo{real,imaginaria};
}

std::ostream & operator <<(std::ostream & os, NumComplejo const & p){
  os << "real: " << p.real << "\n";
  os << "imaginaria: " << p.imaginaria << "\n";
  return os;
}

int main() {

  cout<<suma<int>(1,2)<<"\n";
  cout<<suma<string>("hola"," sara")<<"\n";
  cout<<suma<NumComplejo>({2,1},{2,2})<<"\n";
  cout<<multiplica<NumComplejo>({2,1},{2,2})<<"\n";
}
