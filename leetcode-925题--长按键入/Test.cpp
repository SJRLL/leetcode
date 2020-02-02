你的朋友正在使用键盘输入他的名字 name。偶尔，在键入字符 c 时，按键可能会被长按，而字符可能被输入 1 次或多次。

你将会检查键盘输入的字符 typed。如果它对应的可能是你的朋友的名字（其中一些字符可能被长按），那么就返回 True。

示例 1：

输入：name = "alex", typed = "aaleex"
输出：true
解释：'alex' 中的 'a' 和 'e' 被长按。
示例 2：

输入：name = "saeed", typed = "ssaaedd"
输出：false
解释：'e' 一定需要被键入两次，但在 typed 的输出中不是这样。
示例 3：

输入：name = "leelee", typed = "lleeelee"
输出：true
示例 4：

输入：name = "laiden", typed = "laiden"
输出：true
解释：长按名字中的字符并不是必要的。

//解题思路：遍历typed:
1.判断当前typed与当前name是否相同
2.如1不成立，判断与前一个name字符是否相同
3.如若2不成立返回false
由于两个string的有效字符长度会不同，需要判断


class Solution {
public:
	bool isLongPressedName(string name, string typed) {
		int j = 0, len = name.size();
		for (int i = 0; i < typed.size(); i++)
		{
			if (typed[i] == name[j] && j < len)
			{
				j++;
				continue;
			}
			else if (j > 0 && typed[i] == name[j - 1]) //首字母不同时j-1超出索引范围
			{
				continue;
			}
			else
			{
				return false;
			}
		}
		if (j == len)
			return true;
		else
			return false;
	}
};