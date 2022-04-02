#include <iostream>
#include"matriz2.h"
#include"vector3.h"
using namespace std;

template <typename T>
T suma(T const & a, T const & b){
  return a+b;
}
template <typename T>
T resta(T const & a, T const & b){
  return a-b;
}
template <typename T>
T multiplicacion(T & a, T & b){
  return a*b;
}
template <typename T,typename Y>
Y multiplicacionesc(T & a, T & b){
  return a*b;
}
template <typename T, typename Y>
T print(Y const & a){
    cout<<a<<"\n";
}
template<>
Matriz2 suma(Matriz2 const & m1, Matriz2 const & m2){
    Matriz2 result;
    for(int row{0}; row<2 ; row++){
        for(int col=0; col < 2; col++){
            int val=m1.get(row,col)+m2.get(row,col);
            result.set(row,col,val);
            }
           }
        return result;
}
template<>
Matriz2 resta(Matriz2 const & m1, Matriz2 const & m2){
    Matriz2 result;
    for(int row{0}; row<2 ; row++){
        for(int col=0; col < 2; col++){
            int val=m1.get(row,col)-m2.get(row,col);
            result.set(row,col,val);
            }
           }
        return result;
}
template<>
Matriz2 multiplicacion(Matriz2 & a, Matriz2  & b){
    Matriz2 result;
    for(unsigned i{0}; i<2; i++){
        for(unsigned j{0}; j<2; j++){
            float aux{0};
            for(unsigned k{0}; k<2; k++){
                aux += a.at(i,k)*b.at(k,j);
            }
            result.at(i,j) = aux;
        }
    }
    return result;
}
template<>
Vector3 suma(Vector3 const & c1, Vector3 const & c2){
    Vector3 result{c1.getX() + c2.getX(), c1.getY() + c2.getY(), c1.getZ()+ c2.getZ()};
    return result;
}
template<>
Vector3 resta(Vector3 const & c1, Vector3 const & c2){
    Vector3 result{c1.getX() - c2.getX(), c1.getY() - c2.getY(), c1.getZ() - c2.getZ()};
    return result;
}
template<>
Vector3 multiplicacion(Vector3 & v1, Vector3 & v2){
    Vector3 mult{(v1.getY()*v2.getZ())-(v2.getY()*v1.getZ()),(v2.getX()*v1.getZ())-(v1.getX()*v2.getZ()),(v1.getX()*v2.getY())-(v1.getY()*v2.getX())};
    return mult;
}
template<>
float multiplicacionesc(Vector3 & v1, Vector3 & v2){
    float result=v1.getX()*v2.getX()+v1.getY()*v2.getY()+v1.getZ()*v2.getZ();
    return result;
}
int main()
{
    Vector3 v1,v2;
    cout<<"Introduce el vector1: \n";
    cin>>v1;
    cout<<"Introduce el vector2: \n";
    cin>>v2;
    auto s=v1+v2;
    cout<<"La suma es: "<<s<<"\n";
    cout<<suma<Vector3>(v1,v2)<<"\n";
    auto m=v1*v2;
    cout<<"la multiplicacion es: "<<m<<"\n";
    cout<<"la multiplicacion es: "<<multiplicacion(v1,v2)<<"\n";
    cout<<"el producto escalar es: "<<multiplicacionesc<Vector3,float>(v1,v2)<<"\n";
    float r=multiplicacionesc<Vector3,float>(v1,v2);
    print<void,float>(r);
    cout<<"Introduce la matriz 1:\n";
    Matriz2 m1;
    cin>>m1;
    cout<<"Introduce la matriz 2: \n";
    Matriz2 m2;
    cin>>m2;
    cout<<"La multipliacion es: \n";
    auto c=multiplicacion(m1,m2);
    cout<<c<<"\n";

}
