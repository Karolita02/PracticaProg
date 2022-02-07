#include <stdio.h>
#include <stdlib.h>
// funcion que lea el tamaño del arreglo listo
// funcion que llene el arreglo  listo 
// funcion imprimir el arreglo 
// funcion algoritmo 
// alt+91 corchete al+92 back slash 


void CrearArreglo(); 
void main(){
    CrearArreglo();
    CrearArreglo();
  
}

int leerArreglo(){
    int valor;
    printf("Ingrese el valor del arreglo");
    scanf("%i",&valor);
     return valor;
} 


void llenarArreglo (int *arreglo, int valor){
    int x;
    for (x=0; x<valor; x++){
     arreglo[x]=x+2;
    }
}
 
void imprimirArreglo(int *arreglo, int valor){
    int x;
    for (x=0; x<valor; x++){
     printf("%i\n",arreglo[x]);
    }  
    
}



void CrearArreglo(){
    int valor;
    valor=leerArreglo();
    int arreglo[valor];
     llenarArreglo (arreglo,valor);
     imprimirArreglo(arreglo,valor);
     system("pause");
}


