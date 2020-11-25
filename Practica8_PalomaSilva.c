/* 	Práctica#8                             Silva Rodríguez Paloma Mariel
	Fecha de entrega: 25 de Noviembre de 2020*/
//						Estructuras de control

//1. Algoritmo para determinar si un número es positivo o negativo. 

//Declaración de librerías
#include<stdio.h>

//Declaración de variables globales
//Uso de variables para determinar el signo del número.

float n;

//Declaración de función: Función principal

int main(){
	//Bloque de instrucciones 
	/*Este bloque es para ingresar el número y analizarlo para 
	saber si es positivo o negativo*/
	
	printf("Ingrese el número: \n");
	scanf("%f",&n);
	if (n>0){
		printf("El número %f es positivo",n);
	}
	else {
		if (n<0){
			printf("El número %f es negativo",n);
		}
		else {
			printf("El número %f es cero",n);
		}
		
	}
	return 0;
}	



