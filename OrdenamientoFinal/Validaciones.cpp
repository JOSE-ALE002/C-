#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int tomarInt();
bool tipoIntValido(string);

int main(int argc, char const *argv[]){
	
	unsigned t0, t1;
	t0 = clock();
	int numero;
	numero = tomarInt();
	cout<<"\n\nEl entero ingresado es: "<< numero <<endl;
	t1 = clock();
	
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	cout << "Execution Time: " << time << endl;
	return 0;
}

int tomarInt(){
	string numero;
	bool esValido = false;

	while(! esValido){

		try{
			cout<<"Ingrese un numero entero: "; 
			getline(cin, numero);
			esValido = tipoIntValido(numero);

			if(! esValido){
				throw numero;
			}

		}catch(string e){
			cout<<"\n\nEl entero "<< e <<" no es valido."<<endl;
		}
	}

	return atoi(numero.c_str());
}

bool tipoIntValido(string numero){
	int inicio = 0;

	if(numero.length() == 0){
		return 0;
	}

	else if(numero[0] == '+' || numero[0] == '-'){
		inicio = 1;
		if(numero.length() == 1){
			return 0;
		}		
	}

	for (int i = inicio; i < numero.length(); ++i)
	{
		if(! isdigit(numero[i])){
			return 0;
		}
	}

	return 1;
}
