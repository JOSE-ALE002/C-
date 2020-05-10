using namespace std;
#include <iostream>
#include <ctime>
#include <stdlib.h>

void menu_principal();
int *insertarNumeros(int);
char *insertarCaracteres(int);
string *InsertarStrings(int);
void ordenBurbuja(int*, int);
void ordenBurbuja(char*, int);
void ordenBurbuja(string*, int);
int tomarInt();
bool tipoIntValido(string);

unsigned t0, t1;
	
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
            	cin>>n;
            	fflush(stdin);
            	int *numeros = insertarNumeros(n);
            	t0 = clock();
            	ordenBurbuja(numeros, n);
            	t1 = clock();
	
				double time = (double(t1-t0)/CLOCKS_PER_SEC);
				cout << "Execution Time: " << time << endl;
				
				system("pause>nul");
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
            	ordenBurbuja(caracteres, n);
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
            	ordenBurbuja(palabras, n);
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
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t >> METODO DE LA BURBUJA << ";
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
		//cout<<"\n\t\t\tIngrese numero["<<i<<"]: ";
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
			}
		}
	}

	cout<<"ARREGLO ORDENADO: ";
	for (int i = 0; i < n; i++)
	{
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";
	
	//system("pause>nul");
}

void ordenBurbuja(char *x, int n){
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
			}
		}
	}

	cout<<"ARREGLO ORDENADO: ";
	for (int i = 0; i < n; i++)
	{
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";
	
	system("pause>nul");
}

void ordenBurbuja(string *x, int n){
	int i, j;
	string aux;
	cout<<"ARREGLO DESORDENADO: ";
	for (int i = 0; i < n; i++){
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";

	for (i = 0; i < n; i++){
		for (j = 0; j < n-1; j++){
			if(x[j].at(0) > x[j+1].at(0)){
				aux = x[j];
				x[j] = x[j+1];
				x[j+1] = aux;
			}
		}
	}

	cout<<"ARREGLO ORDENADO: ";
	for (int i = 0; i < n; i++)
	{
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
	// ORDEN DE DATOS CHARY ENTEROS "METODO DE LA BURBUJA"
	//int numeros[] = {5, 2, 1, 4, 3};
	//char numeros[] = {'c', 'a', 'e', 'b', 'd'};
	int i, j, aux;

	cout<<"ARREGLO DESORDENADO: ";
	for (int i = 0; i < 5; i++){
		cout<<numeros[i]<<" ";
	}

	cout<<"\n\n";

	for (i = 0; i < 5; i++){
		for (j = 0; j < 4; j++){
			if(numeros[j] > numeros[j+1]){
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
		}
	}

	cout<<"ARREGLO ORDENADO: ";
	for (int i = 0; i < 5; i++)
	{
		cout<<numeros[i]<<" ";
	}

	cout<<"\n\n";*/
	
	
	/*
	//ORDEN POR BURBUJA DE CADENAS STRINGS
	
	int i, j;
	string aux;
	string numeros[] = {"Jose", "Alejandro", "Zeus", "Mario", "Luigi"};
	cout<<"ARREGLO DESORDENADO: ";
	for (int i = 0; i < 5; i++){
		cout<<numeros[i]<<" ";
	}

	cout<<"\n\n";

	for (i = 0; i < 5; i++){
		for (j = 0; j < 4; j++){
			if(numeros[j].at(0) > numeros[j+1].at(0)){
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
		}
	}

	cout<<"ARREGLO ORDENADO: ";
	for (int i = 0; i < 5; i++)
	{
		cout<<numeros[i]<<" ";
	}

	cout<<"\n\n";*/
	
