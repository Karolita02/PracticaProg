#include <stdio.h>
#include <stdlib.h>
//Hacer un programa que calcule el factorial de un n�mero
void practica6 (){
	int numF, resul;
	resul=1;
	printf("Ingrese el n�mero deseado");
	scanf("%i",&numF);
	while(numF>=1){
	resul*= numF;
	numF--;
	}
	printf("Su factorial es %i",resul);

}

