
//�ⷨһ����α�����û����һ��Ԫ�أ�������res�ĳ��ȣ�֪�����������Ԫ��Ϊֹ
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

//�ⷨ����λ����
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
