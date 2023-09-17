#pragma once
#include <iostream>

using namespace std;

class NodoSimple
{
private:
    NodoSimple* siguiente;
    int valor;
public:
    NodoSimple();
    NodoSimple(int);
    ~NodoSimple();
    NodoSimple* getSiguiente();
    void setSiguiente(NodoSimple*);
    int getValor();
    void setValor(int);
};