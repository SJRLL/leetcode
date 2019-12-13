#include<iostream>
#include<stdlib.h>
#include<vector>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;

//先暂且不考虑代码的实现，如果举一个题目中的例子”abcabcbb”, 这时候我们要怎么找到没有重复的字串呢？
//
//应该是先一个一个字符的遍历，先a, b, c, 然后重复出现a，我们去掉第一次出现的a，继续遍历,
//遇到重复的b，去掉之前出现过的b，以此类推。最后得到无重复字符的字串长度为3。
//
//因此，我们需要记录的其实是之前出现过的字符。而实际上，我们先前模拟的其实是一个sliding window（滑动窗口），
//窗口内是没有出现过的字符，我们需要尽可能的扩展窗口的大小。窗口在向右滑动的过程中，
//我们只要知道每个字符最后出现的位置，以此建立映射。 最后这个滑动窗口的大小size就是我们的result。
//
//为了求出这个result，我们需要一个left变量来指向滑动窗口的左边界，如果遍历到的字符没有出现过，
//我们扩大右边界，如果出现过，分两种情况讨论。一是当前字符已经出现在滑动窗口内，我们需要把已在滑动窗口内的字符去掉，
//再加进来。去掉的方法是通过移动left指针，因为之前的Hashmap已经保存了该重复字符最后出现的位置，
//所以我们只要移动left指针的位置即可。第二种情况是该字符已经存储在Hashmap内但没有在滑动窗口内，
//这时我们可以直接加到滑动窗口内。最后，我们只维护一个res结果，每次用出现的窗口大小和res 本身比较，就可以得到最终结果。
//
//我们这里建的Hashmap，是建立每个字符和其最后出现位置之间的映射。变量res是用来记录最长无重复字串的长度，
//left是指向该无重复字串左边起始位置的前一个。
//
//Hashmap我们可以用一个256 或128位大小的整型数组来代替。因为ASCii表只有256个字符，然而键盘只能表示128个，
//所以用128也行。将所有位置初始为 - 1，然后遍历字符串。

int main()
{
	vector<int> hash(256, -1);
	string s;
	while (cin >> s)
	{
		int left = -1;
		int res = 0;
		int len = s.size();
		for (int i = 0; i < len; ++i)
		{
			left = max(left, hash[s[i]]);
			hash[s[i]] = i;
			res = max(res, i - left);
		}
		cout << res << endl;
	}
	system("pause");
	return 0;
}