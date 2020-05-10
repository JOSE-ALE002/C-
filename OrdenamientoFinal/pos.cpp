#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int *insertarNumeros(int);
void ordenInsercion(int*, int);
void ordenSeleccion(int*, int);
void ordenBurbuja(int*, int);
void QuickSort(int *, int, int);
int tomarInt();
bool tipoIntValido(string);
int acum = 0, acum2 = 0, acum3 = 0, acum4 = 0;

int main(){
	int  opcion;
	opcion = tomarInt();
	int *x = insertarNumeros(opcion);
	
	QuickSort(x, 0, opcion-1);
	
	cout<< "cambios de quicksort"<<acum4;
	
	for(int i = 0; i < opcion; i++){
		cout<<x[i]<<" ";
	}
	/*cout<<"\n\n";
	ordenBurbuja(x, opcion);
	cout<<"\n\n";
	ordenSeleccion(x, opcion);*/
	
	
	return 0;
}

int *insertarNumeros(int n){
	int *x;
	x = new int[n];
	for(int i = 0; i < n; i++){
		//cout<<"\n\t\t\tIngrese numero["<<i<<"]: "; cin>>x[i];
		x[i] = tomarInt();
	}
	
	return x;
}

void ordenInsercion(int *x, int n){
	int i, pos, aux;
	
	cout<<"ARREGLO DESORDENADO: ";
	for (int i = 0; i < n; ++i){
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";

	for (i = 0; i < n; i++){
		pos = i;		
		aux = x[i];
		while((pos > 0) && (x[pos - 1] > aux)){
			x[pos] = x[pos -1];
			pos--;
			acum++;
		}

		x[pos] = aux;
	}

	cout<<"ARREGLO ORDENADO ASCENDENTE: ";
	for (int i = 0; i < n; i++){
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";

		cout<<"ARREGLO ORDENADO DESENDENTE: ";
	for (int i = n-1; i >= 0; i--){
		cout<<x[i]<<" ";
	}
	

	cout<<"\n\n";
	
	cout<<"cambios en insersion: "<<acum;
	
	system("pause>nul");
}

int tomarInt(){
	string numero;
	bool esValido = false;

	while(! esValido){

		try{
			cout<<"\n\t\t\tIngrese un numero entero: "; 
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

void ordenSeleccion(int *x, int n){
	int i, j, min, aux, ac = 0;
		
	cout<<" Arreglo Desordenado"<<endl;
	for(int i = 0; i < n; i++){
		cout<<x[i]<<" ";
	}
	
	cout<<"\n\n";
	
	for(i = 0; i<n; i++){
		min = i;
		for(j = i+1; j< n; j++){
			if(x[j] < x[min]){
				min = j;
				//acum2++;
				ac++;
				if(ac > 1){
					ac--;
				}	
			}
		}
		
		acum2 = acum2 + ac;
		aux = x[i];
		x[i] = x[min];
		x[min] = aux;
		ac = 0;
	}

	
	cout<<" Arreglo Ordenado"<<endl;
	for(int i = 0; i < n; i++){
		cout<<x[i]<<" ";
	}
	
	cout<<"\n\n";
	
	cout<<"cambios en seleccion: "<<acum2;

	system("pause>nul");
}

void ordenBurbuja(int *x, int n){
	int i, j, aux;

	cout<<"ARREGLO DESORDENADO: ";
	for (int i = 0; i < n; i++){
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";
	
	for (i = 0; i < n; i++){
		for (j = 0; j < n-1; j++){
			if(x[j] > x[j+1]){
				aux = x[j];
				x[j] = x[j+1];
				x[j+1] = aux;
				acum3++;
			}
		}
	}

	cout<<"ARREGLO ORDENADO: ";
	for (int i = 0; i < n; i++)
	{
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";
	
	cout<<"cambios en burbuja: "<<acum3;
	system("pause>nul");
}

void QuickSort(int *x, int izq, int der){
	int i = izq, j = der, tmp;
	int p = x[(izq + der) / 2];
	
	while(i <= j){
		while (x[i] < p) i++;
		while (x[j] > p) j--;
		if( i <= j){
			tmp = x[i];
			x[i] = x[j];
			x[j] = tmp;
			acum4++;
			i++; j--;
		}
	}
	
	if(izq < j)
		QuickSort(x, izq, j);
	if(i < der){
		QuickSort(x, i, der);
	}
}

