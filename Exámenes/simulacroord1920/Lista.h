#ifndef LISTA_H
#define LISTA_H
#include<iostream>
#include<vector>
#include<functional>
using namespace std;
template<typename T>
class Lista{

   public:
   Lista(){};
   ~Lista(){};
    void push_back(T const & t);
    void push_front(T const & t);
    void insert(T const & t, int idx);
    void erase(int idx);
    int findIdx(function<bool(T)>const &action);
    Lista<T> filter(function<bool(T)>const &action);
    vector<T> getData() const;
    void setData(const vector<T> &value);
    T at(int pos);
protected:
    vector<T>data;
};


template<typename T>
void Lista<T>::push_back(const T &t)
{
    data.push_back(t);
}
template<typename T>
void Lista<T>::push_front(const T &t)
{
    data.insert(data.begin(),t);
}

template<typename T>
void Lista<T>::insert(const T &t, int idx)
{
   data.insert(data.begin()+idx,t);
}

template<typename T>
void Lista<T>::erase(int idx)
{
    data.erase(data.begin()+idx);
}

template<typename T>
int Lista<T>::findIdx(function<bool(T)>const &action)
{
    for(int i=0;i<data.size();i++){
        if(action(data.at(i)))return i;
    }
}

template<typename T>
Lista<T> Lista<T>::filter(function<bool(T)>const &f)
{
 Lista<T>result;
 for(auto const & elem:data){
     if(f(elem))result.push_back(elem);
 }
 return result;
}
template<typename T>
vector<T> Lista<T>::getData() const
{
    return data;
}
template<typename T>
void Lista<T>::setData(const vector<T> &value)
{
    data = value;
}

 template<typename T>
T Lista<T>::at(int pos)
{
 return data.at(pos);
}
template<typename T>
ostream & operator<<(ostream &os, Lista<T> p){
    auto data = p.getData();
    for(auto elem: data){
        os << elem << "  --  ";
    }
    return os;
}
#endif // LISTA_H
