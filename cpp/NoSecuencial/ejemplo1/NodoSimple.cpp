#include <iostream>
#include "headers/NodoSimple.h"

using namespace std;

NodoSimple::NodoSimple(){this->siguiente = NULL; this->valor = 0;}
NodoSimple::NodoSimple(int valor){this->siguiente = NULL; this->valor = valor;}
NodoSimple::~NodoSimple(){};
NodoSimple* NodoSimple::getSiguiente(){return this->siguiente;}
void NodoSimple::setSiguiente(NodoSimple* siguiente){this->siguiente = siguiente;}
int NodoSimple::getValor(){return this->valor;}
void NodoSimple::setValor(int valor){this->valor = valor;}
