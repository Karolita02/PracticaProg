#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// int: entero, float: flotante dos tipos de flotante y entero 
// long: entero para num grandes    double: flotante mas grandes char: caracter
// printf es para imprimir, scanf es para leer 
// para leer debo colocar comilla doble, simbolo de porcentaje y primera letra de la variable
void conociendoLasVariables() { 
int numero;
float numeroFlotante;
long numeroMasGrande;
double flotanteMayor;
char caracter;
printf("Ingrese un número entero, uno flotante y un caracter");
scanf("%i %f %l %d %c",&numero,&numeroFlotante,&numeroMasGrande,&flotanteMayor,&caracter);
numeroMasGrande= numero+(int)numeroFlotante;
flotanteMayor= numero*numeroFlotante;
caracter=numero;
printf("El número grande contiene %l" "El número flotante mayor contiene %d" "El caracter contiene %c",numeroMasGrande,flotanteMayor,caracter);

}
