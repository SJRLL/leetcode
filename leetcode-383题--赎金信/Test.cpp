����һ�������(ransom) �ַ�����һ����־(magazine)�ַ������жϵ�һ���ַ���ransom�ܲ����ɵڶ����ַ���magazines������ַ����ɡ�
������Թ��ɣ����� true �����򷵻� false��

(��Ŀ˵����Ϊ�˲���¶������ּ���Ҫ����־������������Ҫ����ĸ����ɵ����������˼��)


�ⷨһ�����ù�ϣӳ�䣬�ȱ���magazine�������˼�1���ٱ���ransom������һ�μ�һ��
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

�ⷨ����˼·���������ѵľ��Ƕ����⣬�������˼���ú����ַ������ַ��Ƿ�������ǰ��һ���ַ���
���Դ���ֻ��Ҫ�жϺ�������ַ��������Ƿ����ǰ���ַ��ļ��ɣ����ֳ���һ��ӳ�����⣬�ַ�ӳ�������
���������ֿ�����map��������⣬ֻ��Ҫ�ȱ��������ַ���ͳ�������ַ����ֵĴ�����Ȼ���ڱ���ǰ��һ���ַ�����
Ȼ��ÿ����һ���ַ����ͼ�ȥ1���ж��Ƿ�С��0���ɡ�������ӳ���ϵ�����Ҫ���ȿ���ʹ��map

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