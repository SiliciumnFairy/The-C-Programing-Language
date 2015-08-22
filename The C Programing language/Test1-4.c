#include <stdio.h>;
#define lower 0
#define upper 300
#define step 20

main()
/* 打印摄氏度转化成相应华氏度的转换表 */

{
	float celsius,fahr;

	celsius = lower;
	while (celsius <= upper)
	{
		fahr = (5.0 / 9.0)*(celsius - 32.0);
		printf("%3.1f\t %12.1f\n", fahr, celsius);
		celsius = celsius + step;
	}
}