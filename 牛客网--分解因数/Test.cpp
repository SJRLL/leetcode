

所谓因子分解，就是把给定的正整数a，分解成若干个素数的乘积，即 a = a1 × a2 × a3 × ... × an, 并且 1 < a1 ≤ a2 ≤ a3 ≤ ... ≤ an。其中a1、a2、...、an均为素数。 先给出一个整数a，请输出分解后的因子。

输入描述 :
输入包含多组数据，每组数据包含一个正整数a（2≤a≤1000000）。


输出描述 :
对应每组数据，以“a = a1 * a2 * a3...”的形式输出因式分解后的结果。

例：10
输出：2*5

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