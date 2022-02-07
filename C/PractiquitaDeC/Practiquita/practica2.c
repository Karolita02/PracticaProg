#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int GenerarTotal();
int GenerarObtenido();
float CalcularPromedio(int obtenido, int total);
char NotaLetra(float promedio);

typedef struct
{
    int obtenido;
    int total;
    float promedio;
    char letra;
    char salon[20];
} est;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    char salon[20];
    printf("En que salon usted dio clases?: ");
    // para leer exactamente 20 caracteres jejeje
    fgets(salon, sizeof salon, stdin);
    // scanf("%s", salon);
    int cantidad;
    printf("ingrese la cantidad de alumnos: ");
    do
    {

        scanf("%i", &cantidad);
        if (cantidad < 1)
        {
            printf("ingrese una cantidad correcta: ");
        }
    } while (cantidad < 1);

    est estudiante[cantidad];

    int total = GenerarTotal();
    for (int i = 0; i < cantidad; i++)
    {
        strcpy(estudiante[i].salon, salon);
        estudiante[i].total = total;
        estudiante[i].obtenido = GenerarObtenido(estudiante[i].total);
        estudiante[i].promedio = CalcularPromedio(estudiante[i].obtenido, estudiante[i].total);
        estudiante[i].letra = NotaLetra(estudiante[i].promedio);
    }

    for (int i = 0; i < cantidad; i++)
    { // aka mi amor >< ta bien><
        printf("\n\nEstudiante %i del salon %s", i + 1, estudiante[i].salon);
        printf("Saco en el Examen: %i/%i", estudiante[i].obtenido, estudiante[i].total);
        printf("\nSu nota es: %.2f %c", estudiante[i].promedio, estudiante[i].letra);
    }

    return 0;
}

int GenerarTotal()
{

    int total;

    total = 10 + rand() % (1000 - 10 + 1);

    return total;
}

int GenerarObtenido(int total)
{

    int obtenido = rand() % (total + 1);
    return obtenido;
}

float CalcularPromedio(int obtenido, int total)
{
    return (float)obtenido / (float)total * 100;
}

char NotaLetra(float promedio)
{
    if (promedio >= 91)
    {
        return 'A';
    }
    else if (promedio >= 81)
    {
        return 'B';
    }
    else if (promedio >= 71)
    {
        return 'C';
    }
    else if (promedio >= 61)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}