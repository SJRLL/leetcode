给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。

说明：本题中，我们将空字符串定义为有效的回文串。

示例 1:

输入 : "A man, a plan, a canal: Panama"
输出 : true
	 示例 2 :

 输入 : "race a car"
  输出 : false



class Solution {
public:
	bool isPalindrome(string s) {
		if (s.empty())
		{
			return true;
		}
		int begin = 0;
		int end = s.size() - 1;
		while (begin < end)
		{
			//从前往后找一个数字字符或者字母
			while (begin != end)
			{
				if (IsNumberOrLetter(s[begin]))
				{
					break;
				}
				else
				{
					++begin;
				}


			}
			//从后往前找一个数字字符或者字母
			while (begin < end)
			{
				if (IsNumberOrLetter(s[end]))
				{
					break;
				}
				else
				{
					--end;
				}

			}
			if (begin < end)
			{
				if ((s[begin] + 32 - 'a') % 32 != (s[end] + 32 - 'a') % 32)
					return false;

				++begin;
				--end;
			}
		}
		return true;

	}

	bool IsNumberOrLetter(char c)
	{
		if (c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		{
			return true;
		}
		return false;
	}
};