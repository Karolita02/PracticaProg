#include <stdio.h>
#include <stdlib.h>
//problema 1 
void AlgoritmoPrincipal();
void main(){
     AlgoritmoPrincipal();


}
void AlgoritmoPrincipal(){
    int limite;
    printf("Ingrese el limite del vector");
    scanf("%i",&limite);
    int vector[limite];
    leerYAlmacenarNums(vector,limite);
}

void leerYAlmacenarNums(int *vector, int limite)
{
    int h, valVector;
    for ( h = 0; h < limite; h++)
    {
        printf("Ingrese el valor del vector");
        scanf("%i",&valVector);
        vector[h]=valVector;
    }   
}
