#include <stdio.h>;
#define lower 0
#define upper 300
#define step 20

main()
/* ��ӡ���϶�ת������Ӧ���϶ȵ�ת���� */

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