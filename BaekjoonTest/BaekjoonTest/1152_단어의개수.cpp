#include <iostream>
#include<vector>
#include<string>
using namespace std;

void 단어의개수_1152()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); // 동기화를 끊는다
	string a; 
	getline(cin, a);
	int count = 1;
	
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == ' ')
		{
			
			count++;
		}
		
	}
	if(a[0]== ' ')
	{
		count--;
	}
	if (a[a.length() - 1] == ' ')
	{
		count--;
	}
	if (a.empty())
	{
		count = 0;
	}
	cout << count;
}