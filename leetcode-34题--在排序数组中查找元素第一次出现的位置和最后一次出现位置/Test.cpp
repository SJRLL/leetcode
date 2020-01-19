//给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置。
//
//你的算法时间复杂度必须是 O(log n) 级别。
//
//如果数组中不存在目标值，返回 [-1, -1]。
//
//示例 1:
//
//输入 : nums = [5, 7, 7, 8, 8, 10], target = 8
//输出 : [3, 4]
//
//示例 2 :
//
//输入 : nums = [5, 7, 7, 8, 8, 10], target = 6
// 输出 : [-1, -1]

解题思路：本题利用二分查找算法思想，从两边递进寻找target出现的位置，然后返回出现的首次位置和最后出现的位置。
class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {

		if (nums.size() == 0)
			return{ -1, -1 };

		int begin = 0, end = nums.size() - 1;

		if (nums[begin] > target || nums[end] < target)
			return{ -1, -1 };

		while (begin <= end)
		{
			if (nums[begin] == target && nums[end] == target)
			{
				vector<int> ret = { begin, end };
				return ret;
			}

			int mid = (begin + end) / 2;
			if (nums[mid] < target)
				begin = mid + 1;
			else if (nums[mid] > target)
				end = mid - 1;
			else
			{
				begin = mid;
				end = mid;
				while (begin >= 0 && nums[begin] == target)
				{
					begin--;
				}
				while (end < nums.size() && nums[end] == target)
				{
					end++;
				}
				vector<int> ret = { begin + 1, end - 1 };
				return ret;
			}

			if (nums[begin] > target || nums[end] < target)
			{
				return{ -1, -1 };
			}
		}

		return{ -1, -1 };
	}
};
