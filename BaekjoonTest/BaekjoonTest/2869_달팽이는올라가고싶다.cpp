#include <iostream>
#include<vector>
#include<string>
using namespace std;

void �����̴¿ö󰡰�ʹ�_2869()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int a;
	int b;
	int v;

	int count;

	cin >> a >> b >> v;
	if ((v - a) % (a - b) == 0)
		count = (v - a) / (a - b);
	else
		count = (v - a) / (a - b) + 1;
	
	cout << count + 1;
}