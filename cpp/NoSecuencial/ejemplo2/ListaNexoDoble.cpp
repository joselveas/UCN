#include <iostream>
#include <iostream>
#include "headers/ListaNexoDoble.h"
#include "headers/NodoDoble.h"

using namespace std;

ListaNexoDoble::ListaNexoDoble(){this -> primero = NULL; this -> largoLista = 0;};
ListaNexoDoble::ListaNexoDoble(NodoDoble* primero){this -> primero = primero; this -> largoLista = 1;};
ListaNexoDoble::~ListaNexoDoble(){};
NodoDoble* ListaNexoDoble::getPrimero(){return this->primero;};
void ListaNexoDoble::setPrimero(NodoDoble* primero){this->primero = primero; this -> largoLista = 1;};
int ListaNexoDoble::getLargoLista(){return this->largoLista;};
bool ListaNexoDoble::listaVacia()
{
    if(this->largoLista == 0)
    {
        cout<<"La lista esta vacia"<<endl;
        return true;
    }
    return false;
};
NodoDoble* ListaNexoDoble::moverAlFinal()
{
    bool empty = listaVacia();
    if(empty)
    {
        return NULL;
    }
    NodoDoble* aux = this->primero;
    while(aux->getSiguiente() != NULL)
    {
        aux = aux->getSiguiente();
    }
    return aux;
};
NodoDoble* ListaNexoDoble::buscarNodo(int valor)
{
    NodoDoble* aux = this->primero;
    while(aux != NULL){
        if(aux->getValor() == valor)
        {
            return aux;
        }
        aux = aux->getSiguiente();
    }
    cout<<"El valor no se encuentra en la lista"<<endl;
    return NULL;
};
void ListaNexoDoble::insertarInicio(NodoDoble* nuevo)
{
    if(largoLista == 0)
    {
        setPrimero(nuevo);
        return;
    }
    nuevo->setSiguiente(this->primero);
    this ->primero-> setAnterior(nuevo);
    this->primero = nuevo;
    this->largoLista++;
}
void ListaNexoDoble::eliminarInicio()
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
    this -> primero = this -> primero -> getSiguiente();
    delete aux;
    this -> largoLista--;
}
void ListaNexoDoble::insertarFinal(NodoDoble* nuevo)
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
    this->largoLista++;
};
void ListaNexoDoble::eliminarFinal()
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
    aux2 -> setSiguiente(NULL);
    delete aux;
    this->largoLista--;
};
void ListaNexoDoble::insertarSiguiente(NodoDoble* nuevo, int valor)
{
    bool empty = listaVacia();
    NodoDoble* aux = this->buscarNodo(valor);
    if(aux == NULL || empty){
        return;
    }
    if(largoLista == 1 || aux -> getSiguiente() == NULL)
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
void ListaNexoDoble::eliminarSiguiente(int valor)
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
    if(aux -> getSiguiente() == NULL){
        this->eliminarFinal();
        return;
    }
    NodoDoble* aux2 = aux -> getAnterior();
    aux2 -> setSiguiente(aux -> getSiguiente());
    aux -> getSiguiente() -> setAnterior(aux2);
    delete aux;
    this->largoLista--;
}





