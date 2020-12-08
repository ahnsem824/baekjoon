#include <iostream>
using namespace std;

bool abc(int a)
{
	if (a < 100)
		return true;
	if (a >= 1000)
	{
		return false;
	}
	if (a % 10 -(a / 10) % 10 == (a / 10) % 10 -a / 100)
	{
		return true;
	}
	return false;
}
void ÇÑ¼ö_1065()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); 
	int count = 0;
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		if (abc(i))
		{
			count++;
		}
	}
	cout << count;
}