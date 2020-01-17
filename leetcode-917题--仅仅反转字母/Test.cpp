ʾ�� 1��

���룺"ab-cd"
�����"dc-ba"
ʾ�� 2��

���룺"a-bC-dEf-ghIj"
�����"j-Ih-gfE-dCba"
ʾ�� 3��

���룺"Test1ng-Leet=code-Q!"
�����"Qedo1ct-eeLg=ntse-T!"

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