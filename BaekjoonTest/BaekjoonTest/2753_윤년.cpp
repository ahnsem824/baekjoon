#pragma once
#include <iostream>
using namespace std;

void À±³â_2753()
{
	int a;
	cin >> a;
	if ((a / 4 == 0 && a % 100 != 0 )|| a % 400 == 0)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}