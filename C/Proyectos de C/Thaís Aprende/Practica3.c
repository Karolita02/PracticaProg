#include <stdio.h>
#include <stdlib.h>
void practica3 (){
int numero, par, impar, cero, x ;
x=1;
printf("Introduzca un numero");
scanf("%i",&numero);
while (x<=numero)
{
 if (x==0)
 {
 	cero++;
 }
 else if (x%2==0)
 {
 	par++;
 }
 else
 {
 	impar++;
 }
 x++;
}
printf("Cantidad de ceros: %i \n",cero);
printf("Cantidad de pares: %i \n", par);
printf("Cantidad de impares: %i \n",impar);
cero=0;
par=0; 
impar=0;
for(x=0;x< 20; x++)
{
 printf("Introduzca un numero");
 scanf("%i",&numero);
 if (numero==0)
 {
 	cero++;
 }
 else if (numero%2==0)
 {
 	par++;
 }
 else
 {
 	impar++;
 }

}
printf("Cantidad de ceros: %i \n",cero);
printf("Cantidad de pares: %i \n", par);
printf("Cantidad de impares: %i \n",impar);

}

