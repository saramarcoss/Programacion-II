#include <iostream>
#include<math.h>
using namespace std;
struct Complejo{
    float real;
    float imaginario;
};
template<typename T, typename MOD>
class Vector3{
public:
    Vector3(T _elem1,T _elem2, T _elem3):elem1{_elem1},elem2{_elem2},elem3{_elem3}{}

   T getElem(int i)const;
   MOD module()const;
   T moduloc()const;

private:
   T elem1, elem2, elem3;
};
template<typename T,typename MOD>
T Vector3<T,MOD>::getElem(int i)const{
    if(i==1)return elem1;
    if(i==2)return elem2;
    if(i==3)return elem3;
    throw string{"out of bonds"};
}
template<typename T,typename MOD>
MOD Vector3<T,MOD>::module()const{
    float result=sqrt(elem1*elem1+elem2*elem2+elem3*elem3);
    return result;
}


int main()
{

    Vector3<int,float>a{1,2,3};
    cout<<"el modulo es: "<<a.module()<<"\n";
    //Vector3<Complejo,Complejo>b;
    return 0;

}

