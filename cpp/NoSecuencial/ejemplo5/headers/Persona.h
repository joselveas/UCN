#pragma once
#include <iostream>

using namespace std;

class Persona
{
private:
    int telefono;
    string nombre;
public:
    Persona();
    Persona(int, string);
    ~Persona();
    int getTelefono();
    string getNombre();
    void setTelefono(int);
    void setNombre(string);
};