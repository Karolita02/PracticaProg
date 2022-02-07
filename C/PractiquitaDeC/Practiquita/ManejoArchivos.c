#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char texto[150], enumerar[200];
    int x = 1;
    FILE *archivo = fopen("texto.txt", "w+");
    FILE *temporal = fopen("textito.txt", "w+");

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un texto ");
        fgets(texto, 150, stdin);
        if (i == 4)
        {
            texto[strcspn(texto, "\n")] = 0;
        }

        fputs(texto, archivo);
    }
    rewind(archivo);
    while (!feof(archivo))
    {

        fgets(texto, 150, archivo);
        sprintf(enumerar, "%d) ", x);
        strcat(enumerar, texto);
        fputs(enumerar, temporal);
        x++;
    }
    rewind(archivo);
    rewind(temporal);
    while (!feof(temporal))
    {
        fgets(enumerar, 200, temporal);
        fputs(enumerar, archivo);
    }
    fclose(archivo);
    fclose(temporal);
    remove("textito.txt");
    return 0;
}
// te amo mi amor lo hiciste genial mi vida ><