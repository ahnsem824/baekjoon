#include <iostream>
using namespace std;

void �ִ�_2562()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); // ����ȭ�� ���´�
	int num[9];
	int max= 0;
	int maxIndex= 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> num[i];
	
		if (num[i] > max)
		{
			max = num[i];
			maxIndex = i+1;
		}
	}
	cout << max << '\n' << maxIndex;
}