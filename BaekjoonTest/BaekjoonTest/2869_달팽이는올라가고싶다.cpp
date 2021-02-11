#include <iostream>
#include<vector>
#include<string>
using namespace std;

void 달팽이는올라가고싶다_2869()
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