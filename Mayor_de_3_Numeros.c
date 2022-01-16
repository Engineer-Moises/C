//Algoritmo para ordenar numeros

#include <stdio.h>

int main (){
	
	float Num1,Num2,Num3;
	
	printf ("\nIngresa 3 numeros:\n");
	printf ("A --->");
	scanf ("%f", &Num1);
	printf ("B --->");
	scanf ("%f", &Num2);
	printf ("C --->");
	scanf ("%f", &Num3);
	
	if (Num1 > Num2){
		
		if (Num1 > Num3){
			printf ("\nEl numero mayor se encuentra en el inciso A: %f\n\n\n", Num1);
		}
		else {
			printf ("\nEl numero mayor se encuentra en el inciso C: %f\n\n\n", Num3);
		}
	}
	else if (Num2 > Num3){
		printf ("\nEl numero mayor se encuentra en el inciso B: %f\n\n\n", Num2);
	}
	else {
		printf ("\nEl numero mayor se encuentra en el inciso C: %f\n\n\n", Num3);
	}
	
	system ("pause");
	return 0;
}
