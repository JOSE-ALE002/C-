#include <iostream>
#include <string>
using namespace std;
int main(){

	int a[] = {3, 5, 4, 2, 1};
	int i = 0, dato = 2;
	char band = 'F';

	while((band == 'F') && (i < 5)){
		if(a[i] == dato){
			band = 'V';
		}

		i++;
	}

	if(band == 'F'){
		cout<<"El numero no existe en el arreglo"<<endl;
	}else{
		cout<<"El numero ha sido encontrado en la pos: "<<i-1<<endl;
	}

	return 0;
}