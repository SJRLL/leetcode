ͳ������С�ڷǸ����� n ��������������

ʾ�� :

���� : 10
��� : 4
 ���� : С�� 10 ������һ���� 4 ��, ������ 2, 3, 5, 7 ��

class Solution {
public:
	int IsPrime(int n)
	{
		if (n<3)
		{
			return n>1;
		}
		if (n % 2 == 0)
		{
			return 0;
		}
		int stop = sqrt(n) + 1;
		for (int i = 3; i <= stop; i += 2)
		{
			if (n%i == 0)
			{
				return 0;
			}
		}
		return 1;
	}
	int countPrimes(int n) {
		if (n<2)
		{
			return 0;
		}
		int count = 0;
		for (int i = 1; i<n; ++i)
		{
			if (IsPrime(i))
			{
				count++;
			}
		}
		return count;
	}
};