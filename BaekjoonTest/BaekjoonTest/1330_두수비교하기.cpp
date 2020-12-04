#pragma once
#include <iostream>
using namespace std;

void 두수비교하기_1330()
{
	int a;
	int b;
	cin >> a >> b;
	if (a < b)
	{
		cout << "<" << endl;
	}
	else if (a > b)
	{
		cout << ">" << endl;
	}
	else if (a == b)
	{
		cout << "==" << endl;
	}
}