class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<vector<int>> vv(rowIndex + 1); //从零开始，需要初始化多加一行
		if (rowIndex == 0)
			return{ 1 };
		for (int i = 0; i <= rowIndex; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				if (j == 0 || j == i)   //若位置在坐于边界，直接填1
				{
					vv[i].push_back(1);
				}
				else
				{
					vv[i].push_back(vv[i - 1][j - 1] + vv[i - 1][j]);//其他位置的值，就是左上角加右上角的和
				}
			}
		}
		return vv[rowIndex];
	}
};