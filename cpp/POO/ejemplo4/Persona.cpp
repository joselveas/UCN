#include <iostream>
#include "Persona.h"

using namespace std;

Persona::Persona(){};
Persona::Persona(string nombre, int edad){this->nombre = nombre; this->edad = edad;};
Persona::~Persona(){};
int Persona::getEdad(){return this->edad;};
string Persona::getNombre(){return this->nombre;};
void Persona::setEdad(int edad){this->edad = edad;};
void Persona::setNombre(string nombre){this->nombre = nombre;};
void Persona::correr(){cout<<"Persona corriendo"<<endl;};