#include <stdio.h>;
#define IN 1
#define  OUT 0

void main() 
{
	/*��дһ������,��ÿ��һ�����ʵ���ʽ��ӡ�����*/
	int  c,state;

	state = OUT;
	while ((c=getchar())!=EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')//���ո񣬻��У��Ʊ�
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