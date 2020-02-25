给定一个包含非负数的数组和一个目标整数 k，编写一个函数来判断该数组是否含有连续的子数组，其大小至少为 2，
总和为 k 的倍数，即总和为 n*k，其中 n 也是一个整数。

示例 1:

输入 : [23, 2, 4, 6, 7], k = 6
输出 : True
解释 : [2, 4] 是一个大小为 2 的子数组，并且和为 6。
		
示例 2 :

输入 : [23, 2, 6, 4, 7], k = 6
输出 : True
解释 : [23, 2, 6, 4, 7]是大小为 5 的子数组，并且和为 42。


class Solution {
public:
	bool checkSubarraySum(vector<int>& nums, int k) {
		vector<int> sum(nums.size(), 0);
		if (nums.size() <= 0) 
			return false;
		sum[0] = nums[0];
		int i, j;
		for (i = 1; i<nums.size(); i++)
		{
			sum[i] += sum[i - 1] + nums[i];
		}
		int flag = 0;
		for (i = 0; i<nums.size(); i++)
		{
			for (j = i + 1; j<nums.size(); j++)
			{
				int s1 = sum[j] - sum[i] + nums[i];
				if (k != 0 && s1%k == 0)
				{
					return true;
				}
				if (k == 0 && s1 == 0)
					return true;
			}
		}
		return false;
	}
};
