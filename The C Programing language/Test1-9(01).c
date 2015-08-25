#include <stdio.h>;
#define Nonblank 'a'
main() 
{
	int c ,lastc;
	
	while ((c=getchar())!=EOF)
	{
		if (c != ' ')
			putchar(c);
		if (c == ' ')
			if (lastc == ' ')
				putchar(c);
		c = lastc;
	}
	
}
