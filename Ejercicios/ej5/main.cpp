#include <iostream>
#include"matrix.h"
using namespace std;
template<typename T>
T suma(T  & n1, T & n2){
  return n1+n2;
}
template<typename T>
T resta(T  & n1, T & n2){
  return n1+n2;
}
template<typename T>
T multiplicacion(T & n1, T & n2){
  return n1+n2;
}
template<>// lo particularizo
Matrix suma(Matrix & a, Matrix  & b){
    if(a.getCols() != b.getCols() || a.getRows() != b.getRows()) throw std::string{"Los tamaños no coinciden"};
    Matrix result(int(a.getRows()), int(a.getCols()));

    for(unsigned i{0}; i<a.getRows(); i++){
        for(unsigned j{0}; j<a.getCols(); j++){
            result.at(i,j) = a.at(i,j) + b.at(i,j);
        }
    }
    return result;
}
template<>// lo particularizo
Matrix resta(Matrix & a, Matrix  & b){
    if(a.getCols() != b.getCols() || a.getRows() != b.getRows()) throw std::string{"Los tamaños no coinciden"};
    Matrix result(int(a.getRows()), int(a.getCols()));

    for(unsigned i{0}; i<a.getRows(); i++){
        for(unsigned j{0}; j<a.getCols(); j++){
            result.at(i,j) = a.at(i,j) - b.at(i,j);
        }
    }
    return result;
}
template<>//lo particularizo
Matrix multiplicacion(Matrix & a, Matrix  & b){
    if(a.getCols() != b.getRows()) throw std::string{"Tamaños no compatibles"};
    Matrix result(int(a.getRows()), int(b.getCols()));

    for(unsigned i{0}; i<result.getRows(); i++){
        for(unsigned j{0}; j<result.getCols(); j++){
            float aux{0};
            for(unsigned k{0}; k<a.getCols(); k++){
                aux += a.at(i,k)*b.at(k,j);
            }
            result.at(i,j) = aux;
        }
    }
    return result;
}
int main()
{
    try{
        std::cout << "Introduce el numero de filas y columnas de la matriz 1: ";
        int fil, cols;
        std::cin >> fil >> cols;
        Matrix mat1{fil, cols};
        std::cout << "Introduce la matriz, numero a numero, por filas:\n";
        std::cin >> mat1;

        std::cout << "Introduce el numero de filas y columnas de la matriz 2: ";

        std::cin >> fil >> cols;
        Matrix mat2{fil, cols};
        std::cout << "Introduce la matriz, numero a numero, por filas:\n";
        std::cin >> mat2;

        Matrix s = suma(mat1,mat2);
        Matrix r = resta(mat1,mat2);
        Matrix m = multiplicacion(mat1, mat2);
        std::cout << "Suma\n" << s << "\n\n";
        std::cout << "Resta\n" << r << "\n\n";
        std::cout << "Multiplicacion\n" << m << "\n\n";

    }catch(std::string e){
        std::cout << e << "\n";
    }

    return 0;
}
