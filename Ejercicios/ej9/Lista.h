#ifndef LISTA_H
#define LISTA_H
#include<vector>
#include<functional>
using namespace std;
template<class T>
class Lista{
public:
    Lista();
    void push_back(T dato);
    void for_each(function<void(T dato)>action);
protected:
    vector<T>data;
};

 template<class T>
        Lista<T>::Lista()
{

}

template<class T>
 void Lista<T>::push_back(T dato)
{
     data.push_back(dato);
 }

 template<class T>
 void Lista<T>::for_each(function<void (T)> action)
 {
   for(auto elem:data){
       action(elem);
   }
 }
#endif // LISTA_H
