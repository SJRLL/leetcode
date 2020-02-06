
//解法一：层次遍历，没加入一个元素，就扩充res的长度，知道添加完所有元素为止
class Solution {
public:
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<vector<int> > res(1);
		for (int i = 0; i<nums.size(); i++){
			int cnt = res.size();
			for (int j = 0; j<cnt; j++){
				vector<int> tmp = res[j];
				tmp.push_back(nums[i]);
				res.push_back(tmp);
			}
		}
		return res;
	}
};

//解法二：位运算
class Solution {
public:
	vector<vector<int>> subsets(vector<int>& nums) {
		int S = nums.size();
		int N = 1 << S;
		vector<vector<int> > res;
		for (int i = 0; i < N; ++i) {
			vector<int> v;
			for (int j = 0; j < S; ++j)
			if (i & (1 << j))
				v.push_back(nums[j]);
			res.push_back(v);
		}
		return res;
	}
};
