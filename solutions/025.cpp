#include <bits/stdc++.h>
#include "bignumber.h"
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
	for (int n = 1; n <= 10'000; ++n)
	{
		long double x = (n*log10(1.6180339887498948))-((log10(5.0))/2.0);
		if (ceil(x)>=1000.0)
		{
			cout << n;
			break;
		}
	}
	return 0;
}
