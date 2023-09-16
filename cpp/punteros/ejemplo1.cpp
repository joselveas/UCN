//Punteros básicos

#include <iostream>
using namespace std;

int main() {
    int numero = 42;
    int* puntero = &numero;

    cout << "Valor de la variable: " << numero << endl;
    cout << "Dirección de memoria: " << puntero << endl;
    cout << "Valor a través del puntero: " << *puntero << endl;

    return 0;
}
