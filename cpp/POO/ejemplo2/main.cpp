//ejemplo de herencia.
#include <iostream>
#include "Alumno.h"
using namespace std;

int main()
{
    Alumno alumno("Jose", 25);
    cout << "Nombre: " << alumno.getNombre() << endl;
    cout << "Edad: " << alumno.getEdad() << endl;
    alumno.setNota(6.8);
    cout<<"La nota es: "<<alumno.getNota()<<endl;
    return 0;
}