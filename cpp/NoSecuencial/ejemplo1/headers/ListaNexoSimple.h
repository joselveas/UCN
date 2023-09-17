#pragma once
#include <iostream>
#include "headers/NodoSimple.h"

using namespace std;

class ListaNexoSimple
{
private:
    int largoLista;
    NodoSimple* primero;
public:
    ListaNexoSimple();
    ListaNexoSimple(NodoSimple*);
    ~ListaNexoSimple();
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