#include <stdio.h>
#include <math.h>
int main ()
{
	float L=7;
	float Pt, At;
	Pt= 23/5.0*L+(((2*3.1416)*(L/2))/2);
	At= L*L+2*1/5.0*L*1/5.0*L+(2*((3.0/5.0)*L)*((1/5.0)*L))+(((3.1416)*pow((L/2),2))/2.0);
	printf("El perimetro es: %f \n", Pt);
		printf("El Area es: %f", At);
	return 0;
}