/*
	progScan.c
	Programa con ejemplos para utilizar scanf
	versión: 1_0
	autor: MBE
*/
#include <stdio.h>

int main(){
	long int matricula;    
	char nombre[30], hora[3]; 
	float calificacion1, calificacion2, promedio; 
	int grupo, salon, frecuencia_semana;  

	printf("Dame la matricula del alumno \n");  
	scanf("%ld",&matricula);   

	printf("Dame el nombre del alumno \n");  
	scanf("%s",nombre);   

	printf("Dame la primer calificacion \n");  
	scanf("%f", &calificacion1); 

	printf("Dame el grupo del alumno \n", grupo);  
	scanf("%d", &grupo);  

	/*impresión de las variables*/
	printf("la matricula del alumno es %ld \n", matricula);  
	printf("el nombre del alumno es %s \n", nombre);  
	printf("la calificacion del alumno es %f \n", calificacion1);  
	printf("el grupo del alumno es %d \n", grupo);  

	return 0;
}