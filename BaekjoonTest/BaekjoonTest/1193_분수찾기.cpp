#include <iostream>
#include<vector>
#include<string>
using namespace std;

void �м�ã��_1193()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	

	int a;

	cin >> a;

	int i;

	for (i = 1; a > 0; i++)
	{
		a = a - i;
	}
	if (i % 2 == 1)
	{
		cout << i + a - 1 << "/" << 1 - a << endl;
	}
	else if (i % 2 == 0)
	{
		cout << 1 - a << "/" << i + a - 1 << endl;
	}

}