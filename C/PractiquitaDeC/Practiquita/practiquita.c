#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "Lib/Prog1/MasUsados.h"
bool monitos(bool risaMonito1, bool risaMonito2);
int suma(int valor1, int valor2);
int dif21(int num);
bool lorito(bool habla, int hora);
bool es_10(int num1, int num2);
bool cuantoFaltaPara100_200(int num);
bool masOmeno(int num1, int num2, bool parametro);
void main()
{
    bool parametro = true;
    printf(masOmeno(1, -1, parametro) ? "true" : "false");
}
// para booleanos si es true devuelve 1 y si es false 0

/**
 * @resumen
 * en esta funcion se evalua la felicidad de los monitos, si ambos estan sonriendo o ambos no estan sonriendo hay problemas,devuelve verdadero, sino pues false

 */
bool monitos(bool risaMonito1, bool risaMonito2)
{
    if (risaMonito1 && risaMonito2 || !risaMonito1 && !risaMonito2)
        return true;
    else
        return false;
}

int suma(int valor1, int valor2)
{
    if (valor1 == valor2)
        return (valor1 + valor2) * 2;
    else
        return valor1 + valor2;
}

int dif21(int num)
{
    if (num > 21)
        return (num - 21) * 2;
    else
        return 21 - num;
}

bool lorito(bool habla, int hora)
{
    if (habla && (hora < 7 || hora > 20))
        return true;
    else
        return false;
}

bool es_10(int num1, int num2)
{
    return ((num1 == 10 || num2 == 10) || (num1 + num2 == 10));
}

bool cuantoFaltaPara100_200(int num)
{
    return ((abs(100 - num) <= 10) || (abs(200 - num) <= 10));
}
// abs funcion para calcular valor absoluto
// para mostrar en pantalla la respuesta de un booleano debes colocar (x?"true":"false")
// donde x es la variable o funcion

bool masOmeno(int num1, int num2, bool parametro)
{
    return (((num1 > 0 && num2 < 0) || (num1 < 0 && num2 > 0)) && !parametro) || (num1 && num2 < 0 && parametro);
}