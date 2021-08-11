/*
 *
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float tiempo_llamada, COS;
	int zona_geo;
	printf("Ingrese la zona geográfica en la cual se esta llamado: ");
	scanf("%d",&zona_geo);
	printf("Ingrese el tiempo en segundos consumido por la llamada: ");
	scanf("%f",&tiempo_llamada);
	switch(zona_geo){
		case 1: COS = tiempo_llamada*0.13/60;		
		break;
		case 2: COS = tiempo_llamada*0.11/60;	 
		break;
		case 5: COS =tiempo_llamada*0.22/60;
		break;
		case 6: COS = tiempo_llamada*0.19/60;
		break;
		case 7: COS = tiempo_llamada*0.17/60;
		break;
		case 9: COS =tiempo_llamada*0.17/60;
		break;
		case 10: COS =tiempo_llamada*0.20/60;
		break;
		case 15: COS = tiempo_llamada*0.39/60;
		break;
		case 20  : COS = tiempo_llamada*0.28/60;
		break;
		default: COS = -1; 
		break;
		}
		if(COS !=-1){
			printf(" TIEMPO DE LLAMADA : %5.2f COSTO POR LLAMADA: %5.2f clave:  %d",tiempo_llamada,COS,zona_geo);
			}
			else{
			printf("Error en la clave");		
				}
	return 0;
}

