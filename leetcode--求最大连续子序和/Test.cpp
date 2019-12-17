class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		if (nums.size() == 1)
		{
			return nums[0];
		}
		else
		{
			int CurMax = nums[0];
			int Max = CurMax;
			for (int i = 1; i<nums.size(); ++i)
			{
				CurMax = max(CurMax + nums[i], nums[i]);
				Max = max(Max, CurMax);
			}
			return Max;
		}

	}
};