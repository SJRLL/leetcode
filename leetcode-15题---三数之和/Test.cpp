class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int len = nums.size();
		vector<vector<int>> vv;
		vector<int> res;
		for (int i = 0; i < len - 2; ++i)
		{
			if (nums[i]>0)
				break;
			if (i > 0 && nums[i] == nums[i - 1])
			{
				continue;
			}
			int r = i + 1;
			int l = len - 1;
			int s = nums[i] + nums[r] + nums[l];
			while (r < l)
			{
				if (s>0)
				{
					l--;
				}
				else if (s < 0)
				{
					r++;
				}
				else
				{
					vv.push_back({ nums[i] + nums[r] + nums[l] });
					while (r < l && nums[l] == nums[++l]);
					while (r < l  &&  nums[r] == nums[--r]);
				}
			}

		}
	}
    return res;
};