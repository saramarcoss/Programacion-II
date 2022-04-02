#ifndef LISTADO_H
#define LISTADO_H
#include<iostream>
#include<memory>
#include<functional>
#include<vector>
#include"data.h"
#include"persona.h"
template<typename T>
class Listado{
public:
    Listado();
    void inserta(std::shared_ptr<Data<T> > a);
    void elimina(std::string const& clave);
    std::shared_ptr<Data<T> > find(const std::function<bool(std::shared_ptr<Data<T> >)> &op)const;
    std::vector<std::shared_ptr<Data<T> > > getDatos() const;
private:
    vector<shared_ptr<Data<T>>>datos;
};

template<typename T>
Listado<T>::Listado()
{

}

template<typename T>
void Listado<T>::inserta(std::shared_ptr<Data<T> > a)
{
    for(auto elem:datos){
        if(elem->getClave()==a->getClave()) throw string{"ya hay una persona con este identificador"};
}
    datos.push_back(a);
}

template<typename T>
void Listado<T>::elimina(const string &clave)
{
for(int i=0;i<datos.size();i++){
    if(datos.at(i)->getClave() == clave){
               datos.erase(datos.begin()+i);
               return;
           }
       }

       throw std::string{"No existe la persona que quieres borrar"};
   }

template<typename T>
std::shared_ptr<Data<T> > Listado<T>::find(const std::function<bool (std::shared_ptr<Data<T> >)> &op) const
{
    for(auto elem:datos){
        if(op(elem)){
            return elem;
    }else{
        return nullptr;
    }
}
}

template<typename T>
std::vector<std::shared_ptr<Data<T> > > Listado<T>::getDatos() const
{
    return datos;
}
template<typename T>
std::ostream & operator<<(ostream & os, Listado<T> l){
    for(auto elem:l.getDatos()){
        os<<*elem<<"\n";
}
    return os;
}
template<typename T>
Listado<T> & operator+(Listado<T>t1, Listado<T>t2){
    Listado<T>result;
    result.inserta(t1);
    result.inserta(t2);
    return result;
}
#endif // LISTADO_H
