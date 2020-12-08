#include <iostream>
using namespace std;

void Æò±Õ_1546()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); // µ¿±âÈ­¸¦ ²÷´Â´Ù
	float max = 0;
	float a = 0.f;
	int n = 0;
	cin >> n;
	int* num = new int [n];

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		if (num[i] > max)
		{
			max = num[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		a += num[i] / max * 100;
	}
	cout << fixed;
	cout.precision(4);
	cout << a / n;
}