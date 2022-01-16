//Programa para "La Langosta Ahumada"

/*PINALES. Ejemplo 3.6“La langosta ahumada” es una empresa dedicada a ofrecer banquetes;
sus tarifas son las siguientes: el costo de platillo por persona es de $95.00,pero si el
número de personas es mayor a 200 pero menor o igual a 300,el costo es de $85.00. Para más
de 300 personas el costo por platillo es de$75.00. Se requiere un algoritmo que ayude a determinar
el presupuestoque se debe presentar a los clientes que deseen realizar un evento.*/

#include <stdio.h>

int main (){
	//Presupuesto de un platillo por persona
	//Declaramos Variables
	int NP;
	float Total;
	printf ("\n***********************");
	printf ("\n*'La Langosta ahumada'*");
	printf ("\n***********************");
	printf ("\nEs una empresa dedicada a hacer banquetes, y el costo del platillo por persona son los siguientes:\n");
	printf ("De 1 a 200 personas = $95 pesos\nDe 201 a 300 personas = $85 pesos\nMas de 300 personas = $75\n\n");
	printf ("Para cuantas personas es el presupuesto?\nP= ");
	scanf ("%i", &NP);
	//Condicion para evitar 0 o numeros negativos
	while (NP <= 0){
		printf ("\nSolo se admiten numeros mayores a 0\nP= ");
		scanf ("%i", &NP);
	}
	if (NP <= 200){
		Total = NP*95;
	}
	else if (NP <= 300){
		Total = NP*85;
	}
	else {
		Total = NP*75;
	}
	printf ("\nEl presupuesto para %i personas es de $%f pesos\n\n\n\n",NP,Total);
	system ("pause");
	return 0;
}
