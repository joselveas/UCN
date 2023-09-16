#include <iostream>
#include "Persona.h"
using namespace std;

int main()
{
    Persona p1("Jose",25);
    cout << "Nombre: " << p1.getNombre() << endl;
    cout << "Edad: " << p1.getEdad() << endl;
    return 0;
}