#include <iostream>
#include<vector>
#include<set>
using namespace std;

vector<char>func1(string const & s1, string const & s2){
 set<char>setchar;
 vector<char>r;
 for(int i=0;i<s1.size();i++){
     for(int j=0;j<s2.size();j++){
         if(s1.at(i)==s2.at(j)){
             setchar.insert(s1.at(i));
         }
       }
     }
 for(auto elem:setchar){
     r.push_back(elem);
 }
 return r;
}

/*vector<string>palabras(string const & s1, string const & s2){
    vector<string>re;
    for(auto elem:s1){
        if(elem==' '){
            s1.substr(0,)
        }
    }
}

vector<string>func2(string const & s1, string const & s2){
    vector<string> result;
    for(auto elem1:s1){
        for(auto elem2:s2){

        }
    }
    return result;
}*/


int signos(string const & s){
    vector<int>result;
    int max=0;
   vector<int>count1, count2, count3, count4, count5;
    for(auto elem:s){
        if(elem=='.'){
            count1.push_back(elem);
        }else if(elem==','){
            count2.push_back(elem);
        }else if(elem==':'){
            count3.push_back(elem);
        }else if(elem=='!'){
            count4.push_back(elem);
        }else if(elem=='?'){
            count5.push_back(elem);
        }
    }
     cout<<". ->"<<count1.size()<<"veces\n";
     cout<<", ->"<<count2.size()<<"veces\n";
     cout<<": ->"<<count3.size()<<"veces\n";
     cout<<"! ->"<<count4.size()<<"veces\n";
     cout<<"? ->"<<count5.size()<<"veces\n";

     for(auto elem:count1){
         result.push_back(elem);
     }
     for(auto elem:count2){
         result.push_back(elem);
     }
     for(auto elem:count3){
         result.push_back(elem);
     }
     for(auto elem:count4){
         result.push_back(elem);
     }
     for(auto elem:count5){
         result.push_back(elem);
     }
     for(int i=0;i<4;i++){
         if(result.at(i)>max){
             max=result.at(i);
         }
     }
     cout<<"el maximo es: \n";
    return max;

}
int main()
{
    auto v=func1("un perro come","una puerta");
    for(auto elem:v){
        cout<<elem<<"\n";
    }
    int f3=signos("Hola!Tomas un cafe?Solo?Aqui tienes.");
   cout<<f3;
}
