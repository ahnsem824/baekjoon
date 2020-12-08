#include <iostream>
using namespace std;

void 나머지_3052()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); // 동기화를 끊는다
	int arr[10];
	bool isCheck[42] = { false };
	int count = 0 ;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		if (isCheck[arr[i] % 42] == false)
		{
			isCheck[arr[i] % 42] = true;
		}

	}
	for (int i = 0; i < 42; i++)
	{
		if (isCheck[i] == true)
		{
			count++;
		}
	}
	cout << count;
}