#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void loop (char c[3][3]);
void Introducir(char c[3][3]);
void Mostrar(char c[3][3]);
void Yo(char c[3][3]);
void Maquina(char c[3][3]);
int Verificar(char c[3][3]);

void main(){ 
    char c[3][3];
    loop(c);
}

void loop (char c[3][3]){
    int a = 0;
    Introducir(c);
    do{
        Mostrar(c);
        if(a % 2 == 0){
            Yo(c);
        }else{
            Maquina(c);
        }
        a++;
        
    }while(a <  9 && Verificar(c) == 2);
    Mostrar(c);
    if(Verificar(c) == 0 ){
        printf("\nHas Ganado!! WUUUUUUUU\n");
    }else{
        printf("\nPerdiste!! :(\n");
    }
    system("pause");
}

void Introducir(char c[3][3]){
    int a, b;
    char auxc;
    auxc='1';
    for (a=0; a<3; a++){
        for (b=0 ; b<3; b++){
         c[a][b]=auxc++;            
        }        
    }
}

void Mostrar(char c[3][3]){
    system("CLS");
    for(int a = 0; a < 3;a++){
        for (int s = 0; s < 3; s++){
            if(s<2){
                printf(" %c |",c[a][s]);
            }else{
                printf(" %c ",c[a][s]);
            }            
        }
        if(a<2){
            printf("\n-----------\n");
        }
    }
    printf("\n\n");
}

void Yo(char c[3][3]){
    int q,w,a;
    char aux;
    do{
        do{
            printf("Tu turno: ");
            fflush(stdin);
            scanf("%c",&aux);
        } while (aux < '1' || aux > '9');
        a = 0;
        
        switch (aux)
        {
            case '1':{
                q = 0;
                w = 0;
                if(c[q][w] == 'X' || c[q][w] == 'O'){
                    a = 1;
                    printf("Ponlo en otro lado, esta ocupado!\n");
                }
                break;
            }
            case '2':{
                q = 0;
                w = 1;
                if(c[q][w] == 'X' || c[q][w] == 'O'){
                    a = 1;
                    printf("Ponlo en otro lado, esta ocupado!\n");
                }
                break;
            }
            case '3':{
                q = 0;
                w = 2;
                if(c[q][w] == 'X' || c[q][w] == 'O'){
                    a = 1;
                    printf("Ponlo en otro lado, esta ocupado!\n");
                }
                break;
            }
            case '4':{
                q = 1;
                w = 0;
                if(c[q][w] == 'X' || c[q][w] == 'O'){
                    a = 1;
                    printf("Ponlo en otro lado, esta ocupado!\n");
                }
                break;
            }
            case '5':{
                q = 1;
                w = 1;
                if(c[q][w] == 'X' || c[q][w] == 'O'){
                    a = 1;
                    printf("Ponlo en otro lado, esta ocupado!\n");
                }
                break;
            }
            case '6':{
                q = 1;
                w = 2;
                if(c[q][w] == 'X' || c[q][w] == 'O'){
                    a = 1;
                    printf("Ponlo en otro lado, esta ocupado!\n");
                }
                break;
            }
            case '7':{
                q = 2;
                w = 0;
                if(c[q][w] == 'X' || c[q][w] == 'O'){
                    a = 1;
                    printf("Ponlo en otro lado, esta ocupado!\n");
                }
                break;
            }
            case '8':{
                q = 2;
                w = 1;
                if(c[q][w] == 'X' || c[q][w] == 'O'){
                    a = 1;
                    printf("Ponlo en otro lado, esta ocupado!\n");
                }
                break;
            }
            case '9':{
                q = 2;
                w = 2;
                if(c[q][w] == 'X' || c[q][w] == 'O'){
                    a = 1;
                    printf("Ponlo en otro lado, esta ocupado!\n");
                }
                break;
            }
        }
    } while (a == 1);
    c[q][w] = 'X';
}

void Maquina(char c[3][3]){
    
    srand(time(NULL));
    int a,b;
    do{
        a = rand () %3;
        b = rand () %3;
        
    }while(c[a][b] == 'X' || c[a][b] == 'O');



    c[a][b]= 'O';
    
}


int Verificar(char c[3][3]){
    if(c[0][0] == 'X' || c[0][0] == 'O'){
        if (c[0][0]== c[0][1] && c[0][0]==c[0][2]){
            if (c[0][0]=='X'){
                return 0;      
            }else{
                return 1;
            }
        }
        if (c[0][0]== c[1][0] && c[0][0]==c[2][0]){
            if (c[0][0]=='X'){
                return 0;
            }else{
                return 1;
            }
        }

    }
    if(c[1][1] == 'X' || c[1][1] == 'O'){
        if(c[1][1] == c[1][0] && c[1][1] == c[1][2]){
            if(c[1][1] == 'X'){
                return 0; 
            }else{
                return 1;
            }
                
        }
        if(c[1][1] == c[0][1] && c[1][1] == c[2][1]){
            if(c[1][1] == 'X'){
                return 0; 
            }else{
                return 1;
            }
        }
    }
    if(c[2][2] == 'X' || c[2][2] == 'O'){
        if(c[2][2] == c[2][0] && c[2][2] == c[2][1]){
            if(c[2][2] == 'X'){
                return 0; 
            }else{
                return 1;
            }
                
        }
        if(c[2][2] == c[2][0] && c[2][2] == c[1][2]){
            if(c[1][1] == 'X'){
                return 0; 
            }else{
                return 1;
            }
        }
    }
    return 2;
}

