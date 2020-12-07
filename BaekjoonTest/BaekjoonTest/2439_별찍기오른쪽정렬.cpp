#include <iostream>
using namespace std;

void 별찍기오른쪽정렬_2439()
{
	int a;


	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		for (int j = a - i; j > 0; j--)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << '\n';
	}
}