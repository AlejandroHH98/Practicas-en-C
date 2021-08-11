/*
 * 
 */

#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{
	int OP,T;
	float RES;
	printf("Ingrese la opción del cálculo y el valor entero: ");
	scanf	("%d %d",&OP,&T);
	switch(OP)
	{
		case 1: RES = T/5;
			break;
		case 2: RES = pow(T,T);
			break;
		case 3:
			break;
		case 4: RES = 6*T/2;
			break;
		default: RES =1;
				break;
		}
		printf("\nR RESULTADO : %5.4f",RES);
	return 0;
}

