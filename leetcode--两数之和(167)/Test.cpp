//����: numbers = [2, 7, 11, 15], target = 9
//���:[1, 2]
//���� : 2 �� 7 ֮�͵���Ŀ���� 9 ����� index1 = 1, index2 = 2 ��


class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		int len = numbers.size();
		int i = 0, j = len - 1;
		while (i<j)
		{
			int sum = numbers[i] + numbers[j];
			if (sum == target)
			{
				return{ i + 1, j + 1 };
			}
			else if (sum<target)
			{
				i++;
			}
			else
			{
				j--;
			}
		}
		return{ -1, -1 };

	}
};
