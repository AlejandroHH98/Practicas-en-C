/*Programa para obtener el área y el volumen de un cilindro 
 * a partir de su radio y altura datos expresados en centimetros
 * */
#include <stdio.h>
#include <math.h>
int main (int argc, char **argv)
{
 float R,H,A,V; // R-radio H-Altura A = área V = Volumen
	printf("Ingresa el valor del radio del cilindro : *");
	scanf("%f",&R);
	printf("Ingresa el valor de la altura del cilindro : *");
	scanf("%f",&H);
	V=M_PI*pow(R,2)*H;
	A= 2*M_PI*H*R;
	printf("área del cilindro : %5.2f, Volumen del cilindro : %5.2f",A,V);
	return 0;
	}
