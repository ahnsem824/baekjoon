#include <iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

void FlymetotheAlphaCentauri_1011()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		double a = 1;
		double n;
		double x;
		double y;
		
		double answer;
		cin >> x >> y;
		n = y - x;

		while (true)
		{
			if (n < a*a)
			{
				break;
			}
			else
			{
				a++;
			}
		}
		
		//거리가 i-1의 제곱수일때
		if (n == (a - 1)*(a - 1)) {
			answer = 2 * (a - 1) - 1;
		}
		//거리가 i-1의 제곱수와 중간값 사이에 있을 때
		else if (n < ((a - 1)*(a - 1) + a * a) / 2) {
			answer = 2 * (a - 1);
		}
		//거리가 중간값과 i의 제곱수 사이에 있을 때
		else {
			answer = 2 * a - 1;
		}
		cout << answer << endl;
	}
	
	

}