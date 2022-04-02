#ifndef BOLSA_H
#define BOLSA_H
#include<vector>
#include<iostream>
using namespace std;

class Bolsa
{
public:
    Bolsa();
    bool quedanBolas()const;
    vector<int> getBolas() const;
    void setBolas(const vector<int> &value);
    int sacarBola();
    int get_bola()const;


protected:
    vector<int>nums;
};


#endif // BOLSA_H
