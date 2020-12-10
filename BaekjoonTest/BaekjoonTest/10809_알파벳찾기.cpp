#include <iostream>
#include<vector>
#include<string>
using namespace std;

void ¾ËÆÄºªÃ£±â_10809()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); 
	string s;
	int count = 0;
	int arr[26];
	cin >> s;
	for (int i = 0; i < 26; i++)
	{
		arr[i] = -1;
		
	}
	for (int i = 0; i < s.length(); i++)
	{
		if(arr[s[i]-97] == -1)
		arr[s[i] - 97] = i;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}

}