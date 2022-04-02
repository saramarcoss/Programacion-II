#ifndef MATRIZ2_H
#define MATRIZ2_H
#include<array>
#include<iostream>
using namespace std;

class Matriz2
{
    friend std::ostream &operator <<(std::ostream &os, Matriz2 &mat);
    friend std::istream &operator >>(std::istream &is, Matriz2 &mat);
    friend Matriz2 operator+(const Matriz2 & a, const Matriz2 b);
    friend Matriz2 operator-(const Matriz2 & a, const Matriz2 b);
    friend Matriz2 operator*(const Matriz2 & a, const Matriz2 b);
public:
    Matriz2();
    Matriz2(array<array<float,2>,2>const & v);
    float get(int row, int col) const;
     void set(int row, int col, float value);
     float & at(unsigned i, unsigned j);
private:
    array<array<float, 2>, 2> data;
};

#endif // MATRIZ2_H
