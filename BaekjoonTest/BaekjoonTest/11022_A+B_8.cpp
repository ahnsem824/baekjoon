#include <iostream>
using namespace std;

void AB_8_11022()
{
	int T;
	int a;
	int b;

	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		cin >> a >> b;

		cout << "Case #" << i << ": " << a <<" + "<< b<<" = "<<a+b<<'\n';
	}
}