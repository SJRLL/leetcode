//�ַ�����ת :
//�������ַ���A��B������ܽ�A���м�ĳ��λ�÷ָ�Ϊ�����������ַ���������Ϊ�մ�����������ߵ��ַ����ƶ����ұ��ַ�����������µ��ַ������Ա�Ϊ�ַ���Bʱ����true��
//���磺���A = ��youzan����B = ��zanyou����A����you����zan���иλ��õ���zanyou����B��ͬ����true��
//
//�������� :
//2����Ϊ�յ��ַ���(˵�� : ����һ���ַ�����Ӣ�ķֺ�";"�ָ�Ϊ2���ַ���)
//���� : youzan; zanyou ��ΪA = ��youzan����B = ��zanyou��
//
//
// ������� :
//���true��false(��ʾ�Ƿ��ܰ�Ҫ��ƥ�������ַ���)
//ʾ��1
//����
//youzan; zanyou
//���
//true
//
//#include
//using namespace std;
//int main() {
//	string s;
//	cin >> s;
//	int p = s.find(';');
//	string a = s.substr(0, p);
//	string b = s.substr(p + 1, s.size() - p - 1);
//	if (a == b) {
//		cout << "true";
//		return 0;
//	}
//	for (int i = 1; i < a.size(); i++) {
//		string s1 = a.substr(0, i);
//		string s2 = a.substr(i, a.size() - i);
//		if (s2 + s1 == b) {
//			cout << "true";
//			return 0;
//		}
//	}
//	cout << "false";
//	return 0;
//}

#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int p = s.find(';');
	string a = s.substr(0, p);
	string b = s.substr(p + 1, s.size() - p - 1);
	if (a == b) {
		cout << "true";
		return 0;
	}
	for (int i = 1; i < a.size(); i++) {
		string s1 = a.substr(0, i);
		string s2 = a.substr(i, a.size() - i);
		if (s2 + s1 == b) {
			cout << "true";
			return 0;
		}
	}
	cout << "false";
	system("pause");
	return 0;
}