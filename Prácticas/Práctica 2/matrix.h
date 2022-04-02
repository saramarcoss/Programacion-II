#ifndef MATRIX_H
#define MATRIX_H
#include<array>
using namespace std;
class Matrix
{
friend ostream & operator<<(ostream & os, Matrix const & c);
friend istream & operator>>(istream & is, Matrix & c);
public:
  Matrix(array<int, 9> const & v);
  Matrix();

  int get(int row,int col)const;
  void set(int row, int col, int value);
  void print() const;
  int determinant()const;
  private:
 array<int, 9> data;
};
#endif // MATRIX_H
