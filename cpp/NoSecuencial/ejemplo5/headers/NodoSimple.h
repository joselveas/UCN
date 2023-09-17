#pragma once
#include <iostream>
#include "headers/Persona.h"

using namespace std;

class NodoSimple
{
private:
    NodoSimple* siguiente;
    Persona *persona;
public:
    NodoSimple();
    NodoSimple(Persona*);
    ~NodoSimple();
    NodoSimple* getSiguiente();
    void setSiguiente(NodoSimple*);
    Persona* getValor();
    void setValor(Persona*);
};