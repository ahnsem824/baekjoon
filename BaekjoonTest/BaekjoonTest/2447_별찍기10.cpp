#pragma once
#include <iostream>
#include <vector>
using namespace std;


void star(int a, int b, int n)
{
	// 
	if (a/n % 3 == 1 && b/n  % 3 == 1) {
		cout << " ";
	}
	else if (n / 3 == 0) {
		cout << "*";
	}
	else {
		star(a, b, n / 3);
	}
}


void º°Âï±â_2447()
{
	
	int x;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			star(i, j, x);
		}
		cout << endl;
	}
}