/*
 * Programa para conocer si un numero es PAR, IMPAR, NULO
 *
 */


#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{
	int NUM;
	printf("ingrese el numero para saber si es par, impar o nulo: ");
	scanf("%d",&NUM);
	if(NUM == 0)
	{
		printf("Numero numo");
	
		}
		else
		{
		if(pow(-1,NUM)>0){
			printf("\nNumero par");
			
			}	
			else
			{
		printf("\n numero impar");		
				}
			}
	return 0;
}

