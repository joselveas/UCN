#include <iostream>
#include "headers/ListaNexoSimple.h"
#include "headers/NodoSimple.h"
#include "headers/Persona.h"
#include "headers/HashSet.h"

using namespace std;
int main()
{
    HashSet* h = new HashSet();
    Persona* p;
    bool exit = true;
    while(exit)
    {
        cout<<"1. Insertar Persona"<<endl;
        cout<<"2. Buscar Persona"<<endl;
        cout<<"3. Eliminar Persona"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<"Opcion: ";
        int opcion;
        cin>>opcion;
        cout<<endl;
        cout<<"------------------------------------------------------"<<endl;
        switch(opcion)
        {
            case 1:
            {
                cout<<"------------------------------------------------------"<<endl;
                cout<<"Ingresar el nombre: ";
                string nombre;
                cin>>nombre;
                cout<<endl;
                cout<<"Ingresar el Telefono: ";
                int telefono;
                cin>>telefono;
                cout<<endl;
                p = new Persona(telefono, nombre);
                h->insertar(p);
                cout<<"------------------------------------------------------"<<endl;
            }
            break;
            case 2:
            {
                cout<<"------------------------------------------------------"<<endl;
                cout<<"Ingresar el nombre: ";
                string nombre;
                cin>>nombre;
                cout<<endl;
                p = h->buscar(nombre);
                if(p != NULL)
                {
                    cout<<"El telefono es: "<<p->getTelefono()<<endl;
                }
                else
                {
                    cout<<"La persona no existe"<<endl;
                }
                cout<<"------------------------------------------------------"<<endl;
            }
            break;
            case 3:
            {
                cout<<"------------------------------------------------------"<<endl;
                cout<<"Ingresar el nombre: ";
                string nombre;
                cin>>nombre;
                cout<<endl;
                h->eliminar(nombre);
                cout<<"------------------------------------------------------"<<endl;
            }
            break;
            case 4:
            {
                cout<<"------------------------------------------------------"<<endl;
                exit = false;
                cout<<"Saliendo..."<<endl;
                cout<<"------------------------------------------------------"<<endl;
            }
            break;
        }
    }
    return 0;
}