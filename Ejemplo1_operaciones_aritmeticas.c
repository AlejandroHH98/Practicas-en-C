/*
 * Ejemplo1.c
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

int main(int argc, char **argv)
{
	int var1,var2, x=6, y=10,z=3,a=22; //Declaracion de una variable de tipo entero
	float re1,re2,div1; //Declarcion de dos dariables de tipo real 
	var1 = 100;
	var2 = var1 + 15;
	x+=5;
	y+=4;
	z-=3;
	a*=5;
	printf("La suma de 6 + 5 = %d, la suma de 10 + 4 es igual a %d, la resta de 3 - 3 es igual a %d, la multiplicacion de 22x 5 es igual a %d\n",x,y,z,a);
	printf("la suma de %d más 15  es  igual a %d\n",var1,var2);
	x/=6;
	printf("la division de 6 /6 es igual a %d\n",x);
	re1 =20.45;
	re2 = re1 -3.09;
	printf(" la suma del numero decimal %f menos 3.09  es igual a %f\n",re1, re2);
	div1 =re2/re1;
	printf("la division entre %f Y %f es %f\n",re2,re1,div1);
	

	return 0;
}

