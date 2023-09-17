//ejemplo de herencia con polimorfismo.
#include <iostream>
#include "Alumno.h"
#include "Persona.h"
using namespace std;

int main()
{
    Persona persona("Jose", 25);
    Alumno alumno("Luis", 28);
    cout << "Nombre: " << persona.getNombre()<<" Edad: "<<persona.getEdad() << endl;
    cout << "Nombre: " << alumno.getNombre()<<" Edad: "<<alumno.getEdad() << endl;
    persona.correr();
    alumno.correr();

    Persona* persona2 = new Alumno("Pedro", 21); // Creación de objeto Persona que apunta a nuevo objeto de tipo Alumno (de manera dinamica)
    cout << "Nombre: " << persona2 -> getNombre()<<" Edad: "<<persona2 -> getEdad() << endl;
    persona2 -> correr();
    Alumno* alumno2 = static_cast<Alumno*>(persona2); // Se utiliza downcasteo para convertir un objeto de tipo Persona en un objeto de tipo Alumno y asignar nota
    cout << "Nombre: " << alumno2 -> getNombre()<<" Edad: "<<alumno2 -> getEdad() << endl;
    alumno2 -> setNota(5.4);
    cout<<"La nota es: "<<alumno2 -> getNota()<<endl;

    return 0;
}