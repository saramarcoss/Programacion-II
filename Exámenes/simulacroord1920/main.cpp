#include <iostream>
#include<memory>
#include<Lista.h>
using namespace std;
class Persona{
public:
    Persona(string name,int ed):nombre{name},edad{ed}{}
    string getNombre() const;
    void setNombre(const string &value);

    int getEdad() const;
    void setEdad(int value);

protected:
    string nombre;
    int edad;
};
ostream & operator<<(ostream &os, shared_ptr<Persona> p){
    os << p->getNombre() << ": "<<  p->getEdad();
    return os;
}

auto mayores18=[](shared_ptr<Persona> t){
    return t->getEdad()>18;
};
auto nombresara=[](shared_ptr<Persona>t){
    return(t->getNombre()=="sara");
};
int main()
{
    Lista<shared_ptr<Persona>>list;
    list.push_back(make_shared<Persona>(Persona{"sara",19}));
    list.push_front(make_shared<Persona>(Persona{"eva",12}));
    list.insert(make_shared<Persona>(Persona{"mama",46}),2);
    list.erase(2);
    auto filt=list.filter(mayores18);
    cout<<filt<<"\n";
    int index=list.findIdx(nombresara);
    cout<<index<<"\n";

    if(index != -1) std::cout << list.at(index) << "\n";
    std::cout << list << "\n";

}

string Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(const string &value)
{
    nombre = value;
}

int Persona::getEdad() const
{
    return edad;
}

void Persona::setEdad(int value)
{
    edad = value;
}
