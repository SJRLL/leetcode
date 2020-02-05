
给定一个整数数组，你需要寻找一个连续的子数组，如果对这个子数组进行升序排序，那么整个数组都会变为升序排序。

你找到的子数组应是最短的，请输出它的长度。
示例 1:

输入 : [2, 6, 4, 8, 10, 9, 15]
输出 : 5
解释 : 你只需要对[6, 4, 8, 10, 9] 进行升序排序，那么整个表都会变为升序排序。


//解法一：
class Solution {
public:
	int findUnsortedSubarray(vector<int>& nums) {

		//设置 i 和 j 两个 头尾指针
		// nums[i] 小于等于后面 nums[i + 1]~nums[j]所有元素时，
		//说明nums[i]在最终位置上,此时 i++
		// nums[j] 大于等于前面 nums[i]~ nums[j - 1]，说明nums[j] 已经在最终位置上，此时j--
		//即从大的数组缩小范围到更小的子数组

		if (nums.size() <= 1)
			return 0;
		int i = 0, j = nums.size() - 1;
		while (i < j)
		{
			int oi = i; //保存当前 i 的值
			int oj = j; //保存当前 j 的值
			int k;
			for (k = i + 1; k <= j; k++)
			{

				if (nums[i] > nums[k])
					break;
			}
			if (k == j + 1)
			{
				// nums[i] 小于等于后面 nums[i + 1]~nums[j]所有元素时
				i++;
			}
			for (k = j - 1; k >= oi; k--)
			if (nums[j] < nums[k])
				break;
			//nums[j] 大于等于前面 nums[i]~ nums[j - 1]
			if (k == oi - 1)
				j--;
			// i 和 j 值都没发生变化，说明 nums[i] ~ nums[j]是最短无序连续子数组
			if (oi == i && oj == j)
				break;
		}
		if (i == j)
			return 0;
		else
			return j - i + 1;
	}
};

//解法二：
class Solution {
public:
	int findUnsortedSubarray(vector<int>& nums) {
		const int len = nums.size();
		vector<int> copy = nums;
		sort(copy.begin(), copy.end());
		int l = 0, r = len - 1;
		while (l<len && copy[l] == nums[l]) l++;
		while (r >= l && copy[r] == nums[r]) r--;
		return r - l + 1;
	}
};
