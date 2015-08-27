#include <stdio.h>;
#define IN 1
#define  OUT 0

void main() 
{
	/*编写一个程序,以每行一个单词的形式打印其输出*/
	int  c,state;

	state = OUT;
	while ((c=getchar())!=EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')//检查空格，换行，制表
		{
			if (state == IN)
			{
				putchar('\n');//Finish the word
				state = OUT;
			}
		}
		else if (state == OUT)
		{
			state = IN;//Beginning of word
			putchar(c);
		}
		else putchar(c);//inside a word
		
	}
}