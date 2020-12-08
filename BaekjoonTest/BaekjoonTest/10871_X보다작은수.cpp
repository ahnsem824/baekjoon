#include <iostream>
using namespace std;

void X보다작은수_10871()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int N;
	int X;
	int a;
	cin >> N >> X;
	
	for (int i = 0; i < N; i++)
	{
		
		cin >> a;
		if (a < X)
		{
			cout << a << " ";
		}
	}
}