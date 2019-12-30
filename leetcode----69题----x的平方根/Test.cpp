//方法一：利用库函数，投机取巧
class Solution {
public:
	int mySqrt(int x) {
		return sqrt(x);
	}
};

//方法二：二分法，一个从头找，一个从一半大于与1的位置找
class Solution
{
public:
	int mySqrt(int x)
	{
		//在计算平方根的时候int可能存在溢出，所以这里用long  long
		long long i = 0;
		long long j = x / 2 + 1;   //对于任何一个非负整数的平方根不会大于x/+1

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

//方法三：牛顿法
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