#include <iostream>
using namespace std;

void AB_5_10952()
{

	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); // 동기화를 끊는다
	int a;
	int b;
	while (true)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)break;
		cout << a + b << '\n';

	}

}