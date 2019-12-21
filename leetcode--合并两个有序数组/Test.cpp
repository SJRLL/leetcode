#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<vector>

using namespace std;

void  merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	int length = nums1.size() - m;
	if (length > 0)
	{
	  for (int i = 0; i < n; ++i)
	  {
		  nums1[m + i] = nums2[i];
	  }
	}
	sort(nums1.begin(), nums1.end());
	for (auto e : nums1)
	{
		cout << nums1[e]++ << endl;
	}
}

int main()
{
	vector<int> v1;
	vector<int> v2;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(9);
	//v1.push_back(0);
	//v1.push_back(0);

	v2.push_back(2);
	v2.push_back(5);
	v2.push_back(6);

	int m=1, n=2;
   merge(v1, m, v2, n);


	system("pause");
	return 0;
}