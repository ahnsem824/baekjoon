#include <iostream>
#include<vector>
#include<string>
using namespace std;

void 상수_2908()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); // 동기화를 끊는다
	string s1;
	string s2;

	cin >> s1 >> s2;
	int a1 = s1.length() - 1;
	int a2 = s2.length() - 1;
	for (int i = 0; i < s1.length()/2; i++)
	{
		char a;
		a = s1[i];
		s1[i] = s1[a1];
		s1[a1] = a;
	}
	for (int i = 0; i < s2.length() / 2; i++)
	{
		char a;
		a = s2[i];
		s2[i] = s2[a2];
		s2[a2] = a;
	}
	int max = stoi(s1);

	if (stoi(s2) > max)
	{
		max = stoi(s2);

	}
	cout << max;
}