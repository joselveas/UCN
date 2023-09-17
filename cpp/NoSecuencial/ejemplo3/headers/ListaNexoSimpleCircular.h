#pragma once
#include <iostream>
#include "headers/NodoSimple.h"

using namespace std;

class ListaNexoSimpleCircular
{
private:
    int largoLista;
    NodoSimple* primero;
public:
    ListaNexoSimpleCircular();
    ListaNexoSimpleCircular(NodoSimple*);
    ~ListaNexoSimpleCircular();
    int getLargoLista();
    NodoSimple* getPrimero();
    virtual bool listaVacia();
    virtual NodoSimple* moverAlFinal();
    virtual NodoSimple* moverAnterior(NodoSimple*);
    virtual NodoSimple* buscarNodo(int valor);
    virtual void setPrimero(NodoSimple*);
    virtual void insertarInicio(NodoSimple*);
    virtual void eliminarInicio();
    virtual void insertarFinal(NodoSimple*);
    virtual void eliminarFinal();
    virtual void insertarSiguiente(NodoSimple*,int);
    virtual void eliminarSiguiente(int);
};