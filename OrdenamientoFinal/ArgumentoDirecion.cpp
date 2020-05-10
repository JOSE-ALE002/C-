#include <iostream>
using namespace std;

void convertir(double&); //Parametro Direccion de....

int main(){
    int numeros[] = {5, 3, 2}
    double angulo = 360;
    cout<<"El valor inicial es: " << angulo <<endl;
    convertir(angulo);
    cout<<"El valor final es: " << angulo <<endl;

    return 0;
}

void convertir(double& x){
    x = (x * 3.16159)/180;
    cout<<"El valor final dentro de la funcion es: " << x <<endl;
}