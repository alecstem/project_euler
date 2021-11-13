#include <bits/stdc++.h>
#include "bignumber.h"
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
	BigNumber b(0);
	for (int i = 1; i <= 1000; ++i)
	{
		cout << i << endl;
		BigNumber tmp(i);
		tmp = tmp.pow(i);
		b+=tmp;
	}
	cout << b;
	return 0;
}
