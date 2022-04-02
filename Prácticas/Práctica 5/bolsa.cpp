#include "bolsa.h"
#include<time.h>

Bolsa::Bolsa()
{
 for(int i =0; i<20; i++){
     nums.push_back(i);
 }
}

bool Bolsa::quedanBolas() const
{
   return(nums.size() > 0);
}
int Bolsa::sacarBola()
{
   srand(time(NULL));
   int num = 1 +rand() % (nums.size() -1);
   int dev = nums.at(num);
   nums.erase(nums.begin() + num);
   return dev;

}
vector<int> Bolsa::getBolas() const
{
    return nums;
}

void Bolsa::setBolas(const vector<int> &value)
{
    nums = value;
}



