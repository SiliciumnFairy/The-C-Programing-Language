#include <stdio.h>;
#define Nonblank 'a'

main() 
{
	int c, lastc;
	lastc = Nonblank;

	while ((c=getchar())!=EOF)
	{
		if (c != ' ')
			putchar(c);
		else if (lastc != ' ')
			putchar(c);
		lastc = c;

	}
}