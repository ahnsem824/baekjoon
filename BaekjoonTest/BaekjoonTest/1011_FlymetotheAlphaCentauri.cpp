#include <iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

void FlymetotheAlphaCentauri_1011()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		double a = 1;
		double n;
		double x;
		double y;
		
		double answer;
		cin >> x >> y;
		n = y - x;

		while (true)
		{
			if (n < a*a)
			{
				break;
			}
			else
			{
				a++;
			}
		}
		
		//�Ÿ��� i-1�� �������϶�
		if (n == (a - 1)*(a - 1)) {
			answer = 2 * (a - 1) - 1;
		}
		//�Ÿ��� i-1�� �������� �߰��� ���̿� ���� ��
		else if (n < ((a - 1)*(a - 1) + a * a) / 2) {
			answer = 2 * (a - 1);
		}
		//�Ÿ��� �߰����� i�� ������ ���̿� ���� ��
		else {
			answer = 2 * a - 1;
		}
		cout << answer << endl;
	}
	
	

}