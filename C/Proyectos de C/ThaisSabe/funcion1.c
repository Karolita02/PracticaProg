#include <stdio.h>
#include <stdlib.h>
void ParOImpar(){
	int numero;
	printf("Ingrese un numero\n");
	scanf("%i",&numero);
	while (numero!=0){
		if(numero%2==0){
			printf("Es un numero par\n");	
			
		}
		else{
			printf("No es un numero par\n");
			
		}
	printf("Ingrese un numero\n");
	scanf("%i",&numero);
	}

}


void LeerYSumarNumeros(){
	float num, sumaDeNum;
	sumaDeNum=0;
	printf("Ingrese el numero\n");
	scanf("%f",&num);
	while (num!=-1){
		sumaDeNum+= num;
		printf("Ingrese otro numero\n");
		scanf("%f",&num);
	}
	printf("La suma de los numeros ingresados es de: %.2f",sumaDeNum);
}



void Pedir3Numeros(){
	float num1, num2, num3;
	printf("Ingrese un numero\n");
	scanf("%f",&num1);
	while(num1<0 || num1>100){
		printf("Ingrese otro valor1");
		scanf("%f",&num1);
	}
	printf("Ingrese un numero\n");
	scanf("%f",&num2);
	while(num2<0 || num2>100){
		printf("Ingrese otro valor2");
		scanf("%f",&num2);
	}
	printf("Ingrese un numero\n");
	scanf("%f",&num3);
	while(num3<0 || num3>100){
		printf("Ingrese otro valor3");
		scanf("%f",&num3);
	}
}


void Pedir3NumerosVCorta(){
	int x, num;
	for (x=0;x<3; x++){
	num=101;
	while(num < 0 || num > 100){
		printf("Ingrese un numero");
		scanf("%i",&num);	
	}
	printf("%i",num);
	}
}







void PedirNumerosCorta(){
	float num;
	
	
}

//alt + 91 corchete 

void arreglos(){
	int valor;
	printf("Ingrese el numero deseado");
	scanf("%i",&valor);
	int numeros[valor];
}

//crear funciones que me pidan el arreglo con el limite del arreglo 
// yo lo tengo que llenar 


void PromedioDeUnArreglo(){
	int valor,promedio,x;
	printf("Ingrese el valor del arreglo ");
	scanf("%i",&valor);
	int arreglo[valor];
	for (x=0; x<valor; x++){
		arreglo[x]=x+5;		
	}
	int sumaArreglos;
	sumaArreglos=0;
	for(x=0; x<valor; x++){
	sumaArreglos+=arreglo[x];	
	}
	promedio=sumaArreglos/valor;
	printf("El promedio es %i ",promedio);
}






