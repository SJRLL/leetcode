//
//编写一个程序判断给定的数是否为丑数。
//
//丑数就是只包含质因数 2, 3, 5 的正整数。
//
//示例 1:
//
//输入 : 6
//输出 : true
// 解释 : 6 = 2 × 3
//
//示例 2 :
//
//输入 : 8
//输出 : true
//解释 : 8 = 2 × 2 × 2
//
//

题解1：不断的模2，3，5，模为0的话，则除等2，3，5，如果能除尽就为丑数，如果不能则不是
class Solution {
public:
	bool isUgly(int num) {
		if (num == 1)
			return true;
		if (num <= 0)
			return false;
		while (num != 1)
		{
			if (num % 2 == 0)
			{
				num /= 2;
			}
			else if (num % 3 == 0)
			{
				num /= 3;
			}
			else if (num % 5 == 0)
			{
				num /= 5;
			}
			else
			{
				return false;
			}
		}
		return true;
	}
};