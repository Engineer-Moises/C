//Programa que calcula el area de un triangulo dado la base y la altura
//Area = (Base * Altura) / 2

#include <stdio.h>

int main(){
	
	// Declaramos las variables de tipo flotante
	float Base, Altura, Area;
	
	//Solicitar Informacion
	printf ("Este es un programa que clacula el area de un triangulo dado la base y la altura. :)\n\n");
	
	printf ("Para ello por favor introdusca la base: ");
	scanf ("%f",&Base);
	printf ("Ahora introdusca la altura: ");
	scanf ("%f",&Altura);
	
	//Operacion con las variables: Area = (Base * Altura) / 2
	Area = (Base*Altura)/2;
	
	//Entraga de resultados
	printf ("\n\n:) EL AREA DEL TRIANGULO CON BASE %f Y ALTURA %f ES DE : %f. :D\n\n\n\n\n",Base,Altura,Area);
	
	system ("pause");
	return 0;
}
