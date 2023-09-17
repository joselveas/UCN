#include <iostream>
#include "headers/ListaNexoDoble.h"
#include "headers/NodoDoble.h"

using namespace std;
int main()
{
    ListaNexoDoble* lista = new ListaNexoDoble();
    bool menu = true;
    do{
        cout<<"1. Insertar al inicio"<<endl;
        cout<<"2. Insertar al final"<<endl;
        cout<<"3. Eliminar del inicio"<<endl;
        cout<<"4. Eliminar del final"<<endl;
        cout<<"5. Buscar dato"<<endl;
        cout<<"6. Mostrar lista"<<endl;
        cout<<"7. Salir"<<endl;
        int opcion;
        cin>>opcion;
        int valor;
        switch(opcion)
        {
            case 1:
                cout<<"Ingresar el valor"<<endl;
                cin>>valor;
                lista->insertarInicio(new NodoDoble(valor));
                cout<<"Se ha ingresado el dato: "<<valor<<endl;
                break;
            case 2:
                cout<<"Ingresar el valor"<<endl;
                cin>>valor;
                lista->insertarFinal(new NodoDoble(valor));
                cout<<"Se ha ingresado el dato: "<<valor<<endl;
                break;
            case 3:
                if(lista->listaVacia())
                {
                    break;
                }
                cout<<"Desea eliminar el dato del inicio: "<< lista -> getPrimero() -> getValor()<<endl;
                valor = lista -> getPrimero() -> getValor();
                lista->eliminarInicio();
                cout<<"Se ha eliminado el dato: "<<valor<<endl;
                break;
            case 4:
                if(lista->listaVacia())
                {
                    break;
                }
                cout<<"Desea eliminar el dato del final: "<< lista -> moverAlFinal() -> getValor()<<endl;
                valor = lista -> moverAlFinal() -> getValor();
                lista->eliminarFinal();
                cout<<"Se ha eliminado el dato: "<<valor<<endl;
                break;
            case 5:
            {
                cout<<"Ingresar el valor"<<endl;
                cin>>valor;
                if(lista->listaVacia())
                {
                    break;
                }
                NodoDoble* aux = lista->buscarNodo(valor);
                if(aux == NULL)
                {
                    cout<<"El valor no se encuentra en la lista"<<endl;
                    break;
                }
                cout<<"El valor "<< valor <<" se encuentra en la lista"<<endl;
                cout<<"Desea eliminar el dato?"<<endl;
                char c;
                cin>>c;
                if(c == 's')
                {
                    lista->eliminarSiguiente(valor);
                    cout<<"Se ha eliminado el dato: "<<valor<<endl;
                    break;
                }else if(c == 'n')
                {
                    break;
                }
            }
            break;
            case 6:
            {
                NodoDoble *aux = lista -> getPrimero();
                if(aux == NULL)
                {
                    cout<<"La lista esta vacia"<<endl;
                    break;
                }
                while (aux != NULL)
                {
                    cout << aux->getValor() << "|";
                    aux = aux->getSiguiente();
                }
                cout << endl;
            }    
            break;
            case 7:
                menu = false;
                break;
        }
    cout<<"----------------------------------------"<<endl;
    }while(menu);
    return 0;
}