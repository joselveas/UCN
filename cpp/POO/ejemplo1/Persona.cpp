#include <Persona.h>
#include <iostream>
#include "Persona.h"
using namespace std;

Persona::Persona(){};
Persona::Persona(string nombre, int edad){this -> nombre = nombre;this -> edad = edad;};
Persona::~Persona(){};
string Persona::getNombre(){return this -> nombre;}
int Persona::getEdad(){return this -> edad;};
void Persona::setNombre(string nombre){this -> nombre = nombre;};
void Persona::setEdad(int edad){this -> edad = edad;};