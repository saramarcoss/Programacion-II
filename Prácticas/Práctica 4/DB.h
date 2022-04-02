#ifndef DB_H
#define DB_H
#include"Data.h"
#include<iostream>
#include<memory>
#include<functional>

template<typename K, typename V>
class DB
{
    template<typename fK, typename fV> friend std::ostream & operator << (std::ostream & os, DB<fK,fV> const & db);
public:
    DB();
    void insert(Data<K,V> const & d);
    void forEach( std::function<void (Data<K,V>)> f);
    shared_ptr<Data<K,V>> find( std::function<bool (Data<K,V>)> f);
    DB<K,V> filter( std::function<bool (Data<K,V>)> f);


private:
    std::vector<shared_ptr<Data<K,V>>> data;
};

template<typename K, typename V>
DB<K,V>::DB()
{

}

template<typename K, typename V>
void DB<K,V>::insert(Data<K,V>const & d)
{
    data.push_back(make_shared<Data<K,V>>(d));
}

template<typename K, typename V>
void DB<K,V>::forEach(std::function<void (Data<K,V>)> f)
{
    for(auto elem: data){
        f(*elem);
    }
}
template<typename K, typename V>
shared_ptr<Data<K,V>> DB<K,V>::find(std::function<bool (Data<K,V>)> f)
{
    for(auto elem: data){
        if(f(*elem)){
            return elem;
        }
    }

    return nullptr;

}

template<typename K, typename V>
DB<K,V> DB<K,V>::filter(std::function<bool(Data<K,V>)> f)
{
    DB<K,V> result;
    for(auto elem: data){
        if(f(*elem)){
            result.insert(*elem);
    }
    }

    return result;

}


template<typename K, typename V>
std::ostream & operator << (std::ostream & os, DB<K,V> const & db){
    for(auto data: db.data){
        os << *data <<"\n" ;
    }
    return os;
}
#endif // DB_H
