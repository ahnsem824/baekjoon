#pragma once
#include <iostream>
using namespace std;

void 시험성적_9498()
{
	int a;
	cin >> a;
	if (90 <= a && a <= 100)
	{
		cout << "A" << endl;
	}
	else if (90 > a && a >= 80)
	{
		cout << "B" << endl;
	}
	else if (80 > a && a >= 70)
	{
		cout << "C" << endl;
	}
	else if (70 > a&&a >= 60)
	{
		cout << "D" << endl;
	}
	else cout << "F" << endl;
}