给定一个整数数组 nums ，找出一个序列中乘积最大的连续子序列（该序列至少包含一个数）。

示例 1:

输入 : [2, 3, -2, 4]
输出 : 6
解释 : 子数组[2, 3] 有最大乘积 6。


例 2 :

输入 : [-2, 0, -1]
输出 : 0
解释 : 结果不能为 2, 因为[-2, -1] 不是子数组。

//解法一：动态规划
class Solution {
public:
	int maxProduct(vector<int>& nums) {
		if (nums.empty()) return 0;
		if (nums.size() == 1) return nums[0];
		int min_neg = 0;
		int max_pos = 0;
		int res = INT_MIN;
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] == 0) {
				min_neg = max_pos = 0;
			}
			else if (nums[i] > 0) {
				max_pos = max(max_pos * nums[i], nums[i]);
				min_neg = min_neg * nums[i];
			}
			else {
				int t = max_pos;
				max_pos = min_neg * nums[i];
				min_neg = min(t * nums[i], nums[i]);
			}
			res = max(res, max_pos);
		}
		return res;
	}
};

//双向遍历
class Solution {
public:
	int maxProduct(vector<int>& nums) {
		int res = INT_MIN;
		int left_max = 1;
		for (int i = 0; i < nums.size(); ++i) {
			left_max *= nums[i];
			res = max(res, left_max);
			left_max = (left_max == 0) ? 1 : left_max;
		}
		int right_max = 1;
		for (int i = nums.size() - 1; i >= 0; --i) {
			right_max *= nums[i];
			res = max(res, right_max);
			right_max = (right_max == 0) ? 1 : right_max;
		}
		return res;
	}
};
