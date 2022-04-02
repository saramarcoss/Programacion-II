#include <iostream>
#include<vector>
#include"integer.h"
using namespace std;



bool esPrimo(int num){
    for(int i=2;i<num;i++){
      if(num%i==0){
       return false;
      }
      }
       return true;
      }
vector<int> factores(int num){
  vector<int>result;
   for(int i=2;i<=num;i++){
      if(num%i==0 && esPrimo(i))result.push_back(i);
        }
        return result;
}

int mcd(int a, int b){
  if(b==0){
        return a;
}else{
       return mcd(b, a%b);
    }
}


int main()
{
   auto v=factores(10);
   for(auto elem:v){
       cout<<elem<<"\n";
   }

   auto m=mcd(10,15);
   cout<<m<<"\n";

   Integer inte;
   inte.setValue(5);
   /*auto vec=inte.getFactors();
   for(auto elem:vec){
       cout<<elem<<"\n";
   }*/
   cout<<inte.isPrime();

}
