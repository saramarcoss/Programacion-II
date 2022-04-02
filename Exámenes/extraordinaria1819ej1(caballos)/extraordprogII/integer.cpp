
#include "integer.h"

Integer::Integer()
{

}

int Integer::getValue() const
{
    return value;
}

void Integer::setValue(int valu)
{
    if(valu<0){
        throw string{"error"};
        value=0;
    }else{
    value = valu;
    }
}
bool Integer::isPrime() const
{
    for(int i=2;i<value;i++){
      if(value%i==0){
       return false;
      }
      }
       return true;
}
vector<int> Integer::getFactors() const
{
    vector<int>result;
     for(int i=2;i<=value;i++){
        if(value%i==0 && i.isPrime())result.push_back(i);
          }
          return result;
}


