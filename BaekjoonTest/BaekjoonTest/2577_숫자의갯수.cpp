#include <iostream>
using namespace std;

void �����ǰ���_2577()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); // ����ȭ�� ���´�
	int arr[10] = { 0, };

	int a;
	int b;
	int c;

	cin >> a >> b >> c;
	
	int abc;
	abc =(a*b)*c;
	while (true)
	{
		arr[abc % 10] += 1;
		abc = abc / 10;
		if (abc == 0)break;
		
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << '\n';
	}
}