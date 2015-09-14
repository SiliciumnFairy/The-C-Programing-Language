#include <stdio.h>
#define lower 0
#define upper 300
#define step 20

float Change(float fahr);
main() 
{
	float fahr;
	for (fahr = lower; fahr <= upper; fahr = fahr + step)
	{
		printf("%1.0f\t %0.3f\n", fahr, Change(fahr));
	}
}
float Change(float fahr)
{
	return (5.0 / 9.0)*(fahr - 32.0);
}