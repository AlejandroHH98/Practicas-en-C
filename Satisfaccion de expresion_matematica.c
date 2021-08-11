/*
 *
 * 
 */


#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{
	int R,T,Q,comp;
	printf("Ingrese los valores para las variables R,T,Q ");
	scanf("%d %d %d",&R,&T,&Q);
	comp = pow(R,4) -pow(T,3) + 4*pow(Q,2);
	if (comp <820){
		
		printf("%d < 820",comp);
		
		}
		else
		{
		 printf("No satisface a la expresión ");
			
			}
	return 0;
}

