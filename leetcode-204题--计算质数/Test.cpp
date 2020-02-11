统计所有小于非负整数 n 的质数的数量。

示例 :

输入 : 10
输出 : 4
 解释 : 小于 10 的质数一共有 4 个, 它们是 2, 3, 5, 7 。

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