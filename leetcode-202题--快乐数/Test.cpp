编写一个算法来判断一个数是不是“快乐数”。

一个“快乐数”定义为：对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和，然后重复这个过程直到这个数变为 1，也可能是无限循环但始终变不到 1。如果可以变为 1，那么这个数就是快乐数。

示例 :

输入 : 19
输出 : true
 解释 :
	12 + 92 = 82
	82 + 22 = 68
	62 + 82 = 100
	12 + 02 + 02 = 1



	//解题思路：不是快乐数的数称为不快乐数（unhappy number），所有不快乐数的数位平方和计算，
	//最後都会进入 4 → 16 → 37 → 58 → 89 → 145 → 42 → 20 → 4 的循环中。

	 class Solution {
	 public:
		 vector<int> a{ 4, 16, 37, 58, 89, 145, 42, 20 };//不快乐数循环数
		 vector<int>::iterator pos;
		 bool isHappy(int n) {
			 pos = find(a.begin(), a.end(), n);
			 if (pos != a.end()) return false;//判断是否进入不快乐数循环
			 int flag = 0;//存放下一个数
			 while (n)
			 {
				 flag += pow(n % 10, 2);
				 n /= 10;
			 }
			 if (flag == 1)
				 return true;
			 else return isHappy(flag);//递归
		 }
	 };
