#include <iostream>
using namespace std;

void �����_2438()
{
	int a;


	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << '\n';
	}
}