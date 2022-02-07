
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int pTotalAleatorio();
int pObtenidoAleatorio(int ptotal);
float obtenerNota(int pTotal, int pObtenido);
char obtenerNotaLetra(float nota);

/*
    vamos a crear una lista de variables en la q se almacene,
    el puntaje obtenido de un estudiante, el puntaje total del examen
    ,la nota en base 100 y la nota en letra.

    considere que una profesora es la q utilizara este programa
    esta profesora puede tener una cantidad variable de estudiantes
    ademas esta profesora dio clases a un salon en especifico por lo que se debe
    almacenar el salon en el q dio clases.

    como es un examen cada salon va a tener un examen con un puntaje total distinto, asi que los
    estudiantes del mismo salon van a tener el mismo puntaje total, pero tendran un puntaje obtenido
    distinto, asi que este puntaje obtenido generelo aleatoriamente, y si quiere facilitarse la vida 
    de hacer cada puntaje total distinto use tambien la generacion aleatoria :3

    solo te van a dar puntaje objetido y puntaje total, tienes q calcular promedio, que es una nota en base a 100
    y la nota en letra

    al final se tienen q mostrar todooos los datos de los estudiantes
*/

typedef struct
{
    int pObtenido;
    int pTotal;
    float nota;
    char notaLetra;
    char salon[8];
} est;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int cantEst;
    char salon[8];
    printf("Bienvenido a nuestro programita, cuantos alumnos tiene? : ");
    do
    {
        scanf("%i", &cantEst);
        if (cantEst < 1)
        {
            printf("Ingrese una cantidad correcta de alumnos\n");
        }

    } while (cantEst < 1);

    printf("Ingrese el salon: ");
    scanf("%s", salon); // oye cosita si vas a leer un string pones %s y no lleva &

    est estudiante[cantEst];

    int pTotal = pTotalAleatorio();

    for (int x = 0; x < cantEst; x++)
    {
        strcpy(estudiante[x].salon, salon);
        estudiante[x].pTotal = pTotal;
        estudiante[x].pObtenido = pObtenidoAleatorio(pTotal);
        estudiante[x].nota = obtenerNota(estudiante[x].pTotal, estudiante[x].pObtenido);
        estudiante[x].notaLetra = obtenerNotaLetra(estudiante[x].nota);
    }
    // ejecuta otra vez el mio ><
    for (int x = 0; x < cantEst; x++)
    {
        // aki mi amor que veo a este es el tuyo xD JAJJAJJ
        printf("\nEl estudiante %i del salon %s", x, estudiante[x].salon); // vite vite te confundiste con salon y salon vite JAJJAa pos siiii :C siempre tienes la razon me pasa por no hacer caso JAJAJ asi es JAJAJAJAjJ asies JAJAJAJAja ah ya XD te da risa shi >< eres muy tierno la vedad de vedad? >< shiii eres mii ternuritaa ><ta bien >< sigamos >< ta bien
        printf("\nObtuvo en el examen %i/%i ", estudiante[x].pObtenido, estudiante[x].pTotal);
        printf("\nSu nota es: %.2f = %c", estudiante[x].nota, estudiante[x].notaLetra);
    }
    return 0;
}

int pTotalAleatorio()
{

    int pTotal;
    pTotal = 50 + rand() % (150 - 50 + 1);
    return pTotal;
}

int pObtenidoAleatorio(int ptotal)
{
    int pObtenido;
    pObtenido = rand() % (ptotal + 1);
    return pObtenido;
}

float obtenerNota(int pTotal, int pObtenido)
{
    return (float)pObtenido / (float)pTotal * 100;
}

char obtenerNotaLetra(float nota)
{

    if (nota >= 91)
    {
        return 'A';
    }

    else if (nota >= 81)
    {
        return 'B';
    }
    else if (nota >= 71)
    {
        return 'C';
    }
    else if (nota >= 61)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}