#pragma once
#include <iostream>

using namespace std;

class NodoDoble
{
private:
    NodoDoble* siguiente;
    NodoDoble* anterior;
    int valor;
public:
    NodoDoble();
    NodoDoble(int);
    ~NodoDoble();
    NodoDoble* getSiguiente();
    void setSiguiente(NodoDoble*);
    NodoDoble* getAnterior();
    void setAnterior(NodoDoble*);
    int getValor();
    void setValor(int);
};