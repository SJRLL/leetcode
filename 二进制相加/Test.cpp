class Solution {
public:
	string addBinary(string a, string b) {
		string s;
		int increase = 0;
		//���ַ���������һ�������̵��ַ���ǰ�油0
		if (a.size() < b.size())
		while (a.size() < b.size())
			a.insert(a.begin(), '0');
		if (a.size() > b.size())
		while (a.size() > b.size())
			b.insert(b.begin(), '0');

		while (!a.empty())
		{
			int l = a.back() + b.back() - '0' - '0' + increase;
			increase = l / 2;
			s.insert(s.begin(), l % 2 + '0');
			a.pop_back();
			b.pop_back();
		}
		//���������λ
		if (increase == 1)
			s.insert(s.begin(), '1');
		return s;
	}
};
