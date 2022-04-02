#ifndef INTEGER_H
#define INTEGER_H
#include<vector>
#include<iostream>
using namespace std;

class Integer
{
public:
    Integer();
    int getValue() const;
    void setValue(int value);

    vector<int> getFactors()const;
    bool isPrime()const;

private:
    int value;
};

#endif // INTEGER_H
