/* Programa que captura los valores de peso y longitud en sistema ingles 
 *  y los convierte en sistema internacional 
 * */
#include <stdio.h>

int main (int argc, char **argv)
{
	float WI,LI,W,L; //WI = peso en sistema internacional, LI = longitud en sistema internacional W= peso en sistema ingles  L longitud en sistema ingles
	printf("Ingrese el valor del peso el libras : "); //Ingresar el valor de los pies en pantalla
	scanf("%f",&W); //Captura de las libras
	printf("Ingrese el valor de la longitud en pies : "); //Ingresar el valor de la longitud en pies
	scanf("%f",&L); //Captura de los pies
	WI = W*0.45359; //Conversion de pies a kilogramos
	LI = L*0.3048; //Conversion de pies a metros
	printf("%5.2f Libras equivale a  %5.2f kg, %5.2f pies equivale a %5.2f metros \n",W,WI,L,LI); //Resultado
	}
