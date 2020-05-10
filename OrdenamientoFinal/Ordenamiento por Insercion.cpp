#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;

void menu_principal();
int *insertarNumeros(int);
char *insertarCaracteres(int);
string *InsertarStrings(int);
void ordenInsercion(int*, int);
void ordenInsercion(char*, int);
void ordenInsercion(string*, int);
int tomarInt();
bool tipoIntValido(string);
	
int main(){
	system("Color 4F");
	int opc; //Opcion para el menu principal
    do
    {
        system("cls");
        menu_principal();
        cin>>opc;

        switch(opc)
        {
            case 1:
            {
            	system("cls");
            	int n;
            	cout << "\n\t\t\t\t\t\t >> MENU DE INSERCION << ";
            	cout<<"\n\n\t\t\tDigite cantidad de numeros a insertar: ";
            	n = tomarInt();
            	fflush(stdin);
            	//cout<<"\n";
            	int *numeros = insertarNumeros(n);
            	ordenInsercion(numeros, n);
            	delete[] numeros;
            	
                break;
            }
            
            case 2:
            {
            	system("cls");
            	int n;
            	cout << "\n\t\t\t\t\t\t >> MENU DE INSERCION << ";
            	cout<<"\n\n\t\t\tDigite cantidad de caracteres a insertar: ";
            	cin>>n;
            	
            	char *caracteres = insertarCaracteres(n);
            	ordenInsercion(caracteres, n);
            	delete[] caracteres;
            	
                break;
            }
            case 3:
            {
            	system("cls");
				int n;
            	cout << "\n\t\t\t\t\t\t >> MENU DE INSERCION << ";
            	cout<<"\n\n\t\t\tDigite cantidad de palabras a insertar: ";
            	cin>>n;
            	
            	string *palabras = InsertarStrings(n);
            	ordenInsercion(palabras, n);
            	delete[] palabras;
                break;
            }
            case 4:
            {
                system("cls");
                cout<<endl<<endl;
					cout<<endl<<endl<<endl;
					cout<<"\t\t\t\t\t\tProgramacion III."<<endl<<endl;
					cout<<"\t\t\t\t\t-CREADO POR:"<<endl<<endl;
					cout<<"\t\t\t\t\t>> Jose Alejandro Ibañez Martinez."<<endl<<endl;
					//cout<<"Presiona una tecla para continuar...";
					cout<<"\t\t";system("pause");
                exit(0);
            }
        }
    }while(true);

	
	return 0;
}

void menu_principal(){
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t >> METODO DE INSERCION << ";
	cout << "\n\n"; 
	cout << "\n\t\t\t\t\t    ||\t 1. ORDENAR NUMEROS		||"; 
	cout << "\n\t\t\t\t\t    ||\t 2. ORDENAR CARACTERES		||"; 
	cout << "\n\t\t\t\t\t    ||\t 3. ORDENAR NOMBRES		||"; 
	cout << "\n\t\t\t\t\t    ||\t 4. Salir                  ||"; 
	cout << "\n\n\n\n\t\t\t\t    Ingrese la opcion: "; 
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

char *insertarCaracteres(int n){
	char *x;
	x = new char[n];
	for(int i = 0; i < n; i++){
		cout<<"\n\t\t\tIngrese caracter["<<i<<"]: "; cin>>x[i];
	}
	
	return x;
}

string *InsertarStrings(int n){
	string *s;
	s = new string[n];
	for(int i = 0; i < n; i++){
		cout<<"\n\t\t\tIngrese palabra["<<i<<"]: "; 
		cin>>s[i];
	}
	
	return  s;
}


void ordenInsercion(int *x, int n){
	int i, pos, aux;
	
	cout<<"ARREGLO DESORDENADO: ";
	for (int i = 0; i < n; ++i){
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";

	for (i = 0; i < n; ++i){
		pos = i;		
		aux = x[i];
		while((pos > 0) && (x[pos - 1] > aux)){
			x[pos] = x[pos -1];
			pos--;
		}

		x[pos] = aux;
	}

	cout<<"ARREGLO ORDENADO ASCENDENTE: ";
	for (int i = 0; i < n; ++i){
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";

		cout<<"ARREGLO ORDENADO DESENDENTE: ";
	for (int i = n-1; i >= 0; i--){
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";
	
	system("pause>nul");
}

void ordenInsercion(char *x, int n){
	int i, pos, aux;
	
	cout<<"ARREGLO DESORDENADO: ";
	for (int i = 0; i < n; ++i){
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";

	for (i = 0; i < n; ++i){
		pos = i;		
		aux = x[i];
		while((pos > 0) && (x[pos - 1] > aux)){
			x[pos] = x[pos -1];
			pos--;
		}

		x[pos] = aux;
	}

	cout<<"ARREGLO ORDENADO ASCENDENTE: ";
	for (int i = 0; i < n; ++i){
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";

	cout<<"ARREGLO ORDENADO DESENDENTE: ";
	for (int i = n-1; i >= 0; i--){
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";
	
	system("pause>nul");
}

void ordenInsercion(string *x, int n){
	int i, pos, aux;
	string aux2;


	cout<<"ARREGLO DESORDENADO: ";
	for (int i = 0; i < n; ++i){
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";

	for (i = 0; i < n; ++i){
		pos = i;		
		aux = x[i].at(0);
		aux2 = x[i];
		while((pos > 0) && (x[pos - 1].at(0) > aux)){
			x[pos] = x[pos -1];
			pos--;
		}

		x[pos] = aux2;
	}

	cout<<"ARREGLO ORDENADO ASCENDENTE: ";
	for (int i = 0; i < n; ++i){
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";

		cout<<"ARREGLO ORDENADO DESENDENTE: ";
	for (int i = n-1; i >= 0; i--){
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";
	
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


	/*
	//ORDENAMIENTO POR INSERCION DE DATOS CHAR Y EMTEROS
	int numeros[] = {5, 2, 1, 4, 3};
	//char numeros[] = {'e', 'a', 'm', 'b', 's'};
	int i, pos, aux;
	
	cout<<"ARREGLO DESORDENADO: ";
	for (int i = 0; i < 5; ++i){
		cout<<numeros[i]<<" ";
	}

	cout<<"\n\n";

	for (i = 0; i < 5; ++i){
		pos = i;		
		aux = numeros[i];
		while((pos > 0) && (numeros[pos - 1] > aux)){
			numeros[pos] = numeros[pos -1];
			pos--;
		}

		numeros[pos] = aux;
	}

	cout<<"ARREGLO ORDENADO ASCENDENTE: ";
	for (int i = 0; i < 5; ++i){
		cout<<numeros[i]<<" ";
	}

	cout<<"\n\n";

		cout<<"ARREGLO ORDENADO DESENDENTE: ";
	for (int i = 4; i >= 0; i--){
		cout<<numeros[i]<<" ";
	}

	cout<<"\n\n";*/
	
	
	/*
	//ORDEN DE INSERCION DE CADENAS STRING
	string numeros[] = {"Jose", "Alejandro", "Zeus", "Mario", "Luigi"};
	int i, pos, aux;
	string aux2;


	cout<<"ARREGLO DESORDENADO: ";
	for (int i = 0; i < 5; ++i){
		cout<<numeros[i]<<" ";
	}

	cout<<"\n\n";

	for (i = 0; i < 5; ++i){
		pos = i;		
		aux = numeros[i].at(0);
		aux2 = numeros[i];
		while((pos > 0) && (numeros[pos - 1].at(0) > aux)){
			numeros[pos] = numeros[pos -1];
			pos--;
		}

		numeros[pos] = aux2;
	}

	cout<<"ARREGLO ORDENADO ASCENDENTE: ";
	for (int i = 0; i < 5; ++i){
		cout<<numeros[i]<<" ";
	}

	cout<<"\n\n";

		cout<<"ARREGLO ORDENADO DESENDENTE: ";
	for (int i = 4; i >= 0; i--){
		cout<<numeros[i]<<" ";
	}

	cout<<"\n\n";*/
