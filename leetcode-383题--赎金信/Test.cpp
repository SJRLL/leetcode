给定一个赎金信(ransom) 字符串和一个杂志(magazine)字符串，判断第一个字符串ransom能不能由第二个字符串magazines里面的字符构成。
如果可以构成，返回 true ；否则返回 false。

(题目说明：为了不暴露赎金信字迹，要从杂志上搜索各个需要的字母，组成单词来表达意思。)


解法一：运用哈希映射，先遍历magazine，出现了加1，再遍历ransom，出现一次减一。
class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		int hash[26] = { 0 };
		for (auto letter : magazine)
			hash[letter - 'a']++;
		for (auto letter : ransomNote)
		{
			if (hash[letter - 'a'] == 0)
				return false;
			else
				hash[letter - 'a']--;
		}
		return true;
	}
};

解法二：思路：此题最难的就是读懂题，此题的意思是用后面字符串的字符是否可以组成前面一个字符，
所以此题只需要判断后面各个字符的总数是否大于前面字符的即可，这又成了一个映射问题，字符映射个数，
所以我们又可以用map来解决问题，只需要先遍历后面字符串统计所有字符出现的次数，然后在遍历前面一个字符串，
然后每遍历一个字符串就减去1再判断是否小于0即可。遇到有映射关系的题就要优先考虑使用map

class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		unordered_map<char, int> map;
		for (int i = 0; i<magazine.size(); ++i)
		{
			map[magazine[i]] += 1;
		}
		for (int i = 0; i<ransomNote.size(); ++i)
		{
			map[ransomNote[i]] -= 1;
			if (map[ransomNote[i]]<0)
				return false;
		}
		return true;
	}
};