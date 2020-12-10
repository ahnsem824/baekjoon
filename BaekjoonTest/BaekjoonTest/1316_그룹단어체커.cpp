#include <iostream>
#include<vector>
#include<string>
using namespace std;

void 그룹단어체커_1316()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int num = 0;
	cin >> num;
	int a = num;
	vector<string> v;
	for (int j = 0; j < num; j++)
	{

		string s;
		bool arr[26] = { true,};
		
		cin >> s;
		int count= 0;
	
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == s[i + 1])continue;
			else
			{
				if (arr[s[i] - 97] != false)
				{	
					arr[s[i] - 97] = false;
				}
				else
				{
					a--;
					break;
				}
			}
		}
	}
	cout << a;
	

}