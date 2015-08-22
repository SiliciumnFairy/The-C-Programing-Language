#include <stdio.h>;
#define lower 0
#define upper 300
#define step 20

main() 
/* 修改温度转换程序，使其在转换表顶部打一个标题 */

{
	float fahr, celsius;

	fahr = lower;
	printf("     温度转换\n\n\n");
	while (fahr<=upper)
	{
		celsius = (5.0/9.0)*(fahr - 32.0);
		printf("%3.0f %6.2f\n",fahr,celsius);
		fahr = fahr + step;
	}
	
}