#include <iostream>
#include<vector>
#include<string>
using namespace std;

void �ܾ��ǰ���_1152()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0); // ����ȭ�� ���´�
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