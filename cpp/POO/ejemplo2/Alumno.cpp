#include <iostream>
#include "Alumno.h"

using namespace std;

Alumno::Alumno():Persona(){};
Alumno::Alumno(string nombre, int edad):Persona(nombre,edad){};
Alumno::~Alumno(){};
double Alumno::getNota(){return this -> nota_final;};
void Alumno::setNota(double nota_final){this -> nota_final = nota_final;};
