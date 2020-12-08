#include <iostream>
using namespace std;

void 최소최대_10818()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); // 동기화를 끊는다
	int n;
	int min;
	int max;
	cin >> n;
	int*number = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> number[i];
	}
	min = number[0];
	max = number[0];
	for (int i = 0; i < n; i++)
	{
		if (number[i] < min)
		{
			min = number[i];
		}
		if (number[i] > max)
		{
			max = number[i];
		}
	}
	cout << min << " " << max << '\n';
}