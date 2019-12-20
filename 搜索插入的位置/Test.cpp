#include<string>
#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

int searchInsert(vector<int>v, int target)
{
	int i;
	for (i = 0; i<v.size(); i++)
	{
		if (v[i] == target || v[i]>target)
		{
			return  i;
		}
	}
	return i;
}
int main()
{
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(6);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	int a;
	int j;
	while (cin >> a)
	{
		j = searchInsert(v, a);
		cout << j << endl;
	}
	
	system("pause");
	return 0;
}