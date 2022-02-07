//arreglo[enumeracion][nombre completo(4)][Fecha nacimiento(3)][Figura Favorita(1)][Medidas Lados(2)][Hijo unico?(1)]
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <time.h>

typedef struct Tablita
{
    //enumeracion
    int identificacion;
    //nombre completo
    char primerNombre[20];
    char segundoNombre[20];
    char primerApellido[20];
    char segundoApellido[20];
    //Fecha nacimiento
    int dia;
    char mes[20];
    int tiempoAnual;
    //Figura Favorita
    char figura[20];
    //Medidas Lados
    float base;
    float altura;
    //hijo unico?
    bool esHijoUnico;
} tabla;

int PersonasAEncuestar();
void IngresarNombreCompleto(tabla persona[], int cantidad);
void EnumerarPersonas(tabla persona[], int cantidad);
void IngresarFechaDeNacimiento(tabla persona[], int cantidad);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int cantidad = PersonasAEncuestar();
    tabla persona[cantidad];
    EnumerarPersonas(persona, cantidad);
    for (int i = 0; i < cantidad; i++)
    {
        IngresarNombreCompleto(persona, i);
        IngresarFechaDeNacimiento(persona, i);
    }

    return 0;
}

int PersonasAEncuestar()
{
    system("cls");
    int cantidad;
    printf("Ingrese la cantidad de personas a encuestar: ");
    scanf("%d", &cantidad);
    return cantidad;
}
// te toy viendo XD andas por aki yo? nanana vine a ver si tabas aun xd
// okay te perdono, me salgo pue XD ntpNA pa que xd xdxd pa no gastarte data po gusto JAJAJ
void EnumerarPersonas(tabla persona[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        persona[i].identificacion = i + 1;
    }
}

void IngresarNombreCompleto(tabla persona[], int i)
{

    printf("Ingrese su nombre completo: ");
    scanf("%s %s %s %s", persona[i].primerNombre, persona[i].segundoNombre, persona[i].primerApellido, persona[i].segundoApellido);
}

void IngresarFechaDeNacimiento(tabla persona[], int i)
{
    printf("Ingrese su fecha de nacimiento (ejemplo: 20 junio 2003): ");
    scanf("%d %s %d", persona[i].dia, persona[i].mes, persona[i].tiempoAnual);
}

void IngresarFiguraFavorita(tabla persona[], int i)
{
    printf("Ingrese su figura favorita: ");
    scanf("%s", persona[i].figura);
}
