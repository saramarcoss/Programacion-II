#include <iostream>
using namespace std;
#include"persona.h"
#include<memory>
#include<vector>
#include<functional>

template <class T>
T find(vector<T> const & v, std::function<bool(T)> const & f){

  for(auto elem: v){
    if(f(elem)) return elem;
  }

  return nullptr;
}
template <class T>
void forEach(vector<T>const & v, std::function<void(T)>const & op){
    for(auto elem:v){
        op(elem);
    }
}
template <class T>
vector<T> filter(vector<T> const & v, std::function<bool(T)> const & f){
  vector<T> result;
  for(auto elem: v){
    if(f(elem)) result.push_back(elem);
  }

  return result;
}
template <class T, class Y>
T map(T const & v, std::function<Y(Y)> const & f){
  T result;
  for(auto elem: v){
    result.push_back(f(elem));
  }

  return result;
}
function<bool(shared_ptr<Persona>)>mayorde12=[](shared_ptr<Persona>p){
if(p->getEdad()>12){
  return true;
}
return false;
};

int main()
{
    vector<shared_ptr<Persona>>v;
    shared_ptr<Persona>p1=make_shared<Persona>(Persona{18,"sara","785426705"});
    shared_ptr<Persona>p2=make_shared<Persona>(Persona{11,"ana","76314526705"});
    v.push_back(p1);
    v.push_back(p2);
    auto filtro=filter<shared_ptr<Persona>>(v,mayorde12);
    for(auto elem:filtro){
        cout<<elem->getNombre()<<"\n";
    }

    forEach<shared_ptr<Persona>>(v,[](std::shared_ptr<Persona> p)->void{
    cout<<"nombre: "<<p->getNombre()<<", edad: "<<p->getEdad()<<", dni: "<<p->getDni()<<"\n";
});
    auto found=find<shared_ptr<Persona>>(v,[](std::shared_ptr<Persona> p) -> bool {
            return (p->getDni()=="785426705");
        });
    if(found.get()){
    std::cout<<found->getNombre() << "\n";
            }
}
