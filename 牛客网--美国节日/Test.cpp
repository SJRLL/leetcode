和中国的节日不同，美国的节假日通常是选择某个月的第几个星期几这种形式，因此每一年的放假日期都不相同。具体规则如下：
* 1月1日：元旦
* 1月的第三个星期一：马丁·路德·金纪念日
* 2月的第三个星期一：总统节
* 5月的最后一个星期一：阵亡将士纪念日
* 7月4日：美国国庆
* 9月的第一个星期一：劳动节
* 11月的第四个星期四：感恩节
* 12月25日：圣诞节
现在给出一个年份，请你帮忙生成当年节日的日期。

输入描述 :
输入包含多组数据，每组数据包含一个正整数year（2000≤year≤9999）。

// write your code here cpp
#include<iostream>
using namespace std;

int WeekToDay(int y, int m, int c, int w, bool B)//输入哪年哪月第几个星期几，以及是正数还是倒数，输出几号
{
	int d, week, i;
	if (m == 1 || m == 2)
	{
		m += 12;
		y--;
	}
	i = 0;
	for (d = B ? 1 : 31; d <= B ? 31 : 1; B ? (d++) : (d--))
	{
		week = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
		if (week + 1 == w)
		{
			i++;
		}
		if (i == c)
			break;
	}
	return d;
}

int main(void){
	int y;
	while (cin >> y){
		cout << y << "-01-01" << endl;
		printf("%d-01-%02d\n", y, WeekToDay(y, 1, 3, 1, 1));
		printf("%d-02-%02d\n", y, WeekToDay(y, 2, 3, 1, 1));
		printf("%d-05-%02d\n", y, WeekToDay(y, 5, 1, 1, 0));//倒数
		cout << y << "-07-04" << endl;
		printf("%d-09-%02d\n", y, WeekToDay(y, 9, 1, 1, 1));
		printf("%d-11-%02d\n", y, WeekToDay(y, 11, 4, 4, 1));
		cout << y << "-12-25" << endl << endl;
	}
	return 0;
}
