#include <iostream>
#include "headers/NodoSimple.h"
#include "headers/Persona.h"

using namespace std;

NodoSimple::NodoSimple(){this->siguiente = NULL; this->persona = NULL;}
NodoSimple::NodoSimple(Persona* valor){this->siguiente = NULL; this->persona = valor;}
NodoSimple::~NodoSimple(){};
NodoSimple* NodoSimple::getSiguiente(){return this->siguiente;}
void NodoSimple::setSiguiente(NodoSimple* siguiente){this->siguiente = siguiente;}
Persona* NodoSimple::getValor(){return this->persona;}
void NodoSimple::setValor(Persona* valor){this->persona = valor;}
