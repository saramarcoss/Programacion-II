#ifndef VECTOR3_H
#define VECTOR3_H
#include<iostream>
using namespace std;
class Vector3
{
     friend ostream & operator<<(ostream & os, Vector3 const & v);
     friend istream & operator>>(istream & is, Vector3 & v);
     friend Vector3 operator+ (Vector3 const & c1, Vector3 const & c2);
     friend Vector3 operator- (Vector3 const & c1, Vector3 const & c2);
     friend Vector3 operator* (Vector3 const & c1, Vector3 const & c2);
public:
    Vector3();
    Vector3(float xx, float yy, float zz);


    float getX() const;
    void setX(float value);

    float getY() const;
    void setY(float value);

    float getZ() const;
    void setZ(float value);


private:
    float x,y,z;
};

#endif // VECTOR3_H
