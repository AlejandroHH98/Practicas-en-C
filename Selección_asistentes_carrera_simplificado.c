#include <stdio.h>

int main(int argc, char **argv)
{
	float Prom,Sem,mat;
	int Carrera;
	printf("Ingrese el promedio ,semestre y matricula: ");
	scanf("%f %f %f,",&Prom,&Sem,&mat);
	printf("Ingrese la carrera : 1) Industrial 2)Telemática 3)Computación 4)Mecánica: ");
	scanf("%d",&Carrera);
	switch (Carrera)
	{
		case 1: if (Prom>=8.5 && Sem>=6){
			
				printf("Usted es apto para ser asistente en la carrera ING. INDUSTRIAL\n");
				printf("Matricula : %5.2f\n Promedio: %5.2f\n Semestre: %5.2f\n Carrera: Ing Industria\n",mat,Prom,Sem);
			}
			else{
				printf("Usted no es apto para ser asistente en ING INDUSTRIAL");
				}
			break;
		case 2: if(Prom >=9.0 && Sem >=5){
				
					printf("Usted  es apto para ser asistente en ING Telemática\n");
					printf("Matricula : %5.2f\n Promedio: %5.2f\n Semestre: %5.2f\n Carrera: Ing Telemática\n",mat,Prom,Sem);
			}
			else{
				printf("Usted no es apto para ser asistente en ING INDUSTRIAL\n");
				}
			break;
		case 3: if(Prom >=8.8 && Sem >=6){
				
			printf("Usted  es apto para ser asistente en ING COmputación\n");
			printf("Matricula : %5.2f\n Promedio: %5.2f\n Semestre: %5.2f\n Carrera: Ing Computacion\n",mat,Prom,Sem);
			}
			else{
				printf("Usted no es apto para ser asistente en ING COmputación");
				}
			break;
		
		case 4: if(Prom >=9.0 && Sem >=7){
				
			printf("Usted  es apto para ser asistente en ING Mecanica\n");
			printf("Matricula : %5.2f\n Promedio: %5.2f\n Semestre: %5.2f\n Carrera: Ing Mecánica\n",mat,Prom,Sem);
				
			}
			else{
				printf("Usted no es apto para ser asistente en ING Mecanica");
				}
			break;
			default: printf("Error al seleccionar la carrera");
			break;
		}
		
	return 0;
}


