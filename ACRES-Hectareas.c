/*
 *Programa para cambiar de acres a hectareas 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float AC,HEC;
	printf("INGRESE EL TAMAÑO DEL TERRENO EN ACRES: ");
	scanf("%f",&AC);// Capura de la variable de entrada en acres
	HEC = AC*4047/10000; //Ecuacion matematica 1 acre = 4047m2, 1 hectarea = 10000m2
	printf("%5.3f Acres es igual a %5.3f hectáreas",AC,HEC);//Resultado de la salida.
	return 0;
}

