#include <iostream>
using namespace std;

int main(){
    int *puntero;
    puntero = new int;
    *puntero = 10;
    cout << *puntero << endl;
    delete puntero;
    return 0;
}