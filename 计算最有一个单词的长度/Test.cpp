#include<string>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	while (getline(cin , s))
	{
		if (s.size() == 0)
		{
			return 0;
		}
		int len = s.size();
		//reverse(s.begin(), s.end());
		int count = 0;
		for (int i = len-1; i>=0; --i)
		{
			if (s[i] != ' ')
			{
				count++;
			}
			else
			{
				if (count)
				{
					break;
				}
			}
		}
		cout << count << endl;
		system("pause");
		return 0;
	}
}