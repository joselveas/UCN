//Punteros y cadenas de caracteres.

#include <iostream>
using namespace std;

int contarVocales(const char* cadena) {
    int contador = 0;
    while (*cadena) {
        char caracter = *cadena;
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
            caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {
            contador++;
        }
        cadena++;
    }
    return contador;
}

int main() {
    char cadena[100];
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(cadena, 100);

    int vocales = contarVocales(cadena);

    cout << "Numero de vocales en la cadena: " << vocales << endl;

    return 0;
}