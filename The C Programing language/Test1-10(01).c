#include <stdio.h>;

main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		/*编写一个程序，把他的输入复制到输出，并在此过程中把制表符换成\t，把回退符换成\b，
		把反斜杠换成\\，这样可以使得制表符与回退符以无歧义的方式可见*/
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