#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

void escribir(){
    ofstream archivo;
    archivo.open("Prueba.txt", ios::out);

    if (archivo.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }

    archivo<<"Hola que tal me llamo che";
    archivo.close();
}

int main(){
    escribir();
    return 0;
}
