// METODO DE LA BURBUJA
#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void OrdenarArreglo(char *, int);
void MostrarArreglo(char *, int);

int nElementos; 

char *elemento;

int main(){
    pedirDatos();
    MostrarArreglo(elemento, nElementos);
    OrdenarArreglo(elemento, nElementos);
    MostrarArreglo(elemento, nElementos);

    delete[] elemento; //LIBERA MEMORIA DEL ARREGLO UTILIZADO


    return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de elementos del arreglo: ";
    cin>>nElementos;

    elemento = new char[nElementos]; // RESERVA MEMORIA PARA ARREGLO DINAMICO

    for(int i = 0; i < nElementos; i++){
        cout<<"Digite un numero: "<<"["<<i<<"]: ";
        cin>>*(elemento+i);
    }
}

void OrdenarArreglo(char *elemento, int nElementos){
    int aux;

    for(int i = 0; i < nElementos; i++){
        for(int j = 0; j < nElementos -1; j++){
            if(*(elemento + j) > *(elemento + j + 1)){
                aux = *(elemento + j);
                *(elemento + j) = *(elemento + j + 1);
                *(elemento + j + 1) = aux;
            }
        }
    }
}

void MostrarArreglo(char *elemento, int nElementos){
    cout<<"\n\t\tMOSTRANDO ARREGLO ORDENADO: ";
    for(int i = 0; i < nElementos; i++){
        cout<<*(elemento + i)<<"  ";
    }
}
