//����һ����Ŀ˵����ֻ��һ��ֻ����һ�Σ������������Σ�������ֻ����һ�ε����֣��ض���ǰ��������һ�������ʾ�ҵ��ˡ�
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

//���������������˼�룬�������µ����ض�Ϊֻ����һ�ε���  ���(��ͬΪ1����ͬΪ0)��
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

//��������