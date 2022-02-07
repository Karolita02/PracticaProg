/**
 * @file PractiquitaPunteros.c
 * @author Thaís Samudio
 * @brief
 * @version 0.1
 * @date 2021-11-25
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "stdio.h"
#include "stdlib.h"

void sumar(int *num1, int *num2, int *respuesta)
{
    *respuesta = *num1 + *num2;
}

int *arreglo(int num1,int num2)
{
    int static arreglo[1]; // static sirve para que las variables creadas en una funcion sigan existiendo aun cuando sale de la funcion

    arreglo[0]=num1;
    arreglo[1]=num2;
    return arreglo;     
}
void main()
{
    int num1=5,num2=10,*arreglito;
    arreglito =arreglo(num1,num2);
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n",arreglito[i]);
    }   
}



// hacer una funcion que pida 2 numeros pero regrese un arreglo de numeros con esos numeros