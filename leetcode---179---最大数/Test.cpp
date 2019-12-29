//˼·�����������������Զ����㷨���ֵ�������
//  3 5 9 30 34
//  35>53    3430>3034   �������б��  5   3   9   34  30
//  95>59   ���б��   9  5   34  3  30

class Solution {
public:
	string largestNumber(vector<int>& nums) {
		string res;
		sort(nums.begin(), nums.end(), Cmp);  //���ַ�����ʽ��˳���ź�
		for (int i = 0; i<nums.size(); ++i)
		{
			res += to_string(nums[i]);
		}
		if (res[0] == '0')
			res = '0';

		return res;
	}

	static bool Cmp(const int &a, const int &b)
	{
		string s1 = to_string(a) + to_string(b);
		string s2 = to_string(b) + to_string(a);
		return s1>s2;
	}
};