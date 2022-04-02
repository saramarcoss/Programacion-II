#include <iostream>
#include"matrix.h"
#include<memory>
#include<ostream>
using namespace std;

shared_ptr<Matrix>add(const shared_ptr<Matrix>p1, const shared_ptr<Matrix>p2){
    shared_ptr<Matrix>result=make_shared<Matrix>();
    for(int i{0}; i<3; i++){
        for(int j{0}; j<3; j++){
             int val=p1->get(i,j) + p2->get(i,j);
             result->set(i,j,val);
        }
    }
    return result;
}


int main(){
    try{
    int num;
    array<int,9>a1;
    for(int i{0}; i<9; i++){
         cout << "Introduce la matriz1, por filas:\n";
         cin>>num;
          a1.at(i)=num;
         }
    array<int,9>a2;
    for(int i{0}; i<9; i++){
         cout << "Introduce la matriz2, por filas:\n";
         cin>>num;
          a2.at(i)=num;
         }
    shared_ptr<Matrix> mat1=make_shared<Matrix>(Matrix{a1});
    shared_ptr<Matrix> mat2=make_shared<Matrix>(Matrix{a2});
    shared_ptr<Matrix>suma=add(mat1,mat2);
    cout<<"La matriz suma es: \n";
    suma->print();
    cout<<*suma;
    cout<<"El determinante de la suma es: \n";
    cout<<suma->determinant();
    }catch(string msg){
        cout << msg << endl;
        return 1;
    }
}
