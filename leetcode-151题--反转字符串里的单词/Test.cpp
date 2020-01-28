给定一个字符串，逐个翻转字符串中的每个单词。



示例 1：

输入 : "the sky is blue"
输出 : "blue is sky the"

示例 2：

输入 : "  hello world!  "
输出 : "world! hello"
解释 : 输入字符串可以在前面或者后面包含多余的空格，但是反转后的字符不能包括。
示例 3：

输入 : "a good   example"
输出 : "example good a"
解释 : 如果两个单词间有多余的空格，将反转后单词间的空格减少到只含一个。


说明：

无空格字符构成一个单词。
输入字符串可以在前面或者后面包含多余的空格，但是反转后的字符不能包括。
如果两个单词间有多余的空格，将反转后单词间的空格减少到只含一个。



解题思路
倒序输出的题，可以首选往栈上考虑；本题中，在遇到空字符串之前，把遍历到的字符串加到栈里。遍历完后，从栈首开始弹出，
用新的字符串拼接弹出的字符串。如果栈里还有字符串，那么拼接时要加上一个空字符串；如果没有，那么直接加上字符串即可。


class Solution {
public:
	string reverseWords(string s) {
		stack<string> st;
		string t, ans;
		for (int i = 0; i < s.size(); i++){
			if (s[i] != ' '){
				while (s[i] != ' ' && i < s.size()){
					t += s[i];
					i++;
				}
				st.push(t);
				t.clear();
			}
		}
		while (!st.empty()){
			string tmp = st.top();
			st.pop();
			if (tmp != " "){
				if (st.empty()){
					ans += tmp;
				}
				else{
					ans += tmp + " ";
				}
			}
		}
		return ans;
	}
};