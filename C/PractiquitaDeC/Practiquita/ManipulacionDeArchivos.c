#include "stdio.h"
#include "stdlib.h"
#include "Lib/Prog1/MasUsados.h"
#include "Lib/Prog1/Funciones.h"
#include "string.h"
#include "stdbool.h"
// variable FILE que necesita siempre un puntero
// ejemplo FILE *hola, hola es un puntero de tipo FILE

// para abrir un archivo se usa el comando fopen("nombre del archivo a abrir.algo","modo en q se va a abrir");

// existen como 3 modos diferentes, r = modo leer, w = modo crear archivo y escribir, a = modo agregar texto al final
// estos modos tienen modos secundarios, r+ = modo leer y escribir, w+ = modo crear archivo , leer y escribir
// y el a+ = modo leer y agregar texto al final

// cada vez que usas un comando ya sea fscanf o fprintf o fgetc o fgets o fputc o fputs el cursor va a ir moviendose

// caracter EOF para indicar el fin del archivo se usa con el fgetc para saber si ya acabo el archivo
// feof es una funcion que regresa true cuando llega al final del archivo, se suele usar para las cadenas

// el fscanf es para leer con formato y el fprintf es para imprimir con formato

// para poner el cursor desde el inicio usaremos rewind()

// fclose para cerrar el archivo

// no puedes hacer ninguna de estas 2 funciones de abajo si el archivo esta abierto
// remove("nombre del archivo.algo") para borrar
// rename("nombre del archivo.algo","nuevo nombre.algo") para renombrar

// leer colores hasta detectar la palabra fin, y almacenarlos enumeradamente en un archivo
int main(int argc, char const *argv[])
{
    FILE *colores;
    FILE *baseDatosColores;
    bool esColor = true;
    int num = 1;
    char color[50], temp[20];
    baseDatosColores = fopen("BaseDeDatosColores.txt", "r");
    colores = fopen("colores.txt", "w");
    while (true)
    {
        do
        {
            if (!esColor)
                printf("INGRESE UN COLOR VALIDO\n");
            thLeerCadena(color, "Ingrese un color: ");
            rewind(baseDatosColores);
            while (!feof(baseDatosColores))
            {
                fscanf(baseDatosColores, "%[^\n]\n", temp); // regla de oro cuando se leen cadenas %[^\n] , %s para imprimir
                if (strcmpi(color, temp) == 0)
                {
                    esColor = true;
                    break;
                }
                esColor = false;
            }

        } while (!esColor);

        if (strcmpi(color, "fin") != 0)
            fprintf(colores, "%d) %s \n", num++, color);
        else
            break;
    }
    fclose(baseDatosColores);
    fclose(colores);
    return 0;
}
