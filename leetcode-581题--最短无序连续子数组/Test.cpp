
����һ���������飬����ҪѰ��һ�������������飬���������������������������ô�������鶼���Ϊ��������

���ҵ���������Ӧ����̵ģ���������ĳ��ȡ�
ʾ�� 1:

���� : [2, 6, 4, 8, 10, 9, 15]
��� : 5
���� : ��ֻ��Ҫ��[6, 4, 8, 10, 9] ��������������ô���������Ϊ��������


//�ⷨһ��
class Solution {
public:
	int findUnsortedSubarray(vector<int>& nums) {

		//���� i �� j ���� ͷβָ��
		// nums[i] С�ڵ��ں��� nums[i + 1]~nums[j]����Ԫ��ʱ��
		//˵��nums[i]������λ����,��ʱ i++
		// nums[j] ���ڵ���ǰ�� nums[i]~ nums[j - 1]��˵��nums[j] �Ѿ�������λ���ϣ���ʱj--
		//���Ӵ��������С��Χ����С��������

		if (nums.size() <= 1)
			return 0;
		int i = 0, j = nums.size() - 1;
		while (i < j)
		{
			int oi = i; //���浱ǰ i ��ֵ
			int oj = j; //���浱ǰ j ��ֵ
			int k;
			for (k = i + 1; k <= j; k++)
			{

				if (nums[i] > nums[k])
					break;
			}
			if (k == j + 1)
			{
				// nums[i] С�ڵ��ں��� nums[i + 1]~nums[j]����Ԫ��ʱ
				i++;
			}
			for (k = j - 1; k >= oi; k--)
			if (nums[j] < nums[k])
				break;
			//nums[j] ���ڵ���ǰ�� nums[i]~ nums[j - 1]
			if (k == oi - 1)
				j--;
			// i �� j ֵ��û�����仯��˵�� nums[i] ~ nums[j]�������������������
			if (oi == i && oj == j)
				break;
		}
		if (i == j)
			return 0;
		else
			return j - i + 1;
	}
};

//�ⷨ����
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
