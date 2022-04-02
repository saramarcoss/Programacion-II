#ifndef DATA_H
#define DATA_H
#include<vector>
#include"Pair.h"
#include<memory>
using namespace std;
template<typename K, typename V>
class Data
{
    template<typename fK, typename fV>
    friend std::ostream & operator << (std::ostream & os, Data<fK,fV> const & d);
public:
    Data();
    void insert(Pair<K,V> p);
    V value(K const & key);
    std::vector<K> getKeys();

    std::vector<Pair<K, V> > getData() const;

private:
    std::vector<Pair<K,V>>data;
};

template<typename K, typename V>
Data<K,V>::Data(){
    // nothing to do here
}

template<typename K, typename V>
void Data<K,V>::insert(Pair<K,V>p){

        data.push_back(p);

}

template<typename K, typename V>
V Data<K,V>::value(const K &key)
{
    for(auto elem: data){
        if(elem.clave() == key){
            return elem.valor();
        }
    }
 }

template<typename K, typename V>
std::vector<K> Data<K,V>::getKeys()
{
    std::vector<K> result;
    for(auto elem: data){
        result.push_back(elem.key());
    }
    return result;
}
template<typename K, typename V>
 std::vector<Pair<K,V> > Data<K,V>::getData() const
{
    return data;
}

template<typename K, typename V>
std::ostream & operator << (std::ostream & os, Data<K,V> const & d){
    for(auto pair: d.data){
        os << pair << "\n";
    }

    return os;

}
#endif // DATA_H
