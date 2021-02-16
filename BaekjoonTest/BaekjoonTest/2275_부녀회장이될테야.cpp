#include <iostream>
#include<vector>
#include<string>
using namespace std;

void 부녀회장이될테야_2275()
{
	int a[15][15];

	for (int i = 0; i < 15; i++)
	{
		if (i == 0)
		{
			for (int j = 1; j < 15; j++) 
			{
				a[i][j] = j;
			}
		}
		else
		{
			for (int j = 1; j < 15; j++)
			{
				if (j == 1)
				{
					a[i][j] = 1;

				}
				else
				{
					int t = 0;
					for (int k = 1; k <= j; k++)
					{
						t += a[i - 1][k];
						
					}
					a[i][j] = t;
				}
			}
		}
	}

	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int x;
		int y; 

		cin >> x >> y;

		cout << a[x][y] << endl;
	}

}