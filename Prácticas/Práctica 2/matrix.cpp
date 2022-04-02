#include "matrix.h"
#include<array>
#include<iostream>
#include<ostream>
using namespace std;
Matrix::Matrix(const array<int,9> &v)
{
    data=v;
}

Matrix::Matrix()
{
    data={0,0,0,0,0,0,0,0,0};
}

int Matrix::get(int row, int col)const
{
    if(row<0||col<0||row>2||col>2)throw string{"Fuera de los limites de la matriz"};
    int elem = row*3 + col;
    return data.at(elem);
}

void Matrix::set(int row, int col, int value)
{
    if(row<0||col<0||row>2||col>2||value<0)throw string{"Fuera de los limites de la matriz"};
    int elem = row*3 + col;
    data.at(elem)=value;
}

void Matrix::print() const
{
    cout << data.at(0) << "\t" << data.at(1) << "\t"<<data.at(2)<<"\n";
    cout << data.at(3) << "\t" << data.at(4) << "\t"<<data.at(5)<<"\n";
    cout << data.at(6) << "\t" << data.at(7) << "\t"<<data.at(8)<<"\n";
}

int Matrix::determinant() const
{
    int result=data.at(0)*data.at(4)*data.at(8)+data.at(1)*data.at(5)*data.at(6)+data.at(3)*data.at(7)*data.at(2)-(data.at(2)*data.at(4)*data.at(6)+data.at(0)*data.at(5)*data.at(7)+data.at(3)*data.at(1)*data.at(8));
    return result;
}
Matrix operator+(Matrix const & m1, Matrix const & m2){//sobrecarga operador +(sin punteros)
    Matrix resultado;
    for(int i{0}; i<3; i++){
        for(int j{0}; j<3; j++){
            int val=m1.get(i,j)+m2.get(i,j);
            resultado.set(i,j,val);
        }
    }
        return resultado;
}
istream & operator>>(istream & is, Matrix & a){//modifico el parametro desde la funcion
    for(int i{0}; i<9; i++){
            is>>a.data.at(i);
        }
return is;
}
ostream & operator<<(ostream & os, Matrix const & m){
    for(int i{0}; i<9; i++){
        os<<m.data.at(i);
    }
return os;
}
