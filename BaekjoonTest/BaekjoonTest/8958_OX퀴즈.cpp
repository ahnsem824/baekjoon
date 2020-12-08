#include <iostream>
#include<string>
using namespace std;

void OXÄûÁî_8958()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); // µ¿±âÈ­¸¦ ²÷´Â´Ù
	int count = 0;
	int num = 0;
	int n;
	cin >> n;
	string s;

	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == 'O')
			{
				count++;
			}
			else if (s[j] == 'X')
			{
				count = 0;
			}
			num += count;
		}
		cout << num << '\n';
		num = 0;
		count = 0;
	}
}
