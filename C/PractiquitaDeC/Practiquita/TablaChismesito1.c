#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <time.h>
//arreglo[enumeracion][nombre completo(4)][Fecha nacimiento(3)][Figura Favorita(1)][Medidas Lados(2)][Hijo unico?(1)]
typedef struct
{
    int a;
    char primerNombre[20];
    char segundoNombre[20];
    char primerApellido[20];
    char segundoApellido[20];
    int dia;
    char mes[20];
    int temporadaAnual;
    char figura[20];
    float base;
    float altura;
    bool esHijoUnico;

} datos;
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int enumeracion;
    printf("A cuantas personas le hará la encuesta?: ");
    scanf("%d", &enumeracion);
    datos persona[enumeracion];

    for (int a = 0; a < enumeracion; a++)
    {
        printf("Ingrese el nombre completo: ");
        scanf("%s %s %s %s", persona[a].primerNombre, persona[a].segundoNombre, persona[a].primerApellido, persona[a].segundoApellido);
        printf("Ingrese su fecha de nacimiento: ");
        scanf("%d %s %s", &persona[a].dia, persona[a].mes, persona[a].temporadaAnual);
        printf("Ingrese su figura favorita: ");
        scanf("%s", persona[a].figura);
    }

    return 0;
}

void enumerarPersonas(datos persona[], int enumeracion)
{
    for (int i = 0; i < enumeracion; i++)
    {
        persona[i].a = i + 1;
    }
}

float generarBase()
{
}

float generarAltura()
{
}