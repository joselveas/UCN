//Punteros y funciones

#include <iostream>
using namespace std;

void modificarValor(int* ptr) {
    *ptr = 100;
}

int main() {
    int numero = 42;
    int* puntero = &numero;

    cout << "Valor antes de la función: " << numero << endl;
    modificarValor(puntero);
    cout << "Valor después de la función: " << numero << endl;

    return 0;
}