#include <stdio.h>
#include <stdlib.h>
//Encontrar el valor mayor en un arreglo de 20 elementos
void main (){
    int arreglo[20],valor,x,numMayor;
    printf("Ingrese un valor");
    scanf("%i",&arreglo[0]);
     numMayor=arreglo[0];

    for (x=1; x < 20; x++)
    {
        printf("Ingrese un valor");
        scanf("%i",&valor);
        arreglo[x]=valor;
         if(arreglo[x]>numMayor){
            numMayor=arreglo[x];

        }  
     }
     printf("El numero mayor es: %i",numMayor);
    system("pause");
    }
    
