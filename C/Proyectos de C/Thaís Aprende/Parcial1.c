#include <stdio.h>
#include <stdlib.h>
void parcial1 (){
	// alt+ 39 comilla simple 
   // alt+91 corchete
   // gets(variable)
   // imprimir %s 
   
int x;
float pSolt, pCasd,pDiv;
char nombre[15];
char codEstadoC;
for (x=0; x<=5; x++){
	switch(codEstadoC){  
	case 'S':{
	printf("Su colaboracion es de 25.00");
	pSolt+=25.00;
	break;
	}
	case 'C':{
	printf("Su colaboracion es de 20.00");
	pCasd+=20.00;
	break;
	}
	case 'D':{
	printf("Su colaboracion es de 15.00");
	pDiv+=15.00;
	break;
	}
}	
}
  printf("Las personas solteras aportaron en total","%f",pSolt);
  printf("Las personas casadas aportaron en total","%f",pCasd);
  printf("Las personas divorciadas aportaron en total""%f", pDiv);
  
}
