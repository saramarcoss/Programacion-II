#ifndef PAIR_H
#define PAIR_H
#include<iostream>
template<typename T,typename Y>
class Pair{
   template<typename kT,typename kY>
    friend std::ostream &operator<<(std::ostream & os, Pair<kT,kY>const & p);
public:
    Pair(T const & t, Y const & y);
    T clave();
    Y valor();
private:
   T _clave;
   Y _valor;
};

template<typename T, typename Y>
Pair<T, Y>::Pair(const T &t, const Y &y):_clave{t},_valor{y}
{

}

template<typename T, typename Y>
T Pair<T, Y>::clave()
{
    return _clave;
}

template<typename T, typename Y>
Y Pair<T, Y>::valor()
{
    return _valor;
}
template<typename T, typename Y>
std::ostream &operator<<(std::ostream & os, Pair<T,Y>const & p){
    os<<"clave: "<<p._clave<<" valor: "<<p._valor<<"\n";
    return os;
}

#endif // PAIR_H
