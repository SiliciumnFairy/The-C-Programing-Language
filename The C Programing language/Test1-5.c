#include <stdio.h>;

main()
{
	/*Ҫ���������ӡ�¶�ת����*/
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
	{
		printf("%3d\t %100.2f\n", fahr, (5.0 / 9.0)*(fahr - 32));
	}

}