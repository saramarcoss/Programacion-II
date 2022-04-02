#include "agenda.h"

Agenda::Agenda()
{

}

void Agenda::add(const Contacto &c)
{
    data.push_back(c);
}

void Agenda::erase(int p)
{
    if(p >= data.size() || p < 0) throw string{"Out of bounds"};
        data.erase(data.begin() + p);
    }


Contacto Agenda::findNombreAp(string nombre, string ap)
{
    for(int i=0;i<data.size();i++){
        if(data.at(i).getNombre()==nombre&&data.at(i).getPrimerapellido()==ap)return data.at(i);
    }
}

vector<Contacto> Agenda::filter(const FechaN &fe)
{
    vector<Contacto>result;
    for(auto const & elem:data){
        if(elem.f.getD()==fe.getD()&& elem.f.getM()==fe.getM()){
          result.push_back(elem);
        }
    }
    return result;
}


vector<Contacto> Agenda::getData() const
{
    return data;
}

