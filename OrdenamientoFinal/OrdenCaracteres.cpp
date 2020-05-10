#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	char numeros[] = {'c', 's', 'a'};
	int i;
	int j;
	int aux;
	int min;

	cout<<"ARREGLO DESORDENADO: ";
	for (int i = 0; i < 3; i++){
		cout<<numeros[i]<<" ";
	}

	cout<<endl<<endl;

	cout<<"ARREGLO DESORDENADO ANSCII: ";
	for (int i = 0; i < 3; i++){
		cout<< (int) numeros[i]<<" ";
	}

	cout<<endl<<endl;	

	for (i = 0; i < 3; i++){
		min  = i;
		for (j = i+1; j < 3; j++){
			if(numeros[j] < numeros[min]){
				min = j;
			}
		}

		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}

	cout<<"ARREGLO ORDENADO: ";
	for (int i = 0; i < 3; i++){
		cout<<numeros[i]<<" ";
	}

	cout<<endl<<endl;	

	cout<<"ARREGLO ORDENADO ANSCII: ";
	for (int i = 0; i < 3; i++){
		cout<< (int) numeros[i]<<" ";
	}

	cout<<endl<<endl;	

	return 0;
}

