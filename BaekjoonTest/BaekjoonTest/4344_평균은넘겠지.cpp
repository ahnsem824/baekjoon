#include <iostream>
using namespace std;

void 평균은넘겠지_4344()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); // 동기화를 끊는다
	float T = 0.f;
	int count = 0;
	int a;
	cin >> a;
	int*b = new int[a];
	for (int i = 0; i < a; i++)
	{
		cin >> b[i];
		int*c = new int[b[i]];
		for (int j = 0; j < b[i]; j++)
		{
			cin >> c[j];
			T += c[j];

		}
		for (int j = 0; j < b[i]; j++)
		{
			if (c[j] > T / b[i])
			{
				count++;
			}
		}
		cout << fixed;
		cout.precision(3);
		cout << count / (float)b[i] * 100 << "%" << '\n';
		
		T = 0.f;
		count = 0;
	}
}