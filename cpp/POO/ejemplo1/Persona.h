//Header de clase Persona.
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
    Persona(string, int);
    ~Persona();
    string getNombre();
    int getEdad();
    void setNombre(string);
    void setEdad(int);
};