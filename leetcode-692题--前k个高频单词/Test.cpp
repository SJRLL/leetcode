class Solution {
public:
	vector<string> topKFrequent(vector<string>& words, int k) {
		std::map<string, int> m;
		for (size_t i = 0; i<words.size(); ++i){
			m[words[i]]++;
		}
		vector<pair<string, int>> v(m.begin(), m.end());
		std::sort(v.begin(), v.end(), [](const pair<string, int>& l, const pair<string, int>& r)
		{
			if (l.second == r.second)
			{
				for (size_t i = 0; i<min(l.first.size(), r.first.size()); ++i)
				{
					if (l.first[i] == r.first[i]) continue;
					return l.first[i] < r.first[i];
				}
			}
			return l.second > r.second;
		});
		vector<string> res;
		for (int i = 0; i<k; ++i){
			res.push_back(v[i].first);
		}
		return res;
	}
};
