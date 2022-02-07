#include <stdio.h>
#include <stdlib.h>
//alt 92 salto de linea 
// alt 38 &
void practica4 (){
int numDiaSemana;

	do {
			printf("Introduzca un numero correspondiente a un dia de la semana \n");
scanf("%i",&numDiaSemana);
switch(numDiaSemana)
{
  case 1:{
  	printf("Lunes \n");
	break;
  }
  case 2:{
  	printf("Martes \n");
	break;
}
	case 3:{
		printf("Miercoles \n");
		break;
	}
	case 4:{
		printf("Jueves \n");
		break;
	}
	case 5:{
		printf ("Viernes \n");
		break;
	}
	case 6:{
		printf ("Sabado \n");
		break;
	}
	case 7:{
		printf("Domingo \n");
		break;
	}
	default:
	{
	printf("Error:Dia Incorrecto \n");
		break;
	}
	
}
	}while(numDiaSemana>=1 && numDiaSemana<=7 );
	
}
