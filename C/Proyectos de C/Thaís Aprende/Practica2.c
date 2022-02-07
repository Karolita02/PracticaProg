#include <stdio.h>
#include <stdlib.h>
void practica2 (){
	//Mientras se escribe while, para for , si if, sino else, segun sea switch  colocar case y al final break, default de otro modo
	//el & solo se usa para asignar valores cuando se lee 
// fn alt 60 menor que 
// fn alt 62 mayor que 
// fn alt 92 / invertido 
	int contar, limite;
	contar=1;
	printf("Introduzca el límite");
	scanf("%i",&limite);
	while (contar<=limite)
	{
		printf("%i ",contar);
		contar++;
	}
	contar--;
	printf("\n");
	for(contar;contar>=1;contar--)
	{
		printf("%i ",contar);
	}
	
}
