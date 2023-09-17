#include <iostream>
#include <iostream>
#include "headers/ListaNexoSimple.h"
#include "headers/NodoSimple.h"

using namespace std;

ListaNexoSimple::ListaNexoSimple(){this -> primero = NULL; this -> largoLista = 0;};
ListaNexoSimple::ListaNexoSimple(NodoSimple* primero){this -> primero = primero; this -> largoLista = 1;};
ListaNexoSimple::~ListaNexoSimple(){};
NodoSimple* ListaNexoSimple::getPrimero(){return this->primero;};
void ListaNexoSimple::setPrimero(NodoSimple* primero){this->primero = primero; this -> largoLista = 1;};
int ListaNexoSimple::getLargoLista(){return this->largoLista;};
bool ListaNexoSimple::listaVacia()
{
    if(this->largoLista == 0)
    {
        cout<<"La lista esta vacia"<<endl;
        return true;
    }
    return false;
};
NodoSimple* ListaNexoSimple::moverAlFinal()
{
    bool empty = listaVacia();
    if(empty)
    {
        return NULL;
    }
    NodoSimple* aux = this->primero;
    while(aux->getSiguiente() != NULL)
    {
        aux = aux->getSiguiente();
    }
    return aux;
};
NodoSimple* ListaNexoSimple::moverAnterior(NodoSimple* aux)
{
    NodoSimple* aux2 = this->primero;
    while(aux2 -> getSiguiente() != aux)
    {
        aux2 = aux2 -> getSiguiente();
    }
    return aux2;
}
NodoSimple* ListaNexoSimple::buscarNodo(int valor)
{
    NodoSimple* aux = this->primero;
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
void ListaNexoSimple::insertarInicio(NodoSimple* nuevo)
{
    nuevo->setSiguiente(this->primero);
    this->primero = nuevo;
    this->largoLista++;
}
void ListaNexoSimple::eliminarInicio()
{
    bool empty = listaVacia();
    if(empty)
    {
        return;
    }
    NodoSimple* aux = this->primero;
    this -> primero = this -> primero -> getSiguiente();
    delete aux;
    this -> largoLista--;
}
void ListaNexoSimple::insertarFinal(NodoSimple* nuevo)
{
    bool empty = listaVacia();
    if(empty)
    {
        setPrimero(nuevo);
        return;
    }
    NodoSimple* aux = this->moverAlFinal();
    aux->setSiguiente(nuevo);
    this->largoLista++;
};
void ListaNexoSimple::eliminarFinal()
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
    aux2->setSiguiente(NULL);
    delete aux;
    this->largoLista--;
};
void ListaNexoSimple::insertarSiguiente(NodoSimple* nuevo, int valor)
{
    bool empty = listaVacia();
    NodoSimple* aux = this->buscarNodo(valor);
    if(aux == NULL || empty){
        return;
    }
    if(largoLista == 1 || aux -> getSiguiente() == NULL)
    {
        this->insertarFinal(nuevo);
        return;
    }
    nuevo -> setSiguiente(aux -> getSiguiente());
    aux -> setSiguiente(nuevo);
    this->largoLista++;
};
void ListaNexoSimple::eliminarSiguiente(int valor)
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
    if(aux -> getSiguiente() == NULL){
        this->eliminarFinal();
        return;
    }
    NodoSimple* aux2 = this->moverAnterior(aux);
    aux2 -> setSiguiente(aux -> getSiguiente());
    delete aux;
    this->largoLista--;
}





