#include <iostream>
#include<vector>
#include<string>
using namespace std;

void ū��AB_10757()
{
	//999 + 1 ���� ���� ������ ����ؼ� 1�� ��������ϱ� ����
	string A, B;
	int ans[10001] = { 0 }, cnt = 0;
	cin >> A >> B;
	if (A.size() >= B.size())//A�� �� �� ���
	{

		for (int i = 0; i < A.size(); i++)
		{

			if (i < B.size())
			{
				ans[10000 - i] += A[A.size() - 1 - i] - '0' + B[B.size() - 1 - i] - '0';
				if (ans[10000 - i] >= 10) { ans[10000 - i - 1]++; ans[10000 - i] -= 10; }
			}
			else
			{

				ans[10000 - i] += A[A.size() - 1 - i] - '0';
				if (ans[10000 - i] >= 10)
				{
					ans[10000 - i - 1]++;
					ans[10000 - i] -= 10;
				}
			}
		}
	}
	else //B�� �� ����
	{
		for (int i = 0; i < B.size(); i++)
		{
			if (i < A.size())
			{
				ans[10000 - i] += A[A.size() - 1 - i] - '0' + B[B.size() - 1 - i] - '0';
				if (ans[10000 - i] >= 10) { ans[10000 - i - 1]++; ans[10000 - i] -= 10; }
			}
			else//A����� �ѱ���
			{
				ans[10000 - i] += B[B.size() - 1 - i] - '0';
				if (ans[10000 - i] >= 10)
				{
					ans[10000 - i - 1]++;
					ans[10000 - i] -= 10;
				}
			}
		}
	}

	for (int i = 0; i < 10001; i++)
	{

		if (ans[i] != 0)
		{
			cnt = i;
			break;
		}
	}

	for (int i = cnt; i < 10001; i++)
	{
		cout << ans[i];
	}


}