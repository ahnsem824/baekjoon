#include <iostream>
#include<vector>
#include<string>
using namespace std;

void ´ÙÀÌ¾ó_5622()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	string s;
	int Total = 0;
	int num = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		int a;
		a =s[i] - 65;
		if (a / 3+2 < 7)
		{
			num = a / 3 + 2;
		}
		if (a >= 15 && a <= 18)
		{
			num = 7;
		}
		if (a >= 19 && a <= 21)
		{
			num = 8;
		}
		if (a >= 22 && a <= 25)
		{
			num = 9;
		}
		Total += (num + 1);
	}
	cout << Total;
}