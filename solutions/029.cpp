#include <bits/stdc++.h>
#include "bignumber.h"
#define ll long long
#define ull unsigned long long


using namespace std;

int main()
{	
	set<string> s;
	for (int a = 2; a <= 100; ++a)
	{
		for (int b = 2; b <= 100; ++b)
		{
			BigNumber x(a);
			x = x.pow(b);
			s.insert(x.getString());
		}
	}
	cout << s.size();
	return 0;
}
