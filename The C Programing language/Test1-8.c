#include <stdio.h>;
#define Nc 0
main()
{
	/*��дһ��ͳ�ƿո��Ʊ���뻻�з������ĳ���*/
	int c, nl, nb, nk;

	nl = nl = nb = nk = Nc;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++nl;
		if (c == '\t')
			++nb;
		if (c == '\n')
			++nk;
		printf("%3d %3d %3d\n", nl, nb, nk);
	}
}