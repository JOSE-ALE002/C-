#include <iostream>
using namespace std;
int main(){
    /* -----------------------Operacion de molde en tiempo de Compilacion---------------------------
    
    Compilamos y el compilador leer el codigo y raducirlo en lenguaje de computadora y realizar las
    respectivas conversiones 
    
    * tipo_de_dato (expresion)*/
    // 

    int resultado;
    resultado = (35.50 * 12);

    cout<<" El resultado es: " << resultado << endl;

    /* -----------------------Operacion de molde en tiempo de Ejecucion---------------------------
    
    Compilamos y el compilador leer el codigo y raducirlo en lenguaje de computadora y realizar las
    respectivas conversiones 
    
    * staticCast<tipo_de_dato> (expresion)*/
    // 

    float resultado2;

    resultado = static_cast<int> (20.21 * 12);

    cout<<" El resultado en tiempo de ejecucion es: " << resultado << endl;

    return 0;
}