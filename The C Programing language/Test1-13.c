/**************************************************************
ֱ��ͼ���壺
n��ĳ�����ȵ��ʳ��ֵĴ���(����Ϊ4�ĵ��ʳ�����9�Σ���n = 9)
M��������Ƶ���ĳ��ȵĴ���
H�������ֱ��ͼ����󳤶�(������ΪMaxhist)
**************************************************************/
#include <stdio.h>;
#define Maxhist 15 //ֱ��ͼ��󳤶�
#define Maxword 11 //������󳤶�
#define IN 1       //�ڵ�����
#define OUT 0      //�ڵ�����


void main()
{
	int c, i, nc, state;
	int len;              //ֱ�����ĳ���
	int maxvalue;         //��ͬ���ȵ��ʳ��ִ�������ֵ
	int ovflow;           //���ȴ��ڻ����Maxword�ĵ��ʵ�����
	int wl[Maxword];      //�����ʵĳ���ֵ0~11��ͳ����������ȵĵ������������wl������

	state = OUT;          //����stateֵ
	nc = 0;               //�����к��е��ַ���
	ovflow = 0;           //�����к��е��ַ�����������󵥴ʳ���

    for (i = 0; i < Maxword; ++i)  
		wl[i] = 0;                 //��ʼ��ÿ�����ʳ���Ϊ0
	
	while ((c = getchar()) != EOF) //�Ӽ��̻�ȡ�ַ��������ж��Ƿ��������
	{
		if (c == ' ' || c == '\n' || c == '\t') //�ж��Ƿ���һ�����ʣ��ų��ո��Ʊ�������з���
		{
			state = OUT;                        //��ʼ��״̬Ϊ�������������������������
			if (nc > 0)                         //�ж��Ƿ�Ϊ���ʣ������ַ��������0��
				if (nc < Maxword)               //�����ַ����Ƿ�С�ڵ�����󳤶�
					++wl[nc];                   //���浥�����ַ��ĸ���
				else                            
					++ovflow;                   //���������Χ������ovflow�����ַ���
			nc = 0;                             //ˢ�µ����е��ַ���Ϊ0
		}
		else if (state == OUT)                  //���򵥴�δ�������
		{ 
			state = IN;                         //˵���ַ��ڵ����ڣ�����Ҫ��������
			nc = 1;                             //��һ�����ַ���ʼ
		}

		else
			++nc;                               //�ڵ����ڼ�һ���ַ�����
	}
	maxvalue = 0;                               //��maxvalue��ֵ
	for (i = 1; i < Maxword;++i)                //ѭ��10��
		if (wl[i] > maxvalue)                   //�ж�maxvalue�����ֵ
		    maxvalue = wl[i];                   //��wl�����ֵ����maxvalue
	for (i = 1; i < Maxword; ++i)               //ѭ��10��
	{
		printf("%5d-%5d:", i, wl[i]);           
		if (wl[i] > 0)                          //�жϸ����ȵ���
		{
			if ((len = wl[i] * Maxhist / maxvalue) <= 0)//����len��ֵ���ж�ֱ�����ĳ���
				len = 1;                        //����len<1ʱ�����Ĵ���
		}
		else 
			len = 0;                            //ֱ��ͼ�޳���

		while (len > 0)                         //����len��ֵ���
		{  
	        putchar('*');                       //���һ����*��
			--len;                              //��һ��lenֵ
	    }
		 putchar('\n');                         
	}
	if (ovflow > 0)                             //�ж��Ƿ��е��ʳ��ȳ���Maxword
		printf("There are %d words >= %d\n", ovflow, Maxword);
}