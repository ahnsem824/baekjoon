#include <iostream>
#include<vector>
#include<string>
using namespace std;

void ¹úÁý_2292()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int a = 0;
	int b= 0;
	int c = 1;
	vector<int>v;
	cin >> a;

	while (true)
	{
		if (a > c + 6 * b)
		{
			c = c + 6 * b;
			b++;
		}
		else
		{
			cout << b + 1;
			break;
		}
	}
}