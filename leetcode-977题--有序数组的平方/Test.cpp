����һ�����ǵݼ�˳��������������� A������ÿ�����ֵ�ƽ����ɵ������飬Ҫ��Ҳ���ǵݼ�˳������


ʾ�� 1��

���룺[-4, -1, 0, 3, 10]
�����[0, 1, 9, 16, 100]
ʾ�� 2��

���룺[-7, -3, 2, 3, 11]
�����[4, 9, 9, 49, 121]


class Solution {
public:
	vector<int> sortedSquares(vector<int>& A) {
		for (int i = 0; i<A.size(); ++i)
		{
			A[i] = A[i] * A[i];
		}
		sort(A.begin(), A.end());
		return A;
	}
};