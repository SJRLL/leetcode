示例 1：

输入："ab-cd"
输出："dc-ba"
示例 2：

输入："a-bC-dEf-ghIj"
输出："j-Ih-gfE-dCba"
示例 3：

输入："Test1ng-Leet=code-Q!"
输出："Qedo1ct-eeLg=ntse-T!"

class Solution {
public:
	string reverseOnlyLetters(string S) {
		int j = S.size() - 1;
		int i = 0;
		while (i<j)
		{
			while (i<j && !isalpha(S[i]))
			{
				i++;
			}
			while (i<j && !isalpha(S[j]))
			{
				j--;
			}
			if (i<j)
			{
				swap(S[i], S[j]);
				i++;
				j--;
			}
		}
		return S;
	}
};