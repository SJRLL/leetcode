#include<iostream>
#include<vector>
#include<stdlib.h>
using  namespace std;


//����һ
int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(1);
	v.push_back(4);
	v.push_back(6);
	v.push_back(8);
	v.push_back(8);
	v.push_back(9);
	v.push_back(78);
	v.push_back(88);

	int len = v.size();
	for (int i = 0; i < len; ++i)
	{
		int k = v[i];
		for (int j = i + 1; j < len; ++j)
		{
			if (k == v[j])
			{
				//����������ظ���Ԫ�أ���ߵ���ǰŲ�������ظ�Ԫ��
				for (int k = j; k < len - 1; ++k)
				{
					v[k] = v[k + 1];
				}
				len--;
				j--;
			}
		}
	}

	//for (auto e : v)
	//{
	//	cout << v[e]++ << endl;
	//}
	cout << len << endl;
	system("pause");
	return 0;
}

//������
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		if (nums.size() == 0)
//			return 0;
//		int i = 0;
//		for (int j = 1; j<nums.size(); ++j)
//		{
//			if (nums[j] != nums[i])
//			{
//				i++;
//				nums[i] = nums[j];
//			}
//		}
//		return i + 1;
//	}
//};