#pragma once
#include <iostream>
using namespace std;

int pivonachi(int a)
{
	int n;
	if (a == 2)
	{
		return 1;
	}
	else if (a < 2)
	{
		return 0;
	}
	else if (a > 2)
	{
		n = pivonachi(a - 1)+pivonachi(a-2);
		return n;
	}
	
}
void 피보나치수5_10870()
{
	int num;

	cin >> num;

	cout << pivonachi(num+1);

}