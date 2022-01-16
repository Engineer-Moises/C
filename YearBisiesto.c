//Algoritmo para saber si un año es bisiesto

#include <stdio.h>

int main(){
	
	int year;
	year = 0;
	
	printf ("\nEscribe un año para saber si es bisiesto o no\n");
	printf ("Año: ");
	scanf ("%i", &year);
	
	if(year %4 == 0 && year %100 != 0){
		printf ("\nEs año si es bisiesto\n");
	}
	else{
		printf ("\nEl año no es bisiesto\n\n\n");
	}
	
	system ("pause");
	return 0;
}
