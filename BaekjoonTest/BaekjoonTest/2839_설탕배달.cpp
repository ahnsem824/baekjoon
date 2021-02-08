#include <iostream>
#include<vector>
#include<string>
using namespace std;

void ¼³ÅÁ¹è´Þ_2839()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int N;	
	int a,b;
	cin >> N;
	a = N / 5;
	while (true)
	{
		if (a >= 0)
		{
			if ((N - a * 5) % 3 == 0)
			{ 
				b = (N - (5 * a)) / 3;
				break;
			}
			a--;
		}
		else
		{
			a = -1;
			break;
		}

	}
	if (a < 0)
	{
		cout << -1;
	}
	else {
		cout << a + b;
	}
}