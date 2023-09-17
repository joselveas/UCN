#pragma once
#include <iostream>
#include "headers/NodoDoble.h"

using namespace std;

class ListaNexoDobleCircular
{
private:
    int largoLista;
    NodoDoble* primero;
public:
    ListaNexoDobleCircular();
    ListaNexoDobleCircular(NodoDoble*);
    ~ListaNexoDobleCircular();
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