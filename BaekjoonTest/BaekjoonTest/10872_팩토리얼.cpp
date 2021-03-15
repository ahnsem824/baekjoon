#pragma once
#include <iostream>
using namespace std;

int factorial(int a)
{
	/*int n = 1;
	if (a > 1)
	{
		n = a * factorial(a - 1);
	}
	else
	{
		return n;
	}*/
	if (a == 0)
	{
		return 1;
	}

	if (a > 2)
	{
		a *= factorial(a - 1);
	}
	return a;
}


void ÆÑÅä¸®¾ó_10872()
{
	
	int x;

	cin >> x ;
	cout << factorial(x) << endl;
}