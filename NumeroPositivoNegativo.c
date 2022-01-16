//NUMERO POSITIVO O NEGATIVO

#include <stdio.h>

int main (){
	
	float Num;
	
	printf ("\nEscribe cualquier numero para saber si es positivo o negativo:  ");
	scanf ("%f", &Num);
	
	if (Num == 0){
		printf ("\nEl cero es un numero neutral, NO es positivo, ni negativo\n");
		printf ("Por favor ingrese un numero distinto de 0:  ");
		scanf ("%f", &Num);
	}
	if (Num > 0){
		printf ("\nEl numero %f es POSITIVO", Num);
	}
	else if (Num < 0){
		printf ("\nEl numero %f es NEGATIVO", Num);
	}
	
	printf ("\n\n:) Gracias ;)\n\n\n");
	
	system ("pause");
	return 0;
}
