class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<vector<int>> vv(rowIndex + 1); //���㿪ʼ����Ҫ��ʼ�����һ��
		if (rowIndex == 0)
			return{ 1 };
		for (int i = 0; i <= rowIndex; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				if (j == 0 || j == i)   //��λ�������ڱ߽磬ֱ����1
				{
					vv[i].push_back(1);
				}
				else
				{
					vv[i].push_back(vv[i - 1][j - 1] + vv[i - 1][j]);//����λ�õ�ֵ���������ϽǼ����Ͻǵĺ�
				}
			}
		}
		return vv[rowIndex];
	}
};