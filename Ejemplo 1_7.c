/*Programa para conocer el área de un triangulo
 * BAS = BASE ALT =ALTURA 
 *
 */
#include <stdio.h>
int main (int argc, char **argv)
{
	float BAS, ALT, AREA; //Declacacion de la variables
	printf("Ingresa la base y la altura en cm : "); //Pide los datos en la pantalla
	scanf("%f %f",&BAS, &ALT); //Captura los datos 
	AREA= (BAS*ALT)/2; //Formula del área para un triangulo
	printf("\n El área del triangulo es de %5.2f cm",AREA);//Imprime el resultado
	return 0;
	}
