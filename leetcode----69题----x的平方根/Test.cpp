//����һ�����ÿ⺯����Ͷ��ȡ��
class Solution {
public:
	int mySqrt(int x) {
		return sqrt(x);
	}
};

//�����������ַ���һ����ͷ�ң�һ����һ�������1��λ����
class Solution
{
public:
	int mySqrt(int x)
	{
		//�ڼ���ƽ������ʱ��int���ܴ������������������long  long
		long long i = 0;
		long long j = x / 2 + 1;   //�����κ�һ���Ǹ�������ƽ�����������x/+1

		while (i <= j)
		{
			long long mid = (i + j) / 2;
			long long res = mid*mid;
			if (res == x)
			{
				return mid;
			}
			else if (res<x)
			{
				i = mid + 1;
			}
			else
			{
				j = mid - 1;
			}
		}
		return j;
	}
};

//��������ţ�ٷ�
class Solution {
public:
	int mySqrt(int x) {
		if (x == 0)
			return 0;
		double last = 0;
		double res = 1;
		while (res != last)
		{
			last = res;
			res = (res + x / res) / 2;
		}
		return (int)res;
	}
};