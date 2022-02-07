
//Haga un programa que genere las tablas de multiplicar del 1 al 9
void practica5(){
	int x1 ;
	int x2;
	x1=1;
	x2=1;
	int resul;
	printf("Tablas de Multiplicar 1 al 9 \n");
	while (x1<=9){
	printf("Tabla del %i \n",x1);
	while(x2<=12){
	resul=x1*x2;
	x2++;
	printf("%i\n" ,resul);
	}
	x1++;
	x2=1;
}

}
