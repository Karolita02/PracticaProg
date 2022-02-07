#include <stdio.h>
#include <stdlib.h>
// alt + 39 comilla simple

void main()
{
}

int operacionesBasicas(int valor1, int valor2, char operacion)
{
    int respuesta;
    if (operacion == 'S')
    {
        respuesta = valor1 + valor2;
        return respuesta;
    }

    else if (operacion == 'R')
    {
        respuesta = valor1 - valor2;
        return respuesta;
    }

    else if (operacion == 'M')
    {
        respuesta = valor1 * valor2;
        return respuesta;
    }

    else if (operacion == 'D')
    {
        if (valor2 != 0)
        {
            respuesta = valor1 / valor2;
            return respuesta;
        }
        else
        {
            printf("No es posible realizar la division");
        }
    }
