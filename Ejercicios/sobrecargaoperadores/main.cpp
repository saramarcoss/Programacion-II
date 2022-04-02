#include <iostream>
#include<ostream>
using namespace std;
class Complex{
  friend Complex operator+(Complex const & c1,Complex const & c2);// hago a la funcion suma su amiga para que pueda acceder a las variables privadas dela clase
  friend Complex operator-(Complex const & c1,Complex const & c2);
  friend Complex operator*(Complex const & c1,Complex const & c2);
  friend ostream & operator<<(ostream & os, Complex const & c);
  friend bool operator==(Complex const & c1, Complex const & c2);
  friend istream & operator>>(istream & is, Complex & c);
  public:
  Complex():r{0},i{0}{}
   Complex(float real,float imaginario):r{real},i{imaginario}{}
  private:
  float r;
  float i;
};
// no son metodos de la clase, son funciones gloables
Complex operator+(Complex const & c1,Complex const & c2){
Complex resultado{c1.r + c2.r, c1.i + c2.i};
return resultado;
}
Complex operator-(Complex const & c1,Complex const & c2){
Complex resultado{c1.r - c2.r, c1.i - c2.i};
return resultado;
}
Complex operator*(Complex const & c1,Complex const & c2){
Complex resultado{c1.r * c2.r - c1.i*c2.i, c1.r * c2.i + c1.i*c2.r};
return resultado;
}
ostream & operator<<(ostream & os, Complex const & c){
os << c.r << "+" <<c.i<<"i";
return os;
}
istream & operator>>(istream & is, Complex & c){//modifico el parametro desde la funcion
is >> c.r ;
is >> c.i ;
return is;
}
bool operator==(Complex const & c1, Complex const & c2){
    return (c1.r == c2.r && c1.i == c2.i);
}
int main() {
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    Complex comp;
    cin>>comp;
}
