#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		if (n / 10 == 0)return n;
			
		long y = 0;
		while (n)
		{
			y *= 10;
			if (y > INT_MAX || y < INT_MIN)//判断是否溢出
				return 0;
			y += n % 10;//取出n的个位，存入y的对称的位置
			n /= 10;    //去掉个位			
		}
		cout << y << endl;;
	}

	system("pause");
	return 0;
}