#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int numeros[] = {1, 2, 3, 4, 5};
	int inf, sup, mitad, dato;
	char band = 'F';

	dato = 3;

	//ALGORITMO DE BUSQUEDA BINARIA
	inf  = 0;
	sup = 5;

	while(inf <= sup){
		mitad = (inf + sup)/2;

		if(numeros[mitad] == dato){
			band = 'V';
			break;
		}

		if(numeros[mitad] > dato){
			sup = mitad;
			mitad = (inf + sup)/2;
		}


		if(numeros[mitad] < dato){
			inf = mitad;
			mitad = (inf + sup)/2;
		}
	}

	if(band == 'V'){
		cout<<"EL numero ha sido encontrado en la posicion: "<<mitad<<endl;
	}else{
		cout<<"EL numero ha sido encontrado en la posicion"<<endl;
	}
	return 0;
}