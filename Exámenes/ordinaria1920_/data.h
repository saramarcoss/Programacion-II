#ifndef DATA_H
#define DATA_H
#include<iostream>
using namespace std;

template<typename T>
class Data
{
     template<typename fk> friend std::ostream & operator<<(ostream & os, Data<fk>d);
public:
    Data(string _clave, T _valor);
    string getClave() const;
    void setClave(const string &value);

    T getValor() const;
    void setValor(const T &value);

private:
    string clave;
    T valor;
};
template<typename T>
Data<T>::Data(string _clave, T _valor):clave{_clave}, valor{_valor}
{

}
template<typename T>
string Data<T>::getClave()const{
    return clave;
}
template<typename T>
void Data<T>::setClave(const string &value){
    clave=value;
}
template<typename T>
T Data<T>::getValor()const{
    return valor;
}
template<typename T>
void Data<T>::setValor(const T &value){
    valor=value;
}
template<typename fk>
std::ostream & operator<<(ostream & os, Data<fk>d){
    os<<"clave: "<<d.clave<<" valor: "<<d.valor<<"\n";
    return os;
}
#endif // DATA_H
