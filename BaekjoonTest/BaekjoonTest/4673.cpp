#pragma once

#include <iostream>
#include <vector>

using namespace std;
int d(int a)
{

	int b = a;
	while (true)
	{
		if (a == 0)break;
		b += a % 10;
		a= a / 10;
	}
	return b;
}

bool isStr[10000];
void ¼¿ÇÁ³Ñ¹ö_4673()
{
	for (int i = 0; i < 10000; i++)
	{
		int x = d(i);
	
		isStr[x] = true;
	}
	for (int i = 0; i < 10000; i++)
	{
		if (isStr[i] != true)
		{
			cout << i << endl;
		}
	}
}
