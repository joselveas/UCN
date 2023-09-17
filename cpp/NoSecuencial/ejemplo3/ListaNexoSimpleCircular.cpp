#include <iostream>
#include <iostream>
#include "headers/ListaNexoSimpleCircular.h"
#include "headers/NodoSimple.h"

using namespace std;

ListaNexoSimpleCircular::ListaNexoSimpleCircular(){this -> primero = NULL; this -> largoLista = 0;};
ListaNexoSimpleCircular::ListaNexoSimpleCircular(NodoSimple* nuevo){this -> primero = nuevo; this -> largoLista = 1; nuevo->setSiguiente(nuevo);};
ListaNexoSimpleCircular::~ListaNexoSimpleCircular(){};
NodoSimple* ListaNexoSimpleCircular::getPrimero(){return this->primero;};
void ListaNexoSimpleCircular::setPrimero(NodoSimple* nuevo){this->primero = nuevo; this -> largoLista = 1; nuevo -> setSiguiente(nuevo);};
int ListaNexoSimpleCircular::getLargoLista(){return this->largoLista;};
bool ListaNexoSimpleCircular::listaVacia()
{
    if(this->largoLista == 0)
    {
        cout<<"La lista esta vacia"<<endl;
        return true;
    }
    return false;
};
NodoSimple* ListaNexoSimpleCircular::moverAlFinal()
{
    bool empty = listaVacia();
    if(empty)
    {
        return NULL;
    }
    NodoSimple* aux = this->primero;
    while(aux->getSiguiente() != this -> primero)
    {
        aux = aux->getSiguiente();
    }
    return aux;
};
NodoSimple* ListaNexoSimpleCircular::moverAnterior(NodoSimple* aux)
{
    NodoSimple* aux2 = this->primero;
    while(aux2 -> getSiguiente() != aux)
    {
        aux2 = aux2 -> getSiguiente();
    }
    return aux2;
}
NodoSimple* ListaNexoSimpleCircular::buscarNodo(int valor)
{
    NodoSimple* aux = this->primero;
    if(aux->getValor() == valor)
    {
        return aux;
    }
    aux = aux->getSiguiente();
    while(aux != this -> primero)
    {
        if(aux->getValor() == valor)
        {
            return aux;
        }
        aux = aux->getSiguiente();
    }
    cout<<"El valor no se encuentra en la lista"<<endl;
    return NULL;
};
void ListaNexoSimpleCircular::insertarInicio(NodoSimple* nuevo)
{
    bool empty = listaVacia();
    if(empty)
    {
        setPrimero(nuevo);
        return;
    }
    nuevo -> setSiguiente(this -> primero);
    NodoSimple* aux = this->moverAlFinal();
    aux -> setSiguiente(nuevo);
    this -> primero = nuevo;
    this -> largoLista++;
}
void ListaNexoSimpleCircular::eliminarInicio()
{
    bool empty = listaVacia();
    if(empty)
    {
        return;
    }
    NodoSimple* aux = this->primero;
    if(this -> largoLista == 1)
    {
        this->primero = NULL;
        delete aux;
        return;
    }
    NodoSimple* aux2 = this->moverAlFinal();
    aux2 -> setSiguiente(aux -> getSiguiente());
    this -> primero = aux -> getSiguiente();
    delete aux;
    this -> largoLista--;
}
void ListaNexoSimpleCircular::insertarFinal(NodoSimple* nuevo)
{
    bool empty = listaVacia();
    if(empty)
    {
        setPrimero(nuevo);
        return;
    }
    NodoSimple* aux = this->moverAlFinal();
    aux->setSiguiente(nuevo);
    nuevo -> setSiguiente(this -> primero);
    this->largoLista++;
};
void ListaNexoSimpleCircular::eliminarFinal()
{
    bool empty = listaVacia();
    if(empty)
    {
        return;
    }
    if(this -> largoLista == 1)
    {
        this->eliminarInicio();
        return;
    }
    NodoSimple* aux = this->moverAlFinal();
    NodoSimple* aux2 = this->moverAnterior(aux);
    aux2->setSiguiente(this -> primero);
    delete aux;
    this->largoLista--;
};
void ListaNexoSimpleCircular::insertarSiguiente(NodoSimple* nuevo, int valor)
{
    bool empty = listaVacia();
    NodoSimple* aux = this->buscarNodo(valor);
    if(aux == NULL || empty){
        return;
    }
    if(largoLista == 1 || aux -> getSiguiente() == this -> primero)
    {
        this->insertarFinal(nuevo);
        return;
    }
    nuevo -> setSiguiente(aux -> getSiguiente());
    aux -> setSiguiente(nuevo);
    this->largoLista++;
};
void ListaNexoSimpleCircular::eliminarSiguiente(int valor)
{
    bool empty = listaVacia();
    NodoSimple* aux = this->buscarNodo(valor);
    if(aux == NULL || empty)
    {
        return;
    }
    if(aux == this -> primero)
    {
        this->eliminarInicio();
        return;
    }
    if(aux -> getSiguiente() == this -> primero){
        this->eliminarFinal();
        return;
    }
    NodoSimple* aux2 = this->moverAnterior(aux);
    aux2 -> setSiguiente(aux -> getSiguiente());
    delete aux;
    this->largoLista--;
}





