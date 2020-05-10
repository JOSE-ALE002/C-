#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <ctime>
#include <time.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

// DECLARACION DE FUNCIONES
void menu_principal();
int tomarInt();
bool tipoIntValido(string);
void menu_principal();
void menu_principalInsercion();
double performancecounter_diff(LARGE_INTEGER *, LARGE_INTEGER *);
int *insertarNumeros(int);
void ordenInsercion(int *, int);
void ordenBurbuja(int *, int);
void ordenSeleccion(int *, int);
void QuickSort(int *, int, int);

//Variables para el tiempo de ejecucion
	LARGE_INTEGER t_ini, t_fin;
    double secs = 0.0, secs2 = 0.0, secs3 = 0.0, secs4 = 0.0, secs5 = 0.0;

// CUERPO DEL PROGRAMA
int main(){
	system("Color 4F");
	int opc; //Opcion para el menu principal
	
    do
    {
        system("cls");
        menu_principal();
        opc = tomarInt();

        switch(opc)
        {
            case 1:{
            	system("cls");
            	int n;
            	cout << "\n\t\t\t\t\t\t >> MENU DE INSERCION << ";
            	cout<<"\n\n\t\t\tDigite cantidad de numeros a insertar: ";
            	n = tomarInt();
            	fflush(stdin);
            	//cout<<"\n";
            	int *numeros = insertarNumeros(n);
            	ordenBurbuja(numeros, n);
            	delete[] numeros;
            	
				break;
			}
			
			case 2:{
				
				break;
			}
			
			case 3:{
				system("cls");
            	int n;
            	cout << "\n\t\t\t\t\t\t >> MENU DE INSERCION << ";
            	cout<<"\n\n\t\t\tDigite cantidad de numeros a insertar: ";
            	n = tomarInt();
            	fflush(stdin);
            	//cout<<"\n";
            	int *numeros = insertarNumeros(n);
            	ordenSeleccion(numeros, n);
            	delete[] numeros;
				break;
			}
			
			case 4:{
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
			
			case 5:{
				system("cls");
            	int n;
            	cout << "\n\t\t\t\t\t\t >> MENU DE INSERCION << ";
            	cout<<"\n\n\t\t\tDigite cantidad de numeros a insertar: ";
            	n = tomarInt();
            	fflush(stdin);
            	//cout<<"\n";
            	int *numeros = insertarNumeros(n);
            	
            	QueryPerformanceCounter(&t_ini);	
            	
				QuickSort(numeros, 0, n-1);
				
				QueryPerformanceCounter(&t_fin);
				
				secs5 = performancecounter_diff(&t_fin, &t_ini) * 1000.0;
				cout<<"\t\t\tTiempo: "<<setprecision(3)<< fixed << secs5 <<" milisegundos"<<endl;
				cout<<"\t\t\t\t*====================================================*\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t||\t  Execution Time: "<<setprecision(4)<< fixed << secs5 <<" milisegundos"<<"\t    ||\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t*====================================================*";
	
				system("pause>nul");
            	delete[] numeros;	
				break;
			}
        
            case 6:
            {
            	system("cls");
                cout<<endl<<endl;
				cout<<endl<<endl<<endl;
				cout<<"\t\t\t\t\t\tEstructura de Datos."<<endl<<endl;
				cout<<"\t\t\t\t\t-CREADO POR:"<<endl<<endl;
				cout<<"\t\t\t\t\t>> Jose Alejandro Ibañez Martinez."<<endl<<endl;
				//cout<<"Presiona una tecla para continuar...";
				cout<<"\t\t";system("pause");
            	exit(0);
                break;
            }
        }
	}while(true);
	
	return 0;
}

int *insertarNumeros(int n){
	int *x;
	srand(time(NULL));
	x = new int[n];
	for(int i = 0; i < n; i++){
		//cout<<"\n\t\t\tIngrese numero["<<i<<"]: "; cin>>x[i];
		x[i] = 1 + rand() % (10001 - 1);
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
	
	QueryPerformanceCounter(&t_ini);	
	for (i = 0; i < n; ++i){
		pos = i;		
		aux = x[i];
		while((pos > 0) && (x[pos - 1] > aux)){
			x[pos] = x[pos -1];
			pos--;
		}

		x[pos] = aux;
	}
	QueryPerformanceCounter(&t_fin);

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
	
	secs4 = performancecounter_diff(&t_fin, &t_ini) * 1000.0;
	cout<<"\t\t\tTiempo: "<<setprecision(3)<< fixed << secs4 <<" milisegundos"<<endl;
	cout<<"\t\t\t\t*====================================================*\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t||\t  Execution Time: "<<setprecision(4)<< fixed << secs4 <<" milisegundos"<<"\t    ||\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t*====================================================*";
	
	
	system("pause>nul");
}
	

void ordenBurbuja(int *x, int n){
	int i, j, aux;

	/*cout<<"ARREGLO DESORDENADO: ";
	for (int i = 0; i < n; i++){
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";*/
	
	QueryPerformanceCounter(&t_ini);	
	for (i = 0; i < n; i++){
		for (j = 0; j < n-1; j++){
			if(x[j] > x[j+1]){
				aux = x[j];
				x[j] = x[j+1];
				x[j+1] = aux;
			}
		}
	}
	QueryPerformanceCounter(&t_fin);

	/*cout<<"ARREGLO ORDENADO: ";
	for (int i = 0; i < n; i++)
	{
		cout<<x[i]<<" ";
	}

	cout<<"\n\n";*/
	
	secs = performancecounter_diff(&t_fin, &t_ini) * 1000.0;
	cout<<"\t\t\tTiempo: "<<setprecision(3)<< fixed << secs <<" milisegundos"<<endl;
	cout<<"\t\t\t\t*====================================================*\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t||\t  Execution Time: "<<setprecision(4)<< fixed << secs <<" milisegundos"<<"\t    ||\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t*====================================================*";
	
	system("pause>nul");
}

void ordenSeleccion(int *x, int n){
	int i, j, min, aux;
		
	/*cout<<" Arreglo Desordenado"<<endl;
	for(int i = 0; i < n; i++){
		cout<<x[i]<<" ";
	}
	
	cout<<"\n\n";*/
	
	QueryPerformanceCounter(&t_ini);	
	for(i = 0; i<n; i++){
		min = i;
		for(j = i+1; j< n; j++){
			if(x[j] < x[min]){
				min = j;
			}
		}
		aux = x[i];
		x[i] = x[min];
		x[min] = aux;
	}
	
	QueryPerformanceCounter(&t_fin);
	
	/*cout<<" Arreglo Ordenado"<<endl;
	for(int i = 0; i < n; i++){
		cout<<x[i]<<" ";
	}
	
	cout<<"\n\n";*/
	
	secs3 = performancecounter_diff(&t_fin, &t_ini) * 1000.0;
	cout<<"\t\t\tTiempo: "<<setprecision(3)<< fixed << secs3 <<" milisegundos"<<endl;
	cout<<"\t\t\t\t*====================================================*\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t||\t  Execution Time: "<<setprecision(4)<< fixed << secs3 <<" milisegundos"<<"\t    ||\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t*====================================================*";
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
			
			i++; j--;
		}
	}
	
	if(izq < j)
		QuickSort(x, izq, j);
	if(i < der){
		QuickSort(x, i, der);
	}
}

void menu_principal(){
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t  >> MENU PRINCIPAL << ";
	cout << "\n\n"; 
	cout << "\n\t\t\t\t\t    ||\t 1. METODO BURBUJA      ||"; 
	cout << "\n\t\t\t\t\t    ||\t 2. METODO B. MEJORADA	||"; 
	cout << "\n\t\t\t\t\t    ||\t 3. METODO SELECCION	||"; 
	cout << "\n\t\t\t\t\t    ||\t 4. METODO INSERCION  	||"; 
	cout << "\n\t\t\t\t\t    ||\t 5. METODO QUICKSORT	||"; 
	cout << "\n\t\t\t\t\t    ||\t 6. SALIR           	||"; 
	//cout << "\n\n\n\n\t\t\t\t    Ingrese la opcion: "; 
}

void menu_principalBurbuja(){
    cout << "\n\n\t\t\t\t\t\t>> ORDENAMIENTO BURBUJA << ";
	cout << "\n\n"; 
	cout << "\n\t\t\t\t\t    ||\t 1. ORDENAR ARREGLO 1	||"; 
	cout << "\n\t\t\t\t\t    ||\t 2. ORDENAR ARREGLO 2	||"; 
	cout << "\n\t\t\t\t\t    ||\t 3. ORDENAR ARREGLO 3	||"; 
	cout << "\n\t\t\t\t\t    ||\t 4. ORDENAR ARREGLO 4   ||"; 
	cout << "\n\t\t\t\t\t    ||\t 5. ORDENAR ARREGLO 5   ||"; 
	cout << "\n\t\t\t\t\t    ||\t 6. REGRESAR  		||"; 
	//cout << "\n\n\n\n\t\t\t\t    Ingrese una opcion: "; 
}

void menu_principalInsercion(){
    cout << "\n\n\t\t\t\t\t\t>> ORDENAMIENTO INSERCION << ";
	cout << "\n\n"; 
	cout << "\n\t\t\t\t\t    ||\t 1. ORDENAR ARREGLO 1	||"; 
	cout << "\n\t\t\t\t\t    ||\t 2. ORDENAR ARREGLO 2	||"; 
	cout << "\n\t\t\t\t\t    ||\t 3. ORDENAR ARREGLO 3	||"; 
	cout << "\n\t\t\t\t\t    ||\t 4. ORDENAR ARREGLO 4   ||"; 
	cout << "\n\t\t\t\t\t    ||\t 5. ORDENAR ARREGLO 5   ||"; 
	cout << "\n\t\t\t\t\t    ||\t 6. REGRESAR  		||"; 
	//cout << "\n\n\n\n\t\t\t\t    Ingrese una opcion: "; 
}

int tomarInt(){
	string numero;
	bool esValido = false;

	while(! esValido){

		try{
			cout<<"\n\n\t\t\t\t    Ingrese una opcion: "; 
			getline(cin, numero);
			esValido = tipoIntValido(numero);

			if(! esValido){
				throw numero;
			}

		}catch(string e){
			cout<<"\n\n\t\t\t\t\t\tEl entero "<< e <<" no es valido."<<endl;
			Sleep(400);
			system("cls");
			menu_principal();
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

/* retorna "a - b" en segundos */
double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b)
{
  LARGE_INTEGER freq;
  QueryPerformanceFrequency(&freq);
  return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}

