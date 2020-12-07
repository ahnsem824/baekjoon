#include <iostream>
using namespace std;

void AB_7_11021()
{
	int T;
	int a;
	int b;

	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		cin >> a >> b;

		cout << "Case #"<<i<<": "<<a + b;
	}
}