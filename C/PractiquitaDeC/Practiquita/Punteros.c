#include "stdio.h"
#include "stdlib.h"
#include "Lib/Prog1/MasUsados.h"
#include "time.h"

// un puntero no puede almacenar, los punteros apuntan a un espacio en memoria a diferencia de las variables que crean un espacio en memoria para poder almacenar un valor
// si usas solo el nombre del puntero y le asignas algo, le estas asignando una direccion de memoria
// si usas un asterisco seguido del nombre del puntero, le asignas un valor a la direccion de memoria vinculada

// crear una funcion que multiplique por 2 cualquier valor que reciba sin importar si es una variable sencilla o un arreglo (la funcion no debe recibir el limite del arreglo)

// sizeof int 4 bits sizeof int[] 20 bits
// sizeof alumnos(arreglo)/sizeof alumnos[0](un alumno)=tamaño del arreglo

// si el puntero solo tiene nombre=direccion de memoria
// si el puntero tiene el asterisco = representa el valor de la variable
void multiplicar(int *valor);
void leerInt(int *num);
void leerFloat(float *num);
void leerChar(char *caracter);

struct Estudiante
{
    int numFav;
    float promUni;
    char letraFav;
};

int main(int argc, char const *argv[])
{
    thSemilla;
    struct Estudiante alumnos[thNumAleatorio(1, 100)];

    for (int i = 0; i < thLimiteArreglo(alumnos); i++)
    {
        leerInt(&alumnos[i].numFav);
        leerFloat(&alumnos[i].promUni);
        leerChar(&alumnos[i].letraFav);
    }
    for (int i = 0; i < thLimiteArreglo(alumnos); i++)
    {
        printf("Su numero favorito es: %3i, su promedio de la Universidad es: %6.2f y su letra favorita es %2c\n", alumnos[i].numFav, alumnos[i].promUni, alumnos[i].letraFav);
    }

    return 0;
}

void multiplicar(int *valor)
{
    *valor *= 2;
}

void leerInt(int *num)
{
    *num = thNumAleatorio(1, 400);
}

void leerFloat(float *num)
{
    *num = thNumAleatorio(1, 400);
}
void leerChar(char *caracter)
{
    *caracter = thNumAleatorio(1, 400);
}
