#include <iostream>
#include "Alumno.h"
#include "Persona.h"
using namespace std;

int main()
{
    Persona *pv[10];
    string nombres[]={"a1","a2","a3","a4","a5","a6","a7","a8","a9","a10"};
    int edades[]={21,22,23,24,25,26,27,28,29,30};
    for(int i=0;i<10;i++)
    {
        pv[i] = new Alumno(nombres[i],edades[i]);
    }
    for(int i=0;i<10;i++)
    {
        cout<<"Nombre: "<<pv[i]->getNombre()<<" Edad: "<<pv[i]->getEdad()<<endl;
    }
    return 0;
}