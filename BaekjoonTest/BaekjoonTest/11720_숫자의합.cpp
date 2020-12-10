#include <iostream>
#include<vector>
#include<string>
using namespace std;

void 숫자의합_11720()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); // 동기화를 끊는다
	int a;
	int T=0;
	cin >> a;
	char c;

	for (int i = 0; i < a; i++)
	{
		cin >> c;
		T += c - 48;
	}
	cout << T;

}