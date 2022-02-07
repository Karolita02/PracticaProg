#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void main()
{
    //debes de imprimir la lista de opciones, luego permitir la seleccion de una de esas, y por ultimo realizar lo que se selecciono anteriormente
}

//funcion mostrar la lista de las cosas disponibles
void MostrarLista()
{

    printf("1.Decir hola\n");
    printf("2.Pedir nombre\n");
    printf("3.Imprimir nombre\n");
    printf("4.Sumar\n");
    printf("5.Restar\n");
    printf("6.Multiplicar\n");
    printf("7.Dividir\n");
    printf("8.Contar hasta 10\n");
}

// funcion seleccionar la opcion de la lista

int Opcion()
{
    int opcion;
    printf("\nSeleccione el numero correspondiente a la accion que desea realizar");
    scanf("%i", &opcion);
    return opcion;
}

//funcion sumar
void Suma(int val1, int val2)
{
    pedirValores(&val1, &val2);
    printf("\n%i + %i = %i+%i", val1, val2, val1 + val2);
}

void pedirValores(int *val1, int *val2)
{
    printf("Ingrese dos numeros");
    scanf("%i %i", &*val1, &*val2);
}

// funcion restar
void Resta(int val1, int val2)
{
    pedirValores(&val1, &val2);
    printf("\n%i - %i = %i-%i", val1, val2, val1 - val2);
}

// funcion multiplicar
void Multiplicacion(int val1, int val2)
{
    pedirValores(&val1, &val2);
    printf("\n%i x %i = %i*%i", val1, val2, val1 * val2);
}

// funcion dividir
void Division(int val1, int val2)
{
    pedirValores(&val1, &val2);
    if (val2 == 0)
    {
        printf("\nNo es posible realizar la division");
    }

    else
    {
        printf("\n%i / %i = %i/%i", val1, val2, val1 / val2);
    }
}

// funcion decir hola!
void DecirHola()
{
    printf("\nHola!");
}

// funcion funcion pedir nombre sin olvidar el fflush(stdin); y %[^\n]%*c para leer
void PedirNombre(char nombre[20])
{
    printf("\nIngrese un nombre");
    fflush(stdin);
    scanf("%[^\n]%*c", &nombre);
}

// funcion para imprimir el nombre
void ImprimirNombre(char nombre)
{
    printf(nombre);
}

// funcion para contar hasta 10
void Contar10()
{
    int x;
    for (x = 1; x <= 10; x++)
    {
        printf("%i\n", x);
    }
}

// funcion de bucle (aqui se debe hacer el bucle para que cuando se realize algo de la lista se pueda volver a elegir otra cosa despues)

void Bucle()
{

    do
    {
        printf("Desea realizar otra accion")
    } while (/* condition */);
}

int respBucle(int)
{
}


