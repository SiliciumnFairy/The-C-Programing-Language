#include <stdio.h>;
#define Maxhist 15
#define Maxword 11
#define IN 1
#define OUT 0

void main() 
{
	int c, i, j, nc, state;
	int len;
	int maxvalue;
	int ovflow;
	int wl[Maxword];;

	state = OUT;
	nc = 0;
	ovflow = 0;
	
	for (i = 0; i < Maxword;++i)
	{
		wl[i] = 0;
	}
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
			if (nc > 0)
				if (nc < Maxword)
					++wl[nc];
				else
					++ovflow;
			nc = 0;
		}
		else if (state == OUT)
		{
			state = IN;
			nc = 1;
		}
		else
			++nc;
	}
	
	maxvalue = 0;
	for (i = 1; i < Maxword; ++i)
	{
		if (wl[i] > maxvalue)
			maxvalue = wl[i];
	}
	
	for (i = Maxhist; i > 0; --i)
	{
		for (j = 1; j < Maxword; ++j)
			if (wl[j] * Maxhist / maxvalue >= 1)
				printf(" * ");
			else
				printf("   ");
		putchar('\n');
	}
	
	for (i = 1; i < Maxword; ++i)
		printf("%4d", i);
	putchar('\n');
	
	for (i = 1; i < Maxword; ++i)
		printf("%4d", wl[i]);
	putchar('\n');
	
	if (ovflow > 0)                             
		printf("There are %d words >= %d\n", ovflow, Maxword);
}
