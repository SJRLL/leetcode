#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
	vector<int> v;
	vector<int> res;
	//res.reserve(4);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);

	//int k = 4;
	//int len = v.size();
	//for (int i = k; i < len; ++i)
	//{
	//	res.push_back(v[i]);
	//}
	//for (int i = 0; i < k; ++i)
	//{
	//	res.push_back(v[i]);
	//}

	//for (int i = 0;i<res.size();++i)
	//{
	//	cout << res[i] << endl;
	//}
	system("pause");
	return 0;
}

class Solution {
public:
	void rotate(vector<int>& nums, int k)
	{
		int len = nums.size();
		if (nums.empty() || len == 1 || k == 0 || k == len)
		{
			nums = nums;
		}
		else
		{
			//k = k%len;
			k = k%nums.size();
			reverse(nums.end() - k, nums.end());
			reverse(nums.begin(), nums.end() - k);
			reverse(nums.begin(), nums.end());
		}
	}
};

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		int len = nums.size();
		for (int i = 0; i<k; ++i)
		{
			int a = nums[len - 1];
			for (int j = len - 1; j >= 1; --j)
			{
				nums[j] = nums[j - 1];
			}
			nums[0] = a;
		}
	}
};