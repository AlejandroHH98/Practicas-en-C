/*
 *
 * 
 */
 
#include <stdio.h>

int main(int argc, char **argv)
{
	float P,S,R;
	printf("Ingrese las ventas de los tres empleados :");
	scanf("%f %f %f",&P,&S,&R);
	
	if (P>S) 
	{
		if(P>R)
		{
			
		if(S>R)
		{
			printf("\n La orden es P,S,R : %8.2f %8.2f %8.2f",P,S,R);
			}
			else 
			{
				printf("\n La orden es P,R,S %8.2f %8.2f %8.2f",P,R,S);
				}	
			}
		else
		{
			printf("\n La orden es R,P,S : %8.2f %8.2f %8.2f",R,P,S);
			}
		
		}
		else
		{
		if (S>R)
		{
			if(P>R)
			{
				printf("\n La orden es S,P,R : %8.2f %8.2f %8.2f",S,P,R);

				}
			else
			{
			printf("\n La orden es S,R,P : %8.2f %8.2f %8.2f",S,R,P);	
				}
			}
			else
			{
				printf("\n La orden es R,S,P : %8.2f %8.2f %8.2f",R,S,P);
				}	
			
			}
	return 0;
}

