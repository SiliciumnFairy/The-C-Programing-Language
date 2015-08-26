#include <stdio.h>;
#define Nonblank 'a'
main() 
{
	/*将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替*/
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
