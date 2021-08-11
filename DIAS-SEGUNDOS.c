/*
 * DIAS-SEGUNDOS.c
 * 
 * Copyright 2020  <pi@raspberrypi>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
float DIA, SEG;
	printf("Ingrese el numero de días para conocer los segundos totales ");
	scanf("%f",&DIA);
	SEG = DIA*86400;
	printf("%5.2f dias equivale a  %5.2f segundos",DIA,SEG);
	return 0;
}

