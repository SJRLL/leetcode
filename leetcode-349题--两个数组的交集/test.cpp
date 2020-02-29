
给定两个数组，编写一个函数来计算它们的交集。

示例 1:

输入 : nums1 = [1, 2, 2, 1], nums2 = [2, 2]
输出 : [2]
	 示例 2 :

 输入 : nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4]
  输出 : [9, 4]

class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		// 用unordered_set对nums1中的元素去重
		unordered_set<int> s1;
		for (auto e : nums1)
		{
			s1.insert(e);
		}
		// 用unordered_set对nums2中的元素去重
		unordered_set<int> s2;
		for (auto e : nums2)
		{
			s2.insert(e);
		}

		//遍历s1，如果s1中的元素在s2中出现过，则为交集
		vector<int> res;
		for (auto e : s1)
		{
			if (s2.find(e) != s2.end())
			{
				res.push_back(e);
			}
		}
		return res;
	}
};