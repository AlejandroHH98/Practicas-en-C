/*
 
 */


#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{
	float SAL,TOTAL_SAL;
	int NIV;
	
	printf("Ingrese el NIVEL del docente y el SALARIO ");
	scanf("%d %f",&NIV,&SAL);
	switch (NIV)
	{
		case 1: TOTAL_SAL = SAL*1.0035;
			break;
		case 2: TOTAL_SAL = SAL*1.0241;
			break;
		case 3: TOTAL_SAL = SAL*1.0048;
			break;
		case 4: TOTAL_SAL = SAL*1.0053;
			break;
		default: TOTAL_SAL=1;
			break;
		}
	printf(" TOTAL SALARIO CON INCREMENTO : $ %5.2f ",TOTAL_SAL);
	return 0;
}

