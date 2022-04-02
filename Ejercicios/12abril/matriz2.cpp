#include "matriz2.h"

Matriz2::Matriz2()
{
    data={0,0,0,0};
}
Matriz2::Matriz2(array<array<float,2>,2>const & v){
    data=v;
}
float Matriz2::get(int row, int col) const
{
    if(row < 0 || row > 2 ||col < 0 || col >2 ) throw string{"out of bonds"};
    return data.at(row).at(col);
}

void Matriz2::set(int row, int col, float value)
{
    if(row < 0 || row > 2 || col < 0 || col > 2) throw string {"out of bonds"};
    data.at(row).at(col) = value;
}

float &Matriz2::at(unsigned i, unsigned j)
{
    return data.at(i).at(j);
}
Matriz2 operator+(const Matriz2 & a, const Matriz2 b){
    Matriz2 result;
    for(int row{0}; row<2 ; row++){
        for(int col=0; col < 2; col++){
            result.set(row, col, a.get(row,col) + b.get(row,col));

        }
    }
    return result;

}
Matriz2 operator-(const Matriz2 & a, const Matriz2 b){
    Matriz2 result;
    for(int row{0}; row<2 ; row++){
        for(int col=0; col < 2; col++){
            result.set(row, col, a.get(row,col) - b.get(row,col));

        }
    }
    return result;

}

Matriz2 operator*(Matriz2 &a,Matriz2 &b)
{
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
std::ostream &operator <<(std::ostream &os, Matriz2 &mat)
{

    for(unsigned i{0}; i<2; i++){
        for(unsigned j{0}; j<2; j++){
            os << mat.at(i,j) <<"\t";
        }
        os << "\n";
    }
    return os;
}

std::istream &operator >>(std::istream &is, Matriz2 &mat){
    for(unsigned i{0}; i<2; i++){
        for(unsigned j{0}; j<2; j++){
            is >> mat.at(i,j);
        }
    }
    return is;
}
