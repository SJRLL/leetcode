����һ���ַ�������֤���Ƿ��ǻ��Ĵ���ֻ������ĸ�������ַ������Ժ�����ĸ�Ĵ�Сд��

˵���������У����ǽ����ַ�������Ϊ��Ч�Ļ��Ĵ���

ʾ�� 1:

���� : "A man, a plan, a canal: Panama"
��� : true
	 ʾ�� 2 :

 ���� : "race a car"
  ��� : false



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
			//��ǰ������һ�������ַ�������ĸ
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
			//�Ӻ���ǰ��һ�������ַ�������ĸ
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