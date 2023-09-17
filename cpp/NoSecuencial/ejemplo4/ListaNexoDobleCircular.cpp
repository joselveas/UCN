#include <iostream>
#include <iostream>
#include "headers/ListaNexoDobleCircular.h"
#include "headers/NodoDoble.h"

using namespace std;

ListaNexoDobleCircular::ListaNexoDobleCircular(){this -> primero = NULL; this -> largoLista = 0;};
ListaNexoDobleCircular::ListaNexoDobleCircular(NodoDoble* nuevo){this -> primero = nuevo; this -> largoLista = 1; nuevo->setSiguiente(nuevo); nuevo->setAnterior(nuevo);};
ListaNexoDobleCircular::~ListaNexoDobleCircular(){};
NodoDoble* ListaNexoDobleCircular::getPrimero(){return this->primero;};
void ListaNexoDobleCircular::setPrimero(NodoDoble* nuevo){this->primero = nuevo; this -> largoLista = 1; nuevo -> setSiguiente(nuevo); nuevo -> setAnterior(nuevo);};
int ListaNexoDobleCircular::getLargoLista(){return this->largoLista;};
bool ListaNexoDobleCircular::listaVacia()
{
    if(this->largoLista == 0)
    {
        cout<<"La lista esta vacia"<<endl;
        return true;
    }
    return false;
};
NodoDoble* ListaNexoDobleCircular::moverAlFinal()
{
    bool empty = listaVacia();
    if(empty)
    {
        return NULL;
    }
    NodoDoble* aux = this->primero;
    aux = aux -> getAnterior();
    return aux;
};
NodoDoble* ListaNexoDobleCircular::buscarNodo(int valor)
{
    NodoDoble* aux = this->primero;
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
void ListaNexoDobleCircular::insertarInicio(NodoDoble* nuevo)
{
    if(largoLista == 0)
    {
        setPrimero(nuevo);
        return;
    }
    NodoDoble* aux = this->moverAlFinal();
    nuevo->setSiguiente(this->primero);
    this -> primero -> setAnterior(nuevo);
    aux -> setSiguiente(nuevo);
    nuevo -> setAnterior(aux);
    this->primero = nuevo;
    this->largoLista++;
}
void ListaNexoDobleCircular::eliminarInicio()
{
    bool empty = listaVacia();
    if(empty)
    {
        return;
    }
    NodoDoble* aux = this->primero;
    if(this -> largoLista == 1)
    {
        this->primero = NULL;
        aux -> ~NodoDoble();
        this -> largoLista = 0;
        return;
    }
    NodoDoble* aux2 = this->moverAlFinal();
    aux2 -> setSiguiente(aux -> getSiguiente());
    aux -> getSiguiente() -> setAnterior(aux2);
    this -> primero = aux -> getSiguiente();
    aux -> ~NodoDoble();
    this -> largoLista--;
}
void ListaNexoDobleCircular::insertarFinal(NodoDoble* nuevo)
{
    bool empty = listaVacia();
    if(empty)
    {
        setPrimero(nuevo);
        return;
    }
    NodoDoble* aux = this->moverAlFinal();
    aux->setSiguiente(nuevo);
    nuevo ->setAnterior(aux);
    this -> primero -> setAnterior(nuevo);
    nuevo -> setSiguiente(this -> primero);
    this->largoLista++;
};
void ListaNexoDobleCircular::eliminarFinal()
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
    NodoDoble* aux = this->moverAlFinal();
    NodoDoble* aux2 = aux -> getAnterior();
    aux2 -> setSiguiente(this -> primero);
    this -> primero -> setAnterior(aux2);
    delete aux;
    this->largoLista--;
};
void ListaNexoDobleCircular::insertarSiguiente(NodoDoble* nuevo, int valor)
{
    bool empty = listaVacia();
    NodoDoble* aux = this->buscarNodo(valor);
    if(aux == NULL || empty){
        return;
    }
    if(largoLista == 1 || aux -> getSiguiente() == this -> primero)
    {
        this->insertarFinal(nuevo);
        return;
    }
    nuevo -> setSiguiente(aux -> getSiguiente());
    nuevo -> setAnterior(aux);
    aux -> getSiguiente() -> setAnterior(nuevo);
    aux -> setSiguiente(nuevo);
    this->largoLista++;
};
void ListaNexoDobleCircular::eliminarSiguiente(int valor)
{
    bool empty = listaVacia();
    NodoDoble* aux = this->buscarNodo(valor);
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
    NodoDoble* aux2 = aux -> getAnterior();
    aux2 -> setSiguiente(aux -> getSiguiente());
    aux -> getSiguiente() -> setAnterior(aux2);
    delete aux;
    this->largoLista--;
}





