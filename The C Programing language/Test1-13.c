/**************************************************************
直方图定义：
n：某个长度单词出现的次数(长度为4的单词出现了9次，则n = 9)
M：出现最频繁的长度的次数
H：定义的直方图的最大长度(本例中为Maxhist)
**************************************************************/
#include <stdio.h>;
#define Maxhist 15 //直方图最大长度
#define Maxword 11 //单词最大长度
#define IN 1       //在单词内
#define OUT 0      //在单词外


void main()
{
	int c, i, nc, state;
	int len;              //直方条的长度
	int maxvalue;         //相同长度单词出现次数最多的值
	int ovflow;           //长度大于或等于Maxword的单词的数量
	int wl[Maxword];      //按单词的长度值0~11，统计输入各长度的单词数，存放在wl数组中

	state = OUT;          //重置state值
	nc = 0;               //单词中含有的字符数
	ovflow = 0;           //单词中含有的字符数，大于最大单词长度

    for (i = 0; i < Maxword; ++i)  //
		wl[i] = 0;                 //初始化每个单词长度为0
	
	while ((c = getchar()) != EOF) //从键盘获取字符串，并判断是否输入结束
	{
		if (c == ' ' || c == '\n' || c == '\t') //判断是否是一个单词（排除空格，制表符，换行符）
		{
			state = OUT;                        //初始化状态为输出，表明这个单词已输入完成
			if (nc > 0)                         //判断是否为单词（单词字符必须大于0）
				if (nc < Maxword)               //单词字符数是否小于单词最大长度
					++wl[nc];                   //保存单词中字符的个数
				else                            
					++ovflow;                   //如果超过范围，则用ovflow保存字符数
			nc = 0;                             //刷新单词中的字符数为0
		}
		else if (state == OUT)                  //否则单词未输入完成
		{ 
			state = IN;                         //说明字符在单词内，还需要继续输入
			nc = 1;                             //从一个新字符开始
		}

		else
			++nc;                               //在单词内加一个字符长度
	}
	maxvalue = 0;                               //
	for (i = 1; i < Maxword;++i)                //
		if (wl[i] > maxvalue)                   //
		    maxvalue = wl[i];                   //
	for (i = 1; i < Maxword; ++i)               //
	{
		printf("%5d-%5d:", i, wl[i]);        //
		if (wl[i] > 0)                          //
		{
			if ((len = wl[i] * Maxhist / maxvalue) <= 0)//
				len = 1;                        //
		}
		else 
			len = 0;                            //

		while (len > 0)                         //
		{  
	        putchar('*');                       //
			--len;                              // 
	    }
		 putchar('\n');                         //
	}
	if (ovflow > 0)                             //
		printf("There are %d words >= %d\n", ovflow, Maxword);//
}