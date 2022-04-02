#include <iostream>
#include"contacto.h"
#include"agenda.h"
using namespace std;

ostream & operator<<(ostream & os, Contacto const & c){
cout<<"nombre: "<<c.getNombre()<<" primer apellido: "<<c.getPrimerapellido()<<" telefono: "<<c.getTelefono()<<" correo: "<<c.getCorreo()<<" nacimiento: "<<c.f.getD()<<"/"<<c.f.getM()<<"/"<<c.f.getA()<<" \n";
return os;
}

ostream & operator<<(ostream & os, Agenda const & a){
    auto data=a.getData();
    for(auto elem:data){
      os<<elem<<"\n";
    }
    return os;
}
int main()
{
    Agenda agenda;

    string nombre, pa, tel,corr;
     FechaN fech;
     Contacto c1;
     int pos;

      int opcion = 9;
try{
        while(opcion != 0){
            cout << "Que quieres hacer?" << endl;
            cout << "1. Anadir contactos a la agenda " << endl;
            cout << "2. Borrar contactos de la agenda " << endl;
            cout << "3. Buscar un contacto por nombre y primer apellido " << endl;
            cout << "4. Mostrar un contacto por pantalla " << endl;
            cout << "5. Mostrar por pantalla los contactos que cumplen anos en una fecha metida por teclado en formato dd/mm/aaaa  " << endl;
            cout << "6. Mostrar por pantalla todos los contactos de la agenda " << endl;
            cout << "0. Salir"<<endl;
            cin >> opcion;

            if(opcion==1){
               cout<<"introduce el nombre del contacto a anadir:\n";
               cin>>nombre;
               cout<<"introduce el nprimer apellido del contacto a anadir:\n";
               cin>>pa;
               cout<<"introduce el telefono del contacto a anadir:\n";
               cin>>tel;
               cout<<"introduce el correo electronico del contacto a anadir:\n";
               cin>>corr;
               cout<<"introduce la fecha de nacimiento en formato dd/mm/aaaa del contacto a anadir:\n";
               cin>>fech.d>>fech.m>>fech.a;
               c1={nombre,pa,tel,corr,fech.d,fech.m,fech.a};
               agenda.add(c1);
            }
            if(opcion==2){
             cout<<"introduce la posicion del contacto que desea borrar\n";
             cin>>pos;
             agenda.erase(pos);
            }
            if(opcion==3){
                cout<<"Introduce el nombre del contacto a buscar\n";
                cin>>nombre;
                cout<<"introduce el primer apellido del contacto a anadir\n";
                cin>>pa;
                cout<<agenda.findNombreAp(nombre, pa);
            }
            if(opcion==4){
             cout<<c1;
            }
            if(opcion==5){
                cout<<"introduce una fecha en formato dd/mm/aaaa\n";
                cin>>fech.d>>fech.m>>fech.a;
                auto v=agenda.filter(fech);
                cout<<"los contactos que cumplen anos en esa fecha son:\n";
                for(auto elem:v){
                    cout<<elem<<"\n";
                }
            }
            if(opcion==6){
                cout<<"los contactos de la agenda son:\n";
                cout<<agenda<<"\n";

            }
       }
      }catch(string mssg){
          cout<<mssg<<"\n";
      }

}
