 /*Promedio de sueltos 
  * el programa al recibir como datos seis sueldos de un empleo, calcula 
  * Tando el ingreso total como el promedio mensual
  * 
  * 
  * */
 #include <stdio.h>
int main (int argc, char **argv)
{
	int CLA; //Variable del tipo entero
	float SU1, SU2, SU3, SU4, SU5, SU6,ING ,PRO; //Variables del tipo real
	printf("Igrese la clase y el los 6 sueldos del empleado: \n");
	scanf("%d %f %f %f %f %f %f",&CLA, &SU1, &SU2, &SU3 ,&SU4, &SU5, &SU6);
	ING = (SU1+SU2+SU3+SU4+SU5+SU6);
	PRO = ING/6;
	printf("\n CLAVE: %d \n INGRESO: %5.2f\n SUELDO PROMEDIO: %5.2f",CLA,ING,PRO);
	return 0;
	}
