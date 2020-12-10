#include <iostream>
#include<vector>
#include<string>
using namespace std;

void 크로아티아알파벳_2941()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	string a; 
	cin >> a;
	int start;
	int count= 0;
	vector<string>v = { "c=","c-","dz=","d-" ,"lj" ,"nj", "s=","z=" };
	for (int i = 0; i < v.size(); i++)
	{
		while (true)
		{
			start = a.find(v[i]);
			if (a.find(v[i]) == string::npos)
			{
				break;
			}
			
			a.replace(start, v[i].length(), "!");

		}
	}
	cout << a.length();
}