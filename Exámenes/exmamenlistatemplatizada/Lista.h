#ifndef LISTA_H
#define LISTA_H
#include<iostream>
#include<functional>
#include<vector>
using namespace std;

template<typename T>
class Lista{
    friend ostream & operator<<(ostream & os,Lista<T> const & l);

public:
    Lista();
    void push_back(T const & t);
    T find(function<bool(T const &elem, int index)> f);
    void forEach(function<void(T const & t,int idx)>action);
    Lista<T>filter(function<bool(T const & t,int idx)>action);
    Lista<T>map(function<T(T const & t,int idx)>action);

    vector<T> getData() const;

protected:
    vector<T>data;
};

 template<typename T>
Lista<T>::Lista()
{

}
template<typename T>
void Lista<T>::push_back(const T &t)
{
    data.push_back(t);
}
template<typename T>
T Lista<T>::find(function<bool (const T &, int)> f)
{
    for (int i; i < data.size(); i++)
    {
        if (f(data.at(i), i))
            return data.at(i);
    }

}


template<typename T>
void Lista<T>::forEach(function<void (const T &, int)> action)
{
    for(int i=0;i<data.size();i++){
        action(data.at(i),i);
    }
}

template<typename T>
Lista<T> Lista<T>::filter(function<bool(const T &, int)> f)
{
    Lista<T>result;
    for(int i=0;i<data.size();i++){
        if (f(data.at(i),i))result.push_back(data.at(i));
    }
}
 template<typename T>
Lista<T> Lista<T>::map(function<T (const T &, int)> f)
{
    Lista<T>result;
    for(int i=0;i<data.size();i++){
        result.push_back(f(data.at(i)));
    }
}
 template<typename T>
 vector<T> Lista<T>::getData() const
{
    return data;
}


#endif // LISTA_H
