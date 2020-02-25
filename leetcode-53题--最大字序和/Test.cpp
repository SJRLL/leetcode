给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

示例 :

输入 : [-2, 1, -3, 4, -1, 2, 1, -5, 4],
输出 : 6
 解释 : 连续子数组 [4, -1, 2, 1] 的和最大，为 6。

//方法一：动态规划法
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int len = nums.size();
		if (len == 1)
		{
			return nums[0];
		}
		int CurMax = nums[0];
		int maxSum = CurMax;

		for (int i = 1; i<len; ++i)
		{
			CurMax = max(nums[i], CurMax + nums[i]);
			maxSum = max(CurMax, maxSum);
		}
		return maxSum;
	}
};

//方法二：暴力法
class Solution
{
public:
	int maxSubArray(vector<int> &nums)
	{
		//类似寻找最大最小值的题目，初始值一定要定义成理论上的最小最大值
		int max = INT_MIN;
		int numsSize = int(nums.size());
		for (int i = 0; i < numsSize; i++)
		{
			int sum = 0;
			for (int j = i; j < numsSize; j++)
			{
				sum += nums[j];
				if (sum > max)
				{
					max = sum;
				}
			}
		}

		return max;
	}
};
