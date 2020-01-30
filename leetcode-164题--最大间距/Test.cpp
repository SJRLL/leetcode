给定一个无序的数组，找出数组在排序之后，相邻元素之间最大的差值。

如果数组元素个数小于 2，则返回 0。

示例 1 :

输入 : [3, 6, 9, 1]
输出 : 3
 解释 : 排序后的数组是[1, 3, 6, 9], 其中相邻元素(3, 6) 和(6, 9) 之间都存在最大差值 3。
  示例 2 :

输入 : [10]
输出 : 0
 解释 : 数组元素个数小于 2，因此返回 0。


//解题思路：先排序，在寻找最大间距
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int maximumGap(vector<int>& nums) {
		int len = nums.size();
		int ans = 0;
		if (len < 2)
			return ans;

		sort(nums.begin(), nums.end());

		for (int i = 0; i<len - 1; i++)
			ans = nums[i + 1] - nums[i]>ans ? nums[i + 1] - nums[i] : ans;

		return ans;
	}
};
