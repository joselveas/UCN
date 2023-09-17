#include <iostream>
#include "headers/ListaNexoSimple.h"
#include "headers/NodoSimple.h"
#include "headers/Persona.h"
#include "headers/HashSet.h"

using namespace std;

HashSet::HashSet()
{
    for(int i=0;i<128;i++)
    {
        lista[i] = NULL;
    }
}
HashSet::~HashSet()
{
    for(int i=0;i<128;i++)
    {
        lista[i] -> ~ListaNexoSimple();
    }
}
void HashSet::insertar(Persona* persona)
{
    string nombre = persona -> getNombre();
    int pos = calcularPosicion(nombre);
    if(lista[pos] == NULL)
    {
        lista[pos] = new ListaNexoSimple();
    }
    lista[pos] -> insertarFinal(new NodoSimple(persona));
}
Persona* HashSet::buscar(string nombre)
{
    int pos = calcularPosicion(nombre);
    if(lista[pos] == NULL)
    {
        return NULL;
    }
    NodoSimple* aux = lista[pos] -> buscarNodo(nombre);
    if(aux == NULL)
    {
        return NULL;
    }
    return aux -> getValor();
}
void HashSet::eliminar(string nombre){
    int pos = calcularPosicion(nombre);
    if(lista[pos] == NULL)
    {
        cout<<"La persona no existe"<<endl;
        return;
    }
    lista[pos] -> eliminarSiguiente(nombre);
    cout<<"Se ha eliminado de la posicion: "<<pos<<endl;
}

int HashSet::calcularPosicion(string nombre){
    int valorAscii = 0;
    for(int i = 0; i<nombre.size();i++)
    {
        valorAscii = valorAscii + static_cast<int>(nombre[i]);
    }
    int pos = (valorAscii/10) % 128;
    return pos;
}