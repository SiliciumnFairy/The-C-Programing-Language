#include <stdio.h>;
#define lower 0
#define upper 300
#define step 20

main() 
/* �޸��¶�ת������ʹ����ת��������һ������ */

{
	float fahr, celsius;

	fahr = lower;
	printf("     �¶�ת��\n\n\n");
	while (fahr<=upper)
	{
		celsius = (5.0/9.0)*(fahr - 32.0);
		printf("%3.0f %6.2f\n",fahr,celsius);
		fahr = fahr + step;
	}
	
}