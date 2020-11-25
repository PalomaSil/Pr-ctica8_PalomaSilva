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





/*2.Algoritmo para determinar cuánto se debe pagar por equis cantidad de
lápices considerando que si son 1000 o más el costo es de 85¢, de lo 
contrario, el precio es de 90¢. */

//Declaración de librerías
#include<stdio.h>

//Declaración de variables globales
//Uso de variables: Saber cuántos lápices se comprarán y calcular precio
int L;
double res;

//Declaración de función principal
int main(){
	//Bloque de instrucciones
	/*Este bloque es para ingresar la cantidad de lápices a comprar y de ahí
	saber el total de la compra*/
	
	printf("Escribe la cantidad de lápices por comprar en número entero\n");
	scanf("%i",&L);
	res = L >= 1000 ? L*0.85 : L*0.90;
		printf("El total a pagar es de:\n $ %f",res);
	return 0;
}





/*3.-Un almacén tiene una promoción: a todos los trajes que tienen un precio superior a 
$2500.00 se les aplicará un descuento de 15 %, a todos los demás se les aplicará sólo 
8 %. Realice un algoritmo para determinar el precio final que debe pagar una persona por
comprar un traje y de cuánto es el descuento que obtendrá.*/
 
//Declaración de librerías
#include<stdio.h>

//Declaración de variables globales 
//Uso de variables: Saber precio del traje final y con descuento

float ptraje;
float pfinal;

//Declaración de función principal

int main(){
	
	//Bloque de instrucciones
	/*Este bloque es para ingresar precio inicial del traje y saber el precio final y con 
	descuento*/
	
	printf("Escribe el precio del traje\n $ ");
	scanf("%f",&ptraje);
	if (ptraje>2500){
		pfinal=ptraje-(ptraje*0.15);
		printf("El precio final del traje con descuento del 15 porciento es de:\n $ %f",pfinal);
	}
	else{
		pfinal=ptraje-(ptraje*0.08);
		printf("El precio final del traje con descuento del 8 porciento es de:\n $ %f",pfinal);
	}
	return 0;
}





//4.-Se requiere determinar cuál de tres cantidades proporcionadas es la mayor

//Declaración de librerías
#include<stdio.h>

//Declaración de variables globales
//Uso de variables: determinar la cantidad mayor

float E;
float P;
float M;

//Declaración de función principal

int main(){
	
	//Bloque de instrucciones
	//Este bloque es para ingresar las 3 cantidades y ver cúal es la mayor
	
	printf("Escribe el valor de la primera cantidad");
	scanf("%f",&E);
	printf("Escribe el valor de la segunda cantidad");
	scanf("%f",&P);
	printf("Escribe el valor de la tercera cantidad");
	scanf("%f",&M);	
	if(E>P){
		if (E>M){
			printf("La cantidad mayor es: %f",E);
		}
		else {
			printf("La cantidad mayor es: %f",M);
		}
	}
	else {
		if(P>M){
			printf("La cantidad mayor es: %f",P);
		}
		else {
			printf("La cantidad mayor es: %f",M);
		}
	}
	return 0;
}






/*5.-El director de una escuela está organizando un viaje de estudios, y requiere determinar cuánto debe cobrar a
cada alumno y cuánto debe pagar a la compañía de viajes por el servicio. La forma de cobrar es la siguiente: 
si son 100 alumnos o más, el costo por cada alumno es de $65.00; de 50 a 99 alumnos, el costo es de $70.00, de 30 
a 49, de $95.00, y si son menos de 30, el costo de la renta del autobús es de $4000.00, sin importar el número de 
alumnos. Realice un algoritmo que permita determinar el pago a la compañía de autobuses y lo que debe pagar cada 
alumno por el viaje.*/


//Declaración de librerías
#include<stdio.h>

//Declaración de variables globales
//Uso de variables: determinar costo por alumno 
int alumnos;
float pf;

//Declaración de la función principal

int main(){
	
	//Bloque de instrucciones
	//En este bloque se ingresará la cantidad de alumnos para determinar el pago final
	
	printf("Escribe en número entero la cantidad de niños que viajaran\n");
	scanf("%i",&alumnos);
	if(alumnos>=100){
		pf=alumnos*65;
		printf("Siendo el costo por alumno de $65.00, el pago final es de: $ %f",pf);
	}
	else {
		if (alumnos<=99 & alumnos>=50){
			pf=alumnos*70;
			printf("Siendo el costo por alumno de $70.00, el pago final es de: $ %f",pf);
		}
		else{
			if (alumnos>=30 & alumnos<=49){
				pf=alumnos*95;
				printf("Siendo el costo por alumno de $95.00, el pago final es de: $ %f",pf);
			}
			else{
				if(alumnos<30){
					printf("El costo de la renta del autobus es de: $4000.000");
				}
			}
		}
	}
	return 0;
}
