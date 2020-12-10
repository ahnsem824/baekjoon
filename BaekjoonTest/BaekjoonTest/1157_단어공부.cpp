#include <iostream>
#include<vector>
#include<string>
using namespace std;

void 단어공부_1157()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); // 동기화를 끊는다
	int arr[26];
	int max = 0;
	int count = 0;
	bool b = false;
	string s;
	cin >> s;
	for (int i = 0; i < 26; i++)
	{
		arr[i] = 0;
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] <= 122 && s[i] >=97)
		{
			s[i] -= 32;
		}
		arr[s[i] - 65] += 1;
	}
	for (int i = 0; i < 26; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			count = i;
			b = false;
		}
		else if (max == arr[i])
		{
			b = true;
		}
	}

	if (b)
	{
		cout << "?";
	}
	else
	{
		char t = count + 65;
		cout << t;
	}
}