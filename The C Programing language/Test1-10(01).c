#include <stdio.h>;

main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		/*��дһ�����򣬰��������븴�Ƶ���������ڴ˹����а��Ʊ������\t���ѻ��˷�����\b��
		�ѷ�б�ܻ���\\����������ʹ���Ʊ������˷���������ķ�ʽ�ɼ�*/
		if (c == '\t')
			printf("\\t");
		if (c == '\b')
			printf("\\b");
		if (c == '\\')
			printf("\\\\");
		if (c != '\t')
			if (c != '\b')
				if (c != '\\')
					putchar(c);

	}
}