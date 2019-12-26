//方法一：题目说明，只有一个只出现一次，其他都是两次，先排序，只出现一次的数字，必定和前后两个不一样，则表示找到了。
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		if (nums.size() == 1)
		{
			return nums[0];
		}
		sort(nums.begin(), nums.end());
		int len = nums.size();
		if (nums[0] != nums[1])return nums[0];
		for (int i = 1; i<len - 1; ++i)
		{
			if ((nums[i - 1] != nums[i]) && (nums[i] != nums[i + 1]))
			{
				return nums[i];
			}
		}
		return nums[len - 1];
	}
};

//方法二：采用亦或思想，最终留下的数必定为只出现一次的数  亦或(不同为1，相同为0)；
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		for (int i = 1; i<nums.size(); ++i)
		{
			nums[0] = nums[0] ^ nums[i];
		}
		return nums[0];
	}
};

//方法三：