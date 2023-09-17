#pragma once
#include <iostream>
#include "Persona.h"

using namespace std;

class Alumno: public Persona {
private:
    double nota_final;
public:
    Alumno();
    Alumno(string, int);
    ~Alumno();
    double getNota();
    void setNota(double);
    void correr() override;
};