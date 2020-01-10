//给定一个整数数组 nums，其中恰好有两个元素只出现一次，其余所有元素均出现两次。 找出只出现一次的那两个元素。
//
//示例 :
//
//输入 : [1, 2, 1, 3, 2, 5]
//输出 : [3, 5]


class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<int> res;
		for (int i = 0; i<nums.size(); ++i)
		{
			int flag = 0;
			for (int j = 0; j<nums.size(); ++j)
			{
				if (nums[i] == nums[j] && i != j)
				{
					flag = 1;
				}
			}
			if (flag == 0)
			{
				res.push_back(nums[i]);
			}
		}
		return res;
	}
};