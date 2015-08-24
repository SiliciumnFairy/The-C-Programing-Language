#include <stdio.h>;
#define Nc 0
main()
{
	/*编写一个统计空格、制表符与换行符个数的程序*/
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