��һ������Ϊ n ������ nums ����������ֶ��� 0��n - 1 �ķ�Χ�ڡ�������ĳЩ�������ظ��ģ�����֪���м��������ظ��ˣ�Ҳ��֪��ÿ�������ظ��˼��Ρ����ҳ�����������һ���ظ������֡�

ʾ�� 1��

���룺
[2, 3, 1, 0, 2, 5, 3]
�����2 �� 3
class Solution {
public:
	int findRepeatNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int len = nums.size();
		for (int i = 0; i<len; ++i)
		{
			if (nums[i] == nums[i + 1])
			{
				return nums[i];
				break;
			}
		}
		return false;
	}
};