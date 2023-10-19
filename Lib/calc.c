#include <stdio.h>
#include "calc.h"

int main()
{
	float a, b;
	
	printf("first : ");
	scanf("%f",&a);
	printf("second : ");
	scanf("%f", &b);
	
	printf("\n[ Add ]\n");
	printf("%f + %f = %f\n", a, b, add(a, b));
	
	printf("\n[ Sub ]\n");
	printf("%f - %f = %f\n", a, b, sub(a, b));
	
	printf("\n[ Mul ]\n");
	printf("%f * %f = %f\n", a, b, mul(a, b));
	
	printf("\n[ Div ]\n");
	printf("%f / %f = %f\n", a, b, div(a, b));
	
	return 0;
}
