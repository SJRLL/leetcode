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
			if (y > INT_MAX || y < INT_MIN)//�ж��Ƿ����
				return 0;
			y += n % 10;//ȡ��n�ĸ�λ������y�ĶԳƵ�λ��
			n /= 10;    //ȥ����λ			
		}
		cout << y << endl;;
	}

	system("pause");
	return 0;
}