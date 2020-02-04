//�ⷨһ������map��setԭ�������ȡ����ӦԪ��

class Solution {
public:
	int thirdMax(vector<int>& nums) {
		set<int> s(nums.begin(), nums.end());
		auto it = s.rbegin();
		if (s.size()<3)
		{
			return *it;
		}
		else
		{
			return *(++(++it));
		}
	}
};

//�ⷨ����ʼ��ά��������С�����������󷵻��������������Ǹ�
class Solution {
public:
	int thirdMax(vector<int>& nums) {
		int a = INT_MIN, b = INT_MIN, c = INT_MIN;
		bool flag = false;
		int n = nums.size();

		for (int i = 0; i<n; ++i)
		{
			if (nums[i] == INT_MIN)
			{
				flag = true;
				continue;
			}

			if (nums[i]>a)
			{
				c = b;
				b = a;
				a = nums[i];
			}
			else if (nums[i]<a)
			{
				if (nums[i]>b)
				{
					c = b;
					b = nums[i];
				}
				else if (nums[i]<b)
				{
					if (nums[i]>c)
					{
						c = nums[i];
					}
				}
			}
		}

		return c == INT_MIN ? ((b>INT_MIN && flag) ? c : a) : c;
	}
};


//�ⷨ����ȥ�أ�����
#include <algorithm>
class Solution {
public:
	int thirdMax(vector<int>& nums) {   // by me
		sort(nums.begin(), nums.end());
		vector<int> newNums(1);
		newNums[0] = nums[0];
		for (int i = 1; i < nums.size(); i++)
		if ((newNums.back()) != nums[i])
			newNums.push_back(nums[i]);

		if (newNums.size() == 2) return newNums[1];
		else if (newNums.size() == 1) return newNums[0];
		else return newNums[newNums.size() - 3];
	}
};
