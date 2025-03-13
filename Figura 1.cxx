#include <stdio.h>
#include <math.h>
int main ()
{
	float L=7;
	float Pt, At;
	Pt= (7*L) + 2*(sqrt((pow((3*L), 2)+pow (L,2)))) + (((2*3.1416)*((3*L)/2))/2);
	At= 2*((3*L)*L)+2*((L*(3*L))/2)+(((3.1416)*pow(((3*L)/2),2))/2.0);
	printf("El perimetro es: %f \n", Pt);
		printf("El Area es: %f", At);
	return 0;
}