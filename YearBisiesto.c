//Algoritmo para saber si un a�o es bisiesto

#include <stdio.h>

int main(){
	
	int year;
	year = 0;
	
	printf ("\nEscribe un a�o para saber si es bisiesto o no\n");
	printf ("A�o: ");
	scanf ("%i", &year);
	
	if(year %4 == 0 && year %100 != 0){
		printf ("\nEs a�o si es bisiesto\n");
	}
	else{
		printf ("\nEl a�o no es bisiesto\n\n\n");
	}
	
	system ("pause");
	return 0;
}
