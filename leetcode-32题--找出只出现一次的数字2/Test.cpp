//给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现了三次。找出那个只出现了一次的元素。
//
//说明：
//
//你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？
//
//示例 1:
//
//输入 : [2, 2, 3, 2]
//输出 : 3
// 示例 2 :
//
//  输入 : [0, 1, 0, 1, 0, 1, 99]
//   输出 : 99
//

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		if (nums.size() == 1)
			return nums[0];
		int res;
		for (int i = 0; i<nums.size(); ++i)
		{
			int flag = 0;
			for (int j = 0; j<nums.size(); ++j)
			{
				if (i != j && nums[i] == nums[j])
				{
					flag = 1;
				}
			}
			if (flag == 0)
				res = i;
		}
		return nums[res];
	}
};