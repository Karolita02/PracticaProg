#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// si quiero omitir el return 0 puedo colocar void main en  vez de int main
int ingreseLetra(char letra);

void main () { 

	char signo;
	leerSigno (&signo);
	imprimirComprobacion(comprobarSigno (signo));
	



	/*char caracter;
	printf("Ingrese una letra");
	scanf("%c",&caracter);
	printf ("%i",ingreseLetra(caracter));*/
	
	
}


