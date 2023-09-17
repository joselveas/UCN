#pragma once
#include <iostream>
#include "headers/ListaNexoSimple.h"
#include "headers/NodoSimple.h"
#include "headers/Persona.h"

using namespace std;

class HashSet {
private:
    ListaNexoSimple* lista[128];
public:
    HashSet();
    ~HashSet();
    void insertar(Persona* persona);
    Persona* buscar(string nombre);
    void eliminar(string nombre);
    int calcularPosicion(string nombre);
};