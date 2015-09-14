#include <stdio.h>

float Change(float fahr);
main() 
{
	float fahr;
	int upper, lower, setp;

	lower = 0;
	upper = 300;
	setp = 20;
	
	fahr = lower;
	while (fahr <= upper)
	{
		printf("%1.0f\t %0.3f\n", fahr, Change(fahr));
			fahr = fahr + setp;
	}
}
	float Change(float fahr)
	{
		return (5.0 / 9.0)*(fahr - 32.0);
	}
