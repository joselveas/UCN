#pragma once
#include <iostream>
#include "headers/NodoDoble.h"

using namespace std;

class ListaNexoDoble
{
private:
    int largoLista;
    NodoDoble* primero;
public:
    ListaNexoDoble();
    ListaNexoDoble(NodoDoble*);
    ~ListaNexoDoble();
    int getLargoLista();
    NodoDoble* getPrimero();
    virtual bool listaVacia();
    virtual NodoDoble* moverAlFinal();
    virtual NodoDoble* buscarNodo(int valor);
    virtual void setPrimero(NodoDoble*);
    virtual void insertarInicio(NodoDoble*);
    virtual void eliminarInicio();
    virtual void insertarFinal(NodoDoble*);
    virtual void eliminarFinal();
    virtual void insertarSiguiente(NodoDoble*,int);
    virtual void eliminarSiguiente(int);
};