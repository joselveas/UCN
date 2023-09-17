//Arrays y punteros.

#include <iostream>
using namespace std;

int main() {
    int arreglo[] = {1, 2, 3, 4, 5};
    int* puntero = arreglo + 4;

    cout << "Elementos del arreglo en orden inverso:" << endl;
    for (int i = 4; i >= 0; i--) {
        cout << *puntero << " ";
        puntero--;
    }

    return 0;
}