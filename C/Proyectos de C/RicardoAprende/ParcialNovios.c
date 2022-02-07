#include <stdio.h>
#include <stdlib.h>

void llenarVector(int vecNum[], int tam);
int invertirNumero(int num);
int posMayor(int num[], int tam);
int posMenor(int num[], int tam);
float promVector(int num[], int valor);
void imprimirVector(int vecNum[], int tam);

void main()
{
    int vecNum[5];
    llenarVector(vecNum, 5);
    int vecNumInvertido[5];

    for (int x = 0; x < 5; x++)
    {
        vecNumInvertido[x] = invertirNumero(vecNum[x]);
    }
    printf("\nEl numero menor del vecNum es:");
    printf("\n%i", vecNum[posMenor(vecNum, 5)]);
    printf("\nEl numero mayor del vecNumInvertido es:");
    printf("\n%i", vecNumInvertido[posMayor(vecNumInvertido, 5)]);
    printf("\nEl promedio general del vecNum es %2.f", promVector(vecNum, 5));
    printf("\nEl promedio general del vecNumInvertido es %2.f ", promVector(vecNumInvertido, 5));
    printf("\nLos valores del vecNum son:");
    imprimirVector(vecNum, 5);
    printf("\nLos valores del vecNumInvertido son:");
    imprimirVector(vecNumInvertido, 5);
}

void imprimirVector(int vecNum[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("\n%i", vecNum[i]);
    }
}

void llenarVector(int vecNum[], int tam)
{

    for (int i = 0; i < tam; i++)
    {
        printf("%i) Ingrese un valor: ", i + 1);
        scanf("%i", &vecNum[i]);
    }
}

int invertirNumero(int num)
{

    int a, inv = 0;
    while (num != 0)
    {
        a = num % 10;
        num /= 10;
        inv = inv * 10 + a;
    }
    return inv;
}

int posMayor(int num[], int tam)
{
    int pos = 0, valor = num[0];
    for (int i = 1; i < tam; i++)
    {
        if (valor < num[i])
        {
            valor = num[i];
            pos = i;
        }
    }
    return pos;
}

int posMenor(int num[], int tam)
{
    int pos = 0, valor = num[0];
    for (int i = 1; i < tam; i++)
    {
        if (valor > num[i])
        {
            valor = num[i];
            pos = i;
        }
    }
    return pos;
}

float promVector(int num[], int valor)
{
    float prom = 0;
    for (int i = 0; i < valor; i++)
    {
        prom += num[i];
    }
    return prom / valor;
}