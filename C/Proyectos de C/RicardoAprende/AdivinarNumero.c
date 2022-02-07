#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dificultad();
int GenerarNumero(int dificultad);
void Avisos(int ingreso, int genero);
int verificar(int ingreso, int genero);
void PantallaDeTitulo();
int Ingresar(int dificultad);
int Ganar(int turnos);
void loop();





void main(){
    loop();
}

void loop(){
    int a,d,g,i,continuar = 0;
    PantallaDeTitulo();
    while(continuar == 0){
        a = 1;
        d = Dificultad();
        g = GenerarNumero(d);
        do
        {
        i = Ingresar(d);
        Avisos(i,g);
        a++;
        } while (verificar(i,g)==1);
        continuar = Ganar(a);
    }
}

int Dificultad(){
    system("cls");
    int num;
    do{//para q solo meta numero 1 2 3 o 4
    printf("////SELECCIONA-LA-DIFICULTAD/////\n\n");
    printf("1)////Facil......(1-10)//////////\n");
    printf("2)////Normal....(1-100)//////////\n");
    printf("3)////Dificil..(1-1000)//////////\n");
    printf("4)////Experto.(1-10000)//////////\n\n");
    printf("Ingrese la opcion: ");
    scanf("%i",&num);
    }while(num<1||num>4);

    switch (num)
    {
    case 1:
        printf("Modo facil seleccionado :)");
        break;
    case 2:
        printf("Modo normal seleccionado :)");
        break;
     case 3:
        printf("Modo dificil seleccionado :)");
        break;
     case 4:
        printf("Modo experto seleccionado ;) Buena suerte!!");
        break;    
    }
    return num;
}

int GenerarNumero(int dificultad){
    srand(time(NULL));
    switch (dificultad)
    {
    case 1:
        return (rand() % 10) +1;
        break;
    case 2:
        return (rand() % 100) +1;
        break;
    case 3:
        return (rand() % 1000) +1;
        break;
    case 4:
        return (rand() % 10000) +1;
        break;
    }
}

void Avisos(int ingreso, int genero){
    if(ingreso > genero){
        printf("\nEl numero es mas chiquito");
    }else if(ingreso < genero){
        printf("\nEl numero es mas grande");
    }
}

int verificar(int ingreso, int genero){
    if(ingreso == genero){
        return 0;
    }
    return 1;
}

void PantallaDeTitulo(){ 
    system("cls");
    printf("////////////Bienvenido a Adivina Un Numero!!!!//////////////////////\n");
    printf("\n\n/////////////////Presiona una tecla para continuar//////////////////");
    system("pause>nul");

}

int Ingresar(int dificultad){
    int num;
    printf("\n\n");
    switch (dificultad)
    {
    case 1:
        do
        {
            printf("Ingrese un numero entre 1 y 10: ");
            scanf("%i",&num);
        } while (num<1||num>10);
        
        break;
    case 2:
        do
        {
            printf("Ingrese un numero entre 1 y 100: ");
            scanf("%i",&num);
        } while (num<1||num>100);
        
        break;
    case 3:
        do
        {
            printf("Ingrese un numero entre 1 y 1000: ");
            scanf("%i",&num);
        } while (num<1||num>1000);
        
        break;
    case 4:
        do
        {
            printf("Ingrese un numero entre 1 y 10000: ");
            scanf("%i",&num);
        } while (num<1||num>10000);
        
        break;
    
    }
    return num;
}

int Ganar(int turno){
    char confirmar;
    int a;
    printf("\nUsted es un crack!!, tardo solo %i turnos",turno-1);
    
    do{
        a = 0;
        printf("\nQuiere Volver a Jugar? (S/N): ");
        fflush(stdin);
        scanf("%c",&confirmar);
        if(confirmar == 'S' || confirmar == 's' || confirmar == 'N' || confirmar == 'n'){
            a = 1;
        }
    }while(a == 0);
    if(confirmar == 'S' || confirmar == 's'){
        return 0;
    }else{
        return 1;
    }
}