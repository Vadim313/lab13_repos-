/*
lab_13_2.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

#define a 5
#define z 4
#define SQR(x) (x)*(x) 

#define MAX(y,z) ((y)>(z))?(y):(z) 
#define MIN(y,z) ((y)<(z))?(y):(z) 
#define PRINTI(w) puts("control output"); \
printf(#w"=%d\n",w)
#define PRINTR(w) puts ("rezult :"); \
printf (#w"=%f\n",(float)w)
#define SQCIRLE(r) (3.14*SQR(r))
#define ABS(a) (((a) < 0) ? -(a) : (a))
#define multiplication(a, b) (((a)*(b))
#define SUM(a, b) ((a)+(b))
#define MINUS(a, b) ((a)-(b))
void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	int 
		//z,
		x, y,
		y_minus_z,
		y_minus_z_modul,
		five_y_minus_z_modul,
		x_kvadr,
		xy,
		xyz,
		xx_y,
		xx_y_z,
		MAX_W,
		MAX_W2;
	char ch; 
	float rad, s, w;
	puts("define maximum of two numbers");
	puts("Input 2 integer numbers");
	
	scanf("%d", &x);
	PRINTI(x);
	scanf("%d", &y);
	PRINTI(y);
#if z < 10 && z>=1

		x_kvadr = SQR(x);
		PRINTI(x_kvadr);
		xx_y = SUM(x_kvadr, y);
		xx_y_z = SUM(xx_y, z);
		PRINTI(xx_y_z);
		xy = multiplication(x, y));
		xyz = multiplication(xy, z));
		PRINTI(xyz);
		MAX_W = MAX(xx_y_z, xyz);
		MAX_W2 = SQR(MAX_W);
		PRINTI(MAX_W2);
#else
		y_minus_z = MINUS(y, z);
		y_minus_z_modul = ABS(y_minus_z);
		PRINTI(y_minus_z_modul);
		x_kvadr = SQR(x);
		PRINTI(x_kvadr);
		five_y_minus_z_modul = multiplication(a, y_minus_z_modul));
		PRINTI(five_y_minus_z_modul);
		w = MIN(x_kvadr, five_y_minus_z_modul);
		PRINTI(w);
		
#endif
		puts("End");
}