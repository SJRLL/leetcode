
�����������飬��дһ���������������ǵĽ�����

ʾ�� 1:

���� : nums1 = [1, 2, 2, 1], nums2 = [2, 2]
��� : [2]
	 ʾ�� 2 :

 ���� : nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4]
  ��� : [9, 4]

class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		// ��unordered_set��nums1�е�Ԫ��ȥ��
		unordered_set<int> s1;
		for (auto e : nums1)
		{
			s1.insert(e);
		}
		// ��unordered_set��nums2�е�Ԫ��ȥ��
		unordered_set<int> s2;
		for (auto e : nums2)
		{
			s2.insert(e);
		}

		//����s1�����s1�е�Ԫ����s2�г��ֹ�����Ϊ����
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