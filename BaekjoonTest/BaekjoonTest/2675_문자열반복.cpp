#include <iostream>
#include<vector>
#include<string>
using namespace std;

void 문자열반복_2675()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); 
	int a;
	string s;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			for (int k = 0; k < a; k++)
			{
				cout << s[j];
			}
		}
		cout << '\n';
	}
}