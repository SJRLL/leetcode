//给定一个包含 0, 1, 2, ..., n 中 n 个数的序列，找出 0 ..n 中没有出现在序列中的那个数。
//
//示例 1:
//
//输入 : [3, 0, 1]
//输出 : 2
// 示例 2 :
//
//输入 : [9, 6, 4, 2, 3, 5, 7, 0, 1]
//输出 : 8
//
//

解法1：进行异或操作，个数比数组下标多一位，最终找出那个数
class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int res = nums.size();
		//sort(nums.begin(),nums.end());
		for (int i = 0; i<nums.size(); ++i)
		{
			res ^= nums[i];
			res ^= i;
		}
		return res;
	}
};


解法2：排序后，比较下标和该下标对应的数，若相同则继续前进，若不同则表示找到了，到最后依然没找到则表示，为最后一位加1，即数组大小
int missingNumber(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	for (int i = 0; i<nums.size(); i++)
	{
		if (nums[i] != i)
			return i;
	}
	return nums.size();
}

解法3：等差数列求和，用数列和sum减去num中的数据，剩下的数据就是缺失的数据
class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int sum = (nums.size()*(nums.size() + 1)) / 2;
		for (int i = 0; i<nums.size(); i++)
		{
			sum -= nums[i];
		}
		return sum;
	}
};
