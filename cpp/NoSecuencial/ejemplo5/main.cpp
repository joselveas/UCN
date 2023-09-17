#include <iostream>
#include "headers/ListaNexoSimple.h"
#include "headers/NodoSimple.h"
#include "headers/Persona.h"

using namespace std;
int main()
{
    ListaNexoSimple* lista = new ListaNexoSimple();
    Persona personas[10];
    string nombres[]={"p1","p2","p3","p4","p5","p6","p7","p8","p9","p10"};
    int telefonos[]={90001,90002,90003,90004,90005,90006,90007,90008,90009,90010};
    for(int i=0;i<10;i++)
    {
        personas[i].setNombre(nombres[i]);
        personas[i].setTelefono(telefonos[i]);
        lista->insertarFinal(new NodoSimple(&personas[i]));
    }
    return 0;
}