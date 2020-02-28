在大小为 2N 的数组 A 中有 N + 1 个不同的元素，其中有一个元素重复了 N 次。

返回重复了 N 次的那个元素。



示例 1：

输入：[1, 2, 3, 3]
输出：3
示例 2：

输入：[2, 1, 2, 5, 3, 2]
输出：2
示例 3：

输入：[5, 1, 5, 2, 5, 3, 5, 4]
输出：5
class Solution {
public:
	int repeatedNTimes(vector<int>& A) {
		int len = A.size();
		if (len == 0)
		{
			return 0;
		}
		sort(A.begin(), A.end());
		int j = 0;
		for (int i = 1; i<len; ++i)
		{
			if (A[j] == A[i])
			{
				return A[j];
			}
			else
			{
				j++;
			}
		}
		return 0;
	}
};

class Solution {
public:
	int repeatedNTimes(vector<int>& A) {
		int len = A.size();
		for (int i = 0; i<len; ++i)
		{
			for (int j = i + 1; j<len; ++j)
			{
				if (A[j] == A[i])
				{
					return A[i];
				}
			}
		}
		return 0;
	}
};