#include <iostream>
#include "headers/NodoDoble.h"

using namespace std;

NodoDoble::NodoDoble(){this->siguiente = NULL; this->anterior = NULL;   this->valor = 0;}
NodoDoble::NodoDoble(int valor){this->siguiente = NULL; this->anterior = NULL;  this->valor = valor;}
NodoDoble::~NodoDoble(){this -> siguiente = NULL; this -> anterior = NULL;};
NodoDoble* NodoDoble::getSiguiente(){return this->siguiente;}
void NodoDoble::setSiguiente(NodoDoble* siguiente){this->siguiente = siguiente;}
NodoDoble* NodoDoble::getAnterior(){return this->anterior;}
void NodoDoble::setAnterior(NodoDoble* anterior){this->anterior = anterior;}
int NodoDoble::getValor(){return this->valor;}
void NodoDoble::setValor(int valor){this->valor = valor;}