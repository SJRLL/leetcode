

��ν���ӷֽ⣬���ǰѸ�����������a���ֽ�����ɸ������ĳ˻����� a = a1 �� a2 �� a3 �� ... �� an, ���� 1 < a1 �� a2 �� a3 �� ... �� an������a1��a2��...��an��Ϊ������ �ȸ���һ������a��������ֽ������ӡ�

�������� :
��������������ݣ�ÿ�����ݰ���һ��������a��2��a��1000000����


������� :
��Ӧÿ�����ݣ��ԡ�a = a1 * a2 * a3...������ʽ�����ʽ�ֽ��Ľ����

����10
�����2*5

// write your code here cpp
#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

//#include <stdio.h>
int main()
{
	int num = 0;
	while (scanf("%d", &num) != EOF)
	{
		printf("%d = ", num);
		for (int i = 2; i <= num; i++)
		{
			if (num%i == 0)
			{
				if (num == i)
					printf("%d", i);
				else
					printf("%d * ", i);
				num = num / i;
				i = 1;
			}
		}
		printf("\n");
	}
}