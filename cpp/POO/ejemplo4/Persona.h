//clase persona.
#pragma once
#include <iostream>
using namespace std;

class Persona
{
private:
    string nombre;
    int edad;
public:
    Persona();
    Persona(string nombre, int edad);
    virtual ~Persona();
    int getEdad();
    string getNombre();
    void setEdad(int);
    void setNombre(string);
    virtual void correr();
};