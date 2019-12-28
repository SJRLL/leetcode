//输入: 121
//输出 : true
//示例 2 :
//
//输入 : -121
//输出 : false
//解释 : 从左向右读, 为 - 121 。 从右向左读, 为 121 - 。因此它不是一个回文数。
//
//示例 3 :
//输入 : 10
//输出 : false
//解释 : 从右向左读, 为 01 。因此它不是一个回文数。
//

class Solution {
public:
	bool isPalindrome(int x) {
		string s;
		s = to_string(x);
		int len = s.size();
		int i = 0, j = len - 1;
		if (s[0] == '-')
		{
			return false;
		}
		while (i<j)
		{
			if (s[i] == s[j])
			{
				i++;
				j--;
			}
			else
			{
				return false;
				break;
			}
		}
		return true;
	}
};