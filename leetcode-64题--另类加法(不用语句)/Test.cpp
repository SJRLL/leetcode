求 1 + 2 + ... + n ，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A ? B : C）。

示例 1：

输入 : n = 3
 输出 : 6
	  示例 2：

  输入 : n = 9
   输出 : 45

//方法一：递归求解
class Solution {
public:
	int sumNums(int n) {
		n && (n += sumNums(n - 1));
		return n;
	}
};

//方法二：构造类相加
class ConSum     //用构造函数实现
{
public:
	ConSum()      //利用创建n个对象来调n次构造函数
	{
		n++;
		sum += n;
	}
	static int GetSum()
	{
		return sum;
	}
	static int n;   //用静态数据存储才可达到累加效果
	static int sum;
};

int ConSum::n = 0;       //初始化静态成员
int ConSum::sum = 0;
class Solution {
public:
	int sumNums(int n) {
		ConSum::n = 0;       //初始化静态成员
		ConSum::sum = 0;
		ConSum *a = new ConSum[n];
		return ConSum::GetSum();   //访问静态成员函数必须用域作用符
	}
};
