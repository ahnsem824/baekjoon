#include <iostream>
#include<vector>
#include<string>
using namespace std;

void ACMȣ��_10250()
{
	
	

	int count;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		int w;
		int h;
		int n;
		cin >> h >> w >>n;
		if (n%h > 0)
		{
			cout << n % h * 100 + n / h + 1 << endl;
		}
		else
		{
			cout << h * 100 + n / h << endl;
		}
	}


}