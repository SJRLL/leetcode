给定一个字符串 S 和一个字符串 T，计算在 S 的子序列中 T 出现的个数。

一个字符串的一个子序列是指，通过删除一些（也可以不删除）字符且不干扰剩余字符相对位置所组成的新字符串。（例如，"ACE" 是 "ABCDE" 的一个子序列，而 "AEC" 不是）

示例 1 :

输入 : S = "rabbbit", T = "rabbit"
输出 : 3
 解释 :

	如下图所示, 有 3 种可以从 S 中得到 "rabbit" 的方案。
	(上箭头符号 ^ 表示选取的字母)

	rabbbit
	^^^^ ^^
	rabbbit
	^^ ^^^^
	rabbbit
	^^^ ^^^
示例 2:

 输入 : S = "babgbag", T = "bag"
 输出 : 5
  解释 :

	 如下图所示, 有 5 种可以从 S 中得到 "bag" 的方案。
	 (上箭头符号 ^ 表示选取的字母)

	 babgbag
	 ^^ ^
	 babgbag
	 ^^    ^
	 babgbag
	 ^    ^^
	 babgbag
	 ^  ^^
	 babgbag
	 ^^^

class Solution {
public:
	int numDistinct(string s, string t) {
		// 特殊情况处理
		if (s.size() == 0)
			return 0;

		// 构建dp数组
		vector<vector<long long int>> dp(t.size(), vector<long long int>(s.size()));

		// 初始边界条件预设
		for (int i = 0; i < (int)t.size(); i++) {
			dp[i][0] = 0;
		}
		dp[0][0] = (s[0] == t[0]);
		for (int i = 1; i < (int)s.size(); i++) {
			dp[0][i] = dp[0][i - 1] + (s[i] == t[0]);
		}

		// dp
		for (int i = 1; i < (int)t.size(); i++) {
			for (int j = 1; j < (int)s.size(); j++) {
				if (s[j] == t[i])
					dp[i][j] = dp[i - 1][j - 1] + dp[i][j - 1];
				else
					dp[i][j] = dp[i][j - 1];
			}
		}
		return dp.back().back();
	}
};
