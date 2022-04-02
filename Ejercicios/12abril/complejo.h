#ifndef COMPLEJO_H
#define COMPLEJO_H
#include<vector>
using namespace std;
class Complejo
{
    friend Complejo operator+(const Complejo & a, const Complejo b);
    friend Complejo operator-(const Complejo & a, const Complejo b);
    friend Complejo operator*(const Complejo & a, const Complejo b);
public:
    Complejo();
    Complejo (vector<Complejo>v);
    float getR() const;
    void setR(float value);

    float getI() const;
    void setI(float value);

private:
    vector<Complejo>v;
    float r;
    float i;
};

#endif // COMPLEJO_H
