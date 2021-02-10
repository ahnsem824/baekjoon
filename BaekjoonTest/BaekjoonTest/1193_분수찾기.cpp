#include <iostream>
#include<vector>
#include<string>
using namespace std;

void 분수찾기_1193()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	

	int a;

	cin >> a;
	int b = 0;
	int c = 0;
	while (a>b)
	{
		b += c;
		c++;
	}

	if (c % 2 == 1)
	{
		cout << c-1 - (b - a) << "/" << 1 + (b - a);
	}
	else if (c % 2 == 0)
	{
		cout << 1 + (b - a) << "/" << c-1 - (b - a);
	}
	
	/*int i;

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
*/


	
}