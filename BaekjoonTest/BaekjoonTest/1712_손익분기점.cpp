#include <iostream>
#include<vector>
#include<string>
using namespace std;

void ���ͺб���_1712()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int a; int b;
	int c;

	cin >> a >> b >> c;
	
	if (c < b)
	{
		cout << -1;
	}
	else
	{
		cout << a / (c - b) + 1;
	}
}