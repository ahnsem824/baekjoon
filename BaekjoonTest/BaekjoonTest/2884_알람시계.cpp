#pragma once
#include <iostream>
using namespace std;

void 알람시계_2884()
{
	int h;
	int m;

	cin >> h >> m;
	
	if (m < 45)
	{
		if (h == 0)
		{
			h = h + 24;
		}
		h = h - 1;
		m= m + 60;
	}
	m = m - 45;
	cout << h << m << endl;
}