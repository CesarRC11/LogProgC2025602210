#include <stdio.h>
#include <math.h>
int main  ()
{
	float a,b,pt,at;

	//asigancion de valores 
	a=3;
	b=4;
	pt= a+b+sqrt (pow(b,2)+pow(a,2));
	at=b*a/2;
	
	printf("El area total es %f\n", at);
	printf("El perimetro total es %f\n", pt);
	return 0;
}