#include <iostream>
#include "headers/Persona.h"

using namespace std;

Persona::Persona(){this->telefono = 0; this->nombre = "";}
Persona::Persona(int telefono, string nombre){this->telefono = telefono; this->nombre = nombre;}
Persona::~Persona(){};
int Persona::getTelefono(){return this->telefono;}
string Persona::getNombre(){return this->nombre;}
void Persona::setTelefono(int telefono){this->telefono = telefono;}
void Persona::setNombre(string nombre){this->nombre = nombre;}