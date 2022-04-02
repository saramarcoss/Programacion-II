#include "vector3.h"
#include<iostream>
using namespace std;
Vector3::Vector3():x{0}, y{0}, z{0}
{

}

Vector3::Vector3(float xx, float yy, float zz):x{xx}, y{yy}, z{zz}
{

}

float Vector3::getX() const
{
    return x;
}

float Vector3::getY() const
{
    return y;
}

void Vector3::setY(float value)
{
    y = value;
}

float Vector3::getZ() const
{
    return z;
}

void Vector3::setZ(float value)
{
    z = value;
}

void Vector3::setX(float value)
{
    x = value;
}
Vector3 operator+(Vector3 const & v1, Vector3 const & v2){
    Vector3 result{v1.x+v2.x,v1.y+v2.y,v1.z+v2.z};
    return result;
}
Vector3 operator-(Vector3 const & v1, Vector3 const & v2){
    Vector3 result{v1.x-v2.x,v1.y-v2.y,v1.z-v2.z};
    return result;
}
Vector3 operator*(Vector3 const & v1, Vector3 const & v2){
    Vector3 mult{(v1.y*v2.z)-(v2.y*v1.z),(v2.x*v1.z)-(v1.x*v2.z),(v1.x*v2.y)-(v1.y*v2.x)};
    return mult;
}
ostream & operator<<(ostream & os, Vector3 const & v){
    os<<v.x<<"x "<<v.y<<"y "<<v.z<<"z";
    return os;
}
istream & operator>>(istream & is, Vector3 & v){
    is>>v.x>>v.y>>v.z;
    return is;
}

