#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <ctime>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

void menu_principal();
int tomarInt();
bool tipoIntValido(string);
void menu_principalBurbuja();
void menu_principalInsercion();
double performancecounter_diff(LARGE_INTEGER *, LARGE_INTEGER *);

//Variables para el tiempo de ejecucion
	LARGE_INTEGER t_ini, t_fin;
    double secs = 0.0, secs2 = 0.0, secs3 = 0.0, secs4 = 0.0, secs5 = 0.0;
    double isecs = 0.0, isecs2 = 0.0, isecs3 = 0.0, isecs4 = 0.0, isecs5 = 0.0;

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
            case 1:
            {
            	system("cls");
            	menu_principalBurbuja();
            	int opcion;
            	opcion = tomarInt();
            	
            	switch(opcion){
            		case 1:{
            			int numeros[] = {42, 52, 78, 9, 7, 5, 3, 6, 4, 9, 1, 100, 29, 78, 200, 12, 65, 25, 300, 77};
            				int i, j, aux;
													
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 20; i++){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
						
							for (i = 0; i < 20; i++){
								for (j = 0; j < 20-1; j++){
									if(numeros[j] > numeros[j+1]){
										aux = numeros[j];
										numeros[j] = numeros[j+1];
										numeros[j+1] = aux;
									}
								}
							}
							
						
							cout<<"\t\t\t* ARREGLO ORDENADO: ";
							for (int i = 0; i < 20; i++)
							{
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
								
							system("pause>nul");
							
						break;
					}
					
					case 2:{
						int numeros[] = {101, 90, 80, 110, 45, 78, 99, 63, 78, 5, 6, 9, 8, 4, 50, 155, 178, 8, 6, 1};
						int i, j, aux;
            				
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 20; i++){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
						
							for (i = 0; i < 20; i++){
								for (j = 0; j < 20-1; j++){
									if(numeros[j] > numeros[j+1]){
										aux = numeros[j];
										numeros[j] = numeros[j+1];
										numeros[j+1] = aux;
									}
								}
							}
						
							cout<<"\t\t\t* ARREGLO ORDENADO: ";
							for (int i = 0; i < 20; i++)
							{
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							system("pause>nul");
							
						break;
					}
					
					case 3:{
						int numeros[] = {45, 52, 78, 9, 7, 5, 6, 4, 9, 101, 90, 80, 101, 45, 78, 99, 88, 77, 13, 1000};
						
						int i, j, aux;
            				
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 20; i++){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
						
							for (i = 0; i < 20; i++){
								for (j = 0; j < 20-1; j++){
									if(numeros[j] > numeros[j+1]){
										aux = numeros[j];
										numeros[j] = numeros[j+1];
										numeros[j+1] = aux;
									}
								}
							}
						
							cout<<"\t\t\t* ARREGLO ORDENADO: ";
							for (int i = 0; i < 20; i++)
							{
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							system("pause>nul");
							
						break;
					}
					
					case 4:{
						int numeros[] = {200, 300, 45, 7, 8, 6, 9, 13, 15, 24, 29, 20, 30, 0, 1, 79, 19, 500, 120, 600, 4};
						int i, j, aux;
            				
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 21; i++){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
						
							for (i = 0; i < 21; i++){
								for (j = 0; j < 21-1; j++){
									if(numeros[j] > numeros[j+1]){
										aux = numeros[j];
										numeros[j] = numeros[j+1];
										numeros[j+1] = aux;
									}
								}
							}
						
							cout<<"\t\t\t* ARREGLO ORDENADO: ";
							for (int i = 0; i < 21; i++)
							{
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							system("pause>nul");
							
						break;
					}
					
					case 5:{
						int numeros[] = {89, 55, 3, 7, 1, 22, 45, 63, 4, 89, 63, 55, 45, 22, 7, 4, 3, 1};
						
						int i, j, aux;
            				
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 18; i++){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
						
							for (i = 0; i < 18; i++){
								for (j = 0; j < 18-1; j++){
									if(numeros[j] > numeros[j+1]){
										aux = numeros[j];
										numeros[j] = numeros[j+1];
										numeros[j+1] = aux;
									}
								}
							}
						
							cout<<"\t\t\t* ARREGLO ORDENADO: ";
							for (int i = 0; i < 18; i++)
							{
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							system("pause>nul");
						break;
					}
					
					case 6:{
						
						break;
					}
				}
                break;
            }
            
            case 2:
            {
            	system("cls");
            	int opcion;
            	menu_principalInsercion();
            	opcion = tomarInt();
            	
        		switch(opcion){
            		case 1:{
            			int numeros[] = {42, 52, 78, 9, 7, 5, 3, 6, 4, 9, 1, 100, 29, 78, 200, 12, 65, 25, 300, 77};
            			int i, pos, aux;
	
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 20; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							for (i = 0; i < 20; ++i){
								pos = i;		
								aux = numeros[i];
								while((pos > 0) && (numeros[pos - 1] > aux)){
									numeros[pos] = numeros[pos -1];
									pos--;
								}
						
								numeros[pos] = aux;
							}
						
							cout<<"\t\t\t* ARREGLO ORDENADO ASCENDENTE: ";
							for (int i = 0; i < 20; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
						
								cout<<"\t\t\t* ARREGLO ORDENADO DESENDENTE: ";
							for (int i = 19; i >= 0; i--){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
													
							system("pause>nul");
							
						break;
					}
					
					case 2:{
						int numeros[] = {101, 90, 80, 110, 45, 78, 99, 63, 78, 5, 6, 9, 8, 4, 50, 155, 178, 8, 6, 1};
						int i, pos, aux;
	
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 20; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							for (i = 0; i < 20; ++i){
								pos = i;		
								aux = numeros[i];
								while((pos > 0) && (numeros[pos - 1] > aux)){
									numeros[pos] = numeros[pos -1];
									pos--;
								}
						
								numeros[pos] = aux;
							}
						
							cout<<"\t\t\t* ARREGLO ORDENADO ASCENDENTE: ";
							for (int i = 0; i < 20; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
						
								cout<<"\t\t\t* ARREGLO ORDENADO DESENDENTE: ";
							for (int i = 19; i >= 0; i--){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							system("pause>nul");
							
						break;
					}
					
					case 3:{
						int numeros[] = {45, 52, 78, 9, 7, 5, 6, 4, 9, 101, 90, 80, 101, 45, 78, 99, 88, 77, 13, 1000};
						
						int i, pos, aux;
	
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 20; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							for (i = 0; i < 20; ++i){
								pos = i;		
								aux = numeros[i];
								while((pos > 0) && (numeros[pos - 1] > aux)){
									numeros[pos] = numeros[pos -1];
									pos--;
								}
						
								numeros[pos] = aux;
							}
						
							cout<<"\t\t\t* ARREGLO ORDENADO ASCENDENTE: ";
							for (int i = 0; i < 20; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
						
								cout<<"\t\t\t* ARREGLO ORDENADO DESENDENTE: ";
							for (int i = 19; i >= 0; i--){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							system("pause>nul");
						break;
					}
					
					case 4:{
						int numeros[] = {200, 300, 45, 7, 8, 6, 9, 13, 15, 24, 29, 20, 30, 0, 1, 79, 19, 500, 120, 600, 4};
						int i, pos, aux;
	
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 21; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							for (i = 0; i < 21; ++i){
								pos = i;		
								aux = numeros[i];
								while((pos > 0) && (numeros[pos - 1] > aux)){
									numeros[pos] = numeros[pos -1];
									pos--;
								}
						
								numeros[pos] = aux;
							}
						
							cout<<"\t\t\t* ARREGLO ORDENADO ASCENDENTE: ";
							for (int i = 0; i < 21; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
						
								cout<<"\t\t\t* ARREGLO ORDENADO DESENDENTE: ";
							for (int i = 20; i >= 0; i--){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							system("pause>nul");
							
						break;
					}
					
					case 5:{
						int numeros[] = {89, 55, 3, 7, 1, 22, 45, 63, 4, 89, 63, 55, 45, 22, 7, 4, 3, 1};
						
						int i, pos, aux;
	
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 18; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							for (i = 0; i < 18; ++i){
								pos = i;		
								aux = numeros[i];
								while((pos > 0) && (numeros[pos - 1] > aux)){
									numeros[pos] = numeros[pos -1];
									pos--;
								}
						
								numeros[pos] = aux;
							}
						
							cout<<"\t\t\t* ARREGLO ORDENADO ASCENDENTE: ";
							for (int i = 0; i < 18; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
						
								cout<<"\t\t\t* ARREGLO ORDENADO DESENDENTE: ";
							for (int i = 17; i >= 0; i--){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							system("pause>nul");
							
						break;
					}
					
					case 6:{
						
						break;
					}
				}
	            	
                break;
            }
            
            case 3:
            {
            	system("cls");
            	menu_principalBurbuja();
            	int opcion;
            	opcion = tomarInt();
            	
            	switch(opcion){
            		case 1:{
            			
            			int numeros[] = {42, 52, 78, 9, 7, 5, 3, 6, 4, 9, 1, 100, 29, 78, 200, 12, 65, 25, 300, 77};
            				int i, j, aux;
            				double r;
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 20; i++){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							QueryPerformanceCounter(&t_ini);	
							for (i = 0; i < 20; i++){
								for (j = 0; j < 20-1; j++){
									if(numeros[j] > numeros[j+1]){
										aux = numeros[j];
										numeros[j] = numeros[j+1];
										numeros[j+1] = aux;
									}
								}
							}
							QueryPerformanceCounter(&t_fin);
						
							cout<<"\t\t\t* ARREGLO ORDENADO: ";
							for (int i = 0; i < 20; i++)
							{
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							secs = performancecounter_diff(&t_fin, &t_ini) * 1000.0;
                    		//cout<<"\t\t\tTiempo: "<<setprecision(4)<< fixed << secs <<" milisegundos"<<endl;;
							cout<<"\t\t\t\t*====================================================*\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t||\t  Execution Time: "<<setprecision(4)<< fixed << secs <<" milisegundos"<<"\t    ||\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t||\t\t\t\t\t\t    ||\n\t\t\t\t*====================================================*";
							
							system("pause>nul");
							
						break;
					}
					
					case 2:{
						
						int numeros[] = {101, 90, 80, 110, 45, 78, 99, 63, 78, 5, 6, 9, 8, 4, 50, 155, 178, 8, 6, 1};
						int i, j, aux;
            				
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 20; i++){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							QueryPerformanceCounter(&t_ini);	
							for (i = 0; i < 20; i++){
								for (j = 0; j < 20-1; j++){
									if(numeros[j] > numeros[j+1]){
										aux = numeros[j];
										numeros[j] = numeros[j+1];
										numeros[j+1] = aux;
									}
								}
							}
							QueryPerformanceCounter(&t_fin);
						
							cout<<"\t\t\t* ARREGLO ORDENADO: ";
							for (int i = 0; i < 20; i++)
							{
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							secs2 = performancecounter_diff(&t_fin, &t_ini)  * 1000.0 ;
							cout<<"\t\t\tTiempo: "<<setprecision(4)<< fixed << secs2 <<" milisegundos"<<endl;;
        
							system("pause>nul");
							
						break;
					}
					
					case 3:{
						
						int numeros[] = {45, 52, 78, 9, 7, 5, 6, 4, 9, 101, 90, 80, 101, 45, 78, 99, 88, 77, 13, 1000};
						
						int i, j, aux;
            				
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 20; i++){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							QueryPerformanceCounter(&t_ini);	
							for (i = 0; i < 20; i++){
								for (j = 0; j < 20-1; j++){
									if(numeros[j] > numeros[j+1]){
										aux = numeros[j];
										numeros[j] = numeros[j+1];
										numeros[j+1] = aux;
									}
								}
							}
							QueryPerformanceCounter(&t_fin);
						
							cout<<"\t\t\t* ARREGLO ORDENADO: ";
							for (int i = 0; i < 20; i++)
							{
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							secs3 = performancecounter_diff(&t_fin, &t_ini) * 1000.0;
							cout<<"\t\t\tTiempo: "<<setprecision(4)<< fixed << secs3 <<" milisegundos"<<endl;;
                    		
							system("pause>nul");
							
						break;
					}
					
					case 4:{
						
						int numeros[] = {200, 300, 45, 7, 8, 6, 9, 13, 15, 24, 29, 20, 30, 0, 1, 79, 19, 500, 120, 600, 4};
						int i, j, aux;
            				
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 21; i++){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							QueryPerformanceCounter(&t_ini);	
							for (i = 0; i < 21; i++){
								for (j = 0; j < 21-1; j++){
									if(numeros[j] > numeros[j+1]){
										aux = numeros[j];
										numeros[j] = numeros[j+1];
										numeros[j+1] = aux;
									}
								}
							}
							QueryPerformanceCounter(&t_fin);
						
							cout<<"\t\t\t* ARREGLO ORDENADO: ";
							for (int i = 0; i < 21; i++)
							{
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							secs4 = performancecounter_diff(&t_fin, &t_ini) * 1000.0;
							cout<<"\t\t\tTiempo: "<<setprecision(4)<< fixed << secs4 <<" milisegundos"<<endl;;
                    		
							system("pause>nul");
							
						break;
					}
					
					case 5:{
						
						int numeros[] = {89, 55, 3, 7, 1, 22, 45, 63, 4, 89, 63, 55, 45, 22, 7, 4, 3, 1};
						
						int i, j, aux;
						
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 18; i++){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							
							QueryPerformanceCounter(&t_ini);	
							for (i = 0; i < 18; i++){
								for (j = 0; j < 18-1; j++){
									if(numeros[j] > numeros[j+1]){
										aux = numeros[j];
										numeros[j] = numeros[j+1];
										numeros[j+1] = aux;
									}
								}
							}
							QueryPerformanceCounter(&t_fin);
						
							cout<<"\t\t\t* ARREGLO ORDENADO: ";
							for (int i = 0; i < 18; i++)
							{
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							secs5 = performancecounter_diff(&t_fin, &t_ini) * 1000.0;
							cout<<"\t\t\tTiempo: "<<setprecision(4)<< fixed << secs5 <<" milisegundos"<<endl;
							system("pause>nul");
							
						break;
					}
					
					case 6:{
						
						break;
					}
            }
            
            break;
        }
        
        case 4:{
        	system("cls");
            	
            	system("cls");
            	int opcion;
            	menu_principalInsercion();
            	opcion = tomarInt();
            	
        		switch(opcion){
            		case 1:{
            			
						int numeros[] = {42, 52, 78, 9, 7, 5, 3, 6, 4, 9, 1, 100, 29, 78, 200, 12, 65, 25, 300, 77};
            			int i, pos, aux;
	
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 20; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							QueryPerformanceCounter(&t_ini);	
							for (i = 0; i < 20; ++i){
								pos = i;		
								aux = numeros[i];
								while((pos > 0) && (numeros[pos - 1] > aux)){
									numeros[pos] = numeros[pos -1];
									pos--;
								}
						
								numeros[pos] = aux;
							}
							QueryPerformanceCounter(&t_fin);
						
							cout<<"\t\t\t* ARREGLO ORDENADO ASCENDENTE: ";
							for (int i = 0; i < 20; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
						
							cout<<"\t\t\t* ARREGLO ORDENADO DESENDENTE: ";
							for (int i = 19; i >= 0; i--){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							isecs = performancecounter_diff(&t_fin, &t_ini) * 1000.0;
							cout<<"\t\t\tTiempo: "<<setprecision(4)<< fixed << isecs <<" milisegundos"<<endl;;
							
							system("pause>nul");
							
						break;
					}
					
					case 2:{
							
						int numeros[] = {101, 90, 80, 110, 45, 78, 99, 63, 78, 5, 6, 9, 8, 4, 50, 155, 178, 8, 6, 1};
						int i, pos, aux;
	
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 20; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							QueryPerformanceCounter(&t_ini);	
							for (i = 0; i < 20; ++i){
								pos = i;		
								aux = numeros[i];
								while((pos > 0) && (numeros[pos - 1] > aux)){
									numeros[pos] = numeros[pos -1];
									pos--;
								}
						
								numeros[pos] = aux;
							}
							QueryPerformanceCounter(&t_fin);
						
							cout<<"\t\t\t* ARREGLO ORDENADO ASCENDENTE: ";
							for (int i = 0; i < 20; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
						
								cout<<"\t\t\t* ARREGLO ORDENADO DESENDENTE: ";
							for (int i = 19; i >= 0; i--){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							isecs2 = performancecounter_diff(&t_fin, &t_ini) * 1000.0;
							cout<<"\t\t\tTiempo: "<<setprecision(4)<< fixed << isecs2 <<" milisegundos"<<endl;
                    		
							system("pause>nul");
							
						break;
					}
					
					case 3:{
						
						int numeros[] = {45, 52, 78, 9, 7, 5, 6, 4, 9, 101, 90, 80, 101, 45, 78, 99, 88, 77, 13, 1000};
						
						int i, pos, aux;
	
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 20; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							QueryPerformanceCounter(&t_ini);	
							for (i = 0; i < 20; ++i){
								pos = i;		
								aux = numeros[i];
								while((pos > 0) && (numeros[pos - 1] > aux)){
									numeros[pos] = numeros[pos -1];
									pos--;
								}
						
								numeros[pos] = aux;
							}
							QueryPerformanceCounter(&t_fin);
						
							cout<<"\t\t\t* ARREGLO ORDENADO ASCENDENTE: ";
							for (int i = 0; i < 20; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
						
								cout<<"\t\t\t* ARREGLO ORDENADO DESENDENTE: ";
							for (int i = 19; i >= 0; i--){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							isecs3 = performancecounter_diff(&t_fin, &t_ini) * 1000.0;
							cout<<"\t\t\tTiempo: "<<setprecision(4)<< fixed << isecs3 <<" milisegundos"<<endl;;
                    		
                    	
							system("pause>nul");
						break;
					}
					
					case 4:{
						
						int numeros[] = {200, 300, 45, 7, 8, 6, 9, 13, 15, 24, 29, 20, 30, 0, 1, 79, 19, 500, 120, 600, 4};
						int i, pos, aux;
	
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 21; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							QueryPerformanceCounter(&t_ini);	
							for (i = 0; i < 21; ++i){
								pos = i;		
								aux = numeros[i];
								while((pos > 0) && (numeros[pos - 1] > aux)){
									numeros[pos] = numeros[pos -1];
									pos--;
								}
						
								numeros[pos] = aux;
							}
							QueryPerformanceCounter(&t_fin);
						
							cout<<"\t\t\t* ARREGLO ORDENADO ASCENDENTE: ";
							for (int i = 0; i < 21; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
						
							cout<<"\t\t\t* ARREGLO ORDENADO DESENDENTE: ";
							for (int i = 20; i >= 0; i--){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							isecs4 = performancecounter_diff(&t_fin, &t_ini) * 1000.0;
                    		cout<<"\t\t\tTiempo: "<<setprecision(4)<< fixed << isecs4 <<" milisegundos"<<endl;;
                    	
							system("pause>nul");
							
						break;
					}
					
					case 5:{
						
						int numeros[] = {89, 55, 3, 7, 1, 22, 45, 63, 4, 89, 63, 55, 45, 22, 7, 4, 3, 1};
						
						int i, pos, aux;
							
							cout<<"\n\n\t\t\t* ARREGLO DESORDENADO: ";
							for (int i = 0; i < 18; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							QueryPerformanceCounter(&t_ini);
							for (i = 0; i < 18; ++i){
								pos = i;		
								aux = numeros[i];
								while((pos > 0) && (numeros[pos - 1] > aux)){
									numeros[pos] = numeros[pos -1];
									pos--;
								}
						
								numeros[pos] = aux;
							}
							QueryPerformanceCounter(&t_fin);
						
							cout<<"\t\t\t* ARREGLO ORDENADO ASCENDENTE: ";
							for (int i = 0; i < 18; ++i){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
						
								cout<<"\t\t\t* ARREGLO ORDENADO DESENDENTE: ";
							for (int i = 17; i >= 0; i--){
								cout<<numeros[i]<<" ";
							}
						
							cout<<"\n\n";
							
							isecs5 = performancecounter_diff(&t_fin, &t_ini) * 1000.0;
                    		cout<<"\t\t\tTiempo: "<<setprecision(4)<< fixed << isecs5 <<" milisegundos"<<endl;;
							
							system("pause>nul");
							
						break;
					}
					
					case 6:{
						
						break;
					}
				}
			break;
		}
		
		case 5:{
			system("cls");
			int opcion;
			cout << "\n\n\t\t\t\t\t\t>> ORDENAMIENTO BURBUJA << ";
			cout << "\n\n\n\t\t\t\t\t    ||\t 1. METODO BURBUJA     ||"; 
			cout << "\n\t\t\t\t\t    ||\t 2. METODO INSERCION   ||"; 
			cout << "\n\t\t\t\t\t    ||\t 3. REGRESAR           ||"; 
			opcion = tomarInt();
			
			switch(opcion){
				case 1:{
					double suma;
					if(secs == 0.0 || secs2 == 0.0 || secs3 == 0.0 || secs4 == 0.0 || secs5 == 0.0){
						cout<<"\n\t\t\t\t>> PRIMERO DEBES REALIZAR TODAS LAS PRUEBAS RESPECTIVAS << ";
						Sleep(750);
						break;
					}else{
						suma = (secs + secs2 + secs3 + secs4 + secs5)/5;
						//cout<<"\n\t\t\t\t>> El tiempo promedio es: "<< setprecision(-1) << fixed << suma << " milisegundos" << endl;
						cout<<"\n\t\t\t\t\t>> El tiempo promedio es: "<<suma<< " Milisegundos";
						Sleep(5000);
					}
					
					break;
				}
				
				case 2:{
					double suma;
					if(isecs == 0.0 || isecs2 == 0.0 || isecs3 == 0.0 || isecs4 == 0.0 || isecs5 == 0.0){
						cout<<"\n\t\t\t\t>> PRIMERO DEBES REALIZAR TODAS LAS PRUEBAS RESPECTIVAS << ";
						Sleep(750);
						break;
					}else{
						suma = (isecs + isecs2 + isecs3 + isecs4 + isecs5)/5;
						//cout<<"\n\t\t\t\t>> El tiempo promedio es: "<< setprecision(-2) << fixed << suma <<  " milisegundos" << endl;
						cout<<"\n\t\t\t\t\t>> El tiempo promedio es: "<<suma <<" Milisegundos";
						Sleep(5000);
					}
					break;
				}
			}
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

void menu_principal(){
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t     >> MENU PRINCIPAL << ";
	cout << "\n\n"; 
	cout << "\n\t\t\t\t\t    ||\t 1. ORDENARNACION BURBUJA	||"; 
	cout << "\n\t\t\t\t\t    ||\t 2. ORDENARCION INSERCION	||"; 
	cout << "\n\t\t\t\t\t    ||\t 3. TIEMPO EJECUCION BURBUJA	||"; 
	cout << "\n\t\t\t\t\t    ||\t 4. TIEMPO EJECUCION INSERCION	||"; 
	cout << "\n\t\t\t\t\t    ||\t 5. COMPARACION DE TIEMPOS	||"; 
	cout << "\n\t\t\t\t\t    ||\t 6. Salir                  	||"; 
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

