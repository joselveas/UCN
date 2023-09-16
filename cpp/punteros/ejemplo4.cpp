//Punteros y asignación dinámica de memoria 

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese un valor para N: ";
    cin >> N;

    int* arreglo = new int[N];

    cout << "Ingrese " << N << " enteros:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> arreglo[i];
    }

    cout << "Valores ingresados:" << endl;
    for (int i = 0; i < N; i++) {
        cout << arreglo[i] << " ";
    }

    delete[] arreglo; // Liberar la memoria asignada

    return 0;
}