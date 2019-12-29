//思路：本题利用了排序自定义算法的字典序，例如
//  3 5 9 30 34
//  35>53    3430>3034   所以序列变成  5   3   9   34  30
//  95>59   序列变成   9  5   34  3  30

class Solution {
public:
	string largestNumber(vector<int>& nums) {
		string res;
		sort(nums.begin(), nums.end(), Cmp);  //按字符串形式将顺序排好
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