#include <iostream>
#include "bolsa.h"
#include "jugador.h"
using namespace std;
int menu(){

    cout<<"Elija opcion: \n";
    cout<<"1. Salir del programa \n";
    cout<<"2. Jugar \n";
    cout<<"3. Puntuacion \n";

    int i=0;
    cin>>i;
    return i;

}

void _jugar(Jugador& a, Jugador& b, Bolsa& B,int acum1, int acum2){

    int aux=0;
    if(!a.getPlantarse()){
        cout << "J1 saca bola?: (1 si 0 no) "<<endl;
        cin>>aux;
        if(aux!=1)a.setPlantarse(true);
    }
    if(B.quedanBolas()&&!a.getPlantarse()){
        aux=B.sacarBola();
        cout<<"bola: "<<aux<<endl;
        acum1=acum1+aux;
        cout<<"total "<<acum1<<endl;

    }else{
        a.setPlantarse(true);
    }
    if(!b.getPlantarse()){
        cout<<"J2 saca bola?: (1 si 0 no) "<<endl;
        cin>>aux;
        if(aux!=1)b.setPlantarse(true);
    }
    if(B.quedanBolas()&&!b.getPlantarse()){
        aux=B.sacarBola();
        cout<<aux<<endl;
        cout<<"bola: "<<aux<<endl;
        acum2=acum2+aux;
        cout<<"total "<<acum2<<endl;
    }else{
        b.setPlantarse(true);
    }
    if(!a.getPlantarse()||!b.getPlantarse())_jugar(a,b,B,acum1,acum2);
    else{
        //calculo quien gana
        int pa=0;
        int pb=0;
        pa=a.getApuesta()-acum1;
        pb=b.getApuesta()-acum2;
        if(pa==0||pb==0){
            if(pa==0&&pb==0){
                cout<<"empate"<<endl;
                a.setPuntos(a.getPuntos()+1);
                b.setPuntos(b.getPuntos()+1);
            }else if(pa==0){
                cout<<"gana J1"<<endl;
                a.setPuntos(a.getPuntos()+1);
            }else if(pb==0){
                cout<<"gana J2"<<endl;
                b.setPuntos(b.getPuntos()+1);
            }
        }else{
            if(pa<pb){
                if(pa>0&&pb>0){
                    cout<<"gana J1"<<endl;
                    a.setPuntos(a.getPuntos()+1);
                }else if(pa>0&&pb<0){
                    cout<<"gana J2"<<endl;
                    b.setPuntos(b.getPuntos()+1);
                }else{
                    cout<<"gana J2"<<endl;
                    b.setPuntos(b.getPuntos()+1);
                }
            }else if(pb<pa){
                if(pa>0&&pb>0){
                    cout<<"gana J2"<<endl;
                    b.setPuntos(b.getPuntos()+1);
                }else if(pb>0&&pa<0){
                    cout<<"gana J1"<<endl;
                    a.setPuntos(a.getPuntos()+1);
                }else{
                    cout<<"gana J1"<<endl;
                    a.setPuntos(a.getPuntos()+1);
                }
            }else{
                cout<<"empate"<<endl;
                a.setPuntos(a.getPuntos()+1);
                b.setPuntos(b.getPuntos()+1);
            }
        }
    }


}
void jugar(Jugador& a, Jugador& b, Bolsa& B){
    Bolsa nueva;
    a.setPlantarse(false);
    b.setPlantarse(false);
    int aux=0;
    B=nueva;
    cout<<"elija num J1: (entre 10 y 50) "<<endl;
    cin>>aux;
    a.setApuesta(aux);
    cout<<"elija num J2: (entre 10 y 50) "<<endl;
    cin>>aux;
    b.setApuesta(aux);
    _jugar(a,b,B,0,0);
}


int main()
{

    Jugador a;
    Jugador b;
    Bolsa B;
    int decidir=0;
    while(decidir!=1){
        decidir=menu();
        switch (decidir){
        case 1:
            if(a.getPuntos()<b.getPuntos())cout<<"gana J2"<<endl;
            else cout<<"gana J1"<<endl;
            //ya sale
            break;
        case 2:
            jugar(a,b,B);
            break;
        case 3:
            cout<<"J1: "<<a.getPuntos()<<endl;
            cout<<"J2: "<<b.getPuntos()<<endl;
            break;
        default:
            decidir=1;
            break;
        }
    }
}
