#define _CRT_SECURE_NO_WARNINGS 1

#include"SString.h"

int Index_BF(SString S, SString T, int pos)
{
	int i = pos;//��pos��Ԫ�ؿ�ʼ����ƥ��
	int j = 1;
	while (i <= S.length&&j <= T.length)
	{
		if (S.ch[i] == T.ch[j])
		{
			++i; 
			++j;
		}
		else
		{
			i = i - j + 2;
			j = 1;
		}
	}
	if (j > T.length)
	{
		return i - T.length;
	}
	else
	{
		return 0;
	}
}













