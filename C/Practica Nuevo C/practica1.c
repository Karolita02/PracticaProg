#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// en una funcion pedir un numero entero, una que sume , una que muestre la suma, en el main
// que en el main solo esten las funciones. 
int pedirNumero();
int hacerSuma (int num1, int num2);
void mostrarSuma(int num1, int num2, int suma);


int main(int argc, char *argv[]) {
	int num1,num2,suma;
	num1= pedirNumero();
	num2= pedirNumero();
	suma = hacerSuma (num1,num2);
	mostrarSuma(num1,num2, suma);
	
	return 0;

}




int pedirNumero()
{	int num;
	printf("Buenassss, ingrese un numero por favor: ");
	scanf("%i",&num);
	return num;
}


int hacerSuma (int num1, int num2)
{
	return num1+num2;
}


void mostrarSuma(int num1, int num2, int suma)
{
	printf("%i + %i = %i",num1,num2,suma);
}
	