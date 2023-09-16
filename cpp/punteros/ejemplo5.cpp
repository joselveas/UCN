//Punteros y estructuras

#include <iostream>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main() {
    Persona persona;
    Persona* punteroPersona = &persona;

    punteroPersona->nombre = "Juan";
    punteroPersona->edad = 30;

    cout << "Nombre: " << punteroPersona->nombre << endl;
    cout << "Edad: " << punteroPersona->edad << endl;

    return 0;
}