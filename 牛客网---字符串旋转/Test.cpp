//字符串旋转 :
//给定两字符串A和B，如果能将A从中间某个位置分割为左右两部分字符串（都不为空串），并将左边的字符串移动到右边字符串后面组成新的字符串可以变为字符串B时返回true。
//例如：如果A = ‘youzan’，B = ‘zanyou’，A按‘you’‘zan’切割换位后得到‘zanyou’和B相同返回true。
//
//输入描述 :
//2个不为空的字符串(说明 : 输入一个字符串以英文分号";"分割为2个字符串)
//例如 : youzan; zanyou 即为A = ‘youzan’，B = ‘zanyou’
//
//
// 输出描述 :
//输出true或false(表示是否能按要求匹配两个字符串)
//示例1
//输入
//youzan; zanyou
//输出
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