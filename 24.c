#include <stdio.h>   

int main ()
{
	int max;
	double i, sum = 1, factorial = 1;
	printf("\nI_max= ");
	scanf("%d", &max);
	
	for (i = 1; i <= max; i++) {
		factorial *= i;
		sum *= 24 * (i * i) + (5 / factorial);
	}
	printf("\n\nSuma = %lf", sum);
	
	return 0;
}	
