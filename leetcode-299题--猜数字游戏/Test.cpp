//
//���㷽�����£�
//
//��ţ = ��ͬλ�õ���ͬ�ַ���
//ĸţ = ���Ӵ���ͬ�ַ��� - ��ţ��
//���Ӵ���ͬ�ַ�����Ҫ�ȱ���һ��secret�������ַ���Ϣ(ÿ���ַ����ٸ�)��Ȼ���ٱ���һ��guass, �����ַ���Ϣ(���guass[i]���ֹ��ͼ�һ)
//
//��ͬλ�õ���ͬ�ַ�������һ�μ��ɡ��ܹ�O(3n)


class Solution {
public:
	string getHint(string secret, string guess) {
		vector<int> v(10, 0);
		int count1 = 0, count2 = 0;
		for (auto p : secret){//�洢�ַ���Ϣ
			v[p - '0']++;
		}
		for (auto q : guess){//�����ַ���Ϣ
			if (v[q - '0']){
				count1++;
				v[q - '0']--;
			}
		}

		for (int i = 0; i<secret.size(); i++){//�ҹ�ţ
			if (secret[i] == guess[i]) count2++;
		}

		return to_string(count2) + "A" + to_string(count1 - count2) + "B";

	}
};
