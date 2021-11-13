#include <bits/stdc++.h>
#include "bignumber.h"
#define ll long long
#define ull unsigned long long

using namespace std;

BigNumber fact(BigNumber n)
{
	if (n<=1) return 1;
	return n*fact(n-1);
}

int main()
{
	// Did YOU know that Pascal's triangle shows all binomial coefficents?!
	ll ans = 0;
	vector<vector<BigNumber>> v;	
	vector<BigNumber> v2;
	for (int i = 0; i <= 100; ++i)
	{
		for (int j = 0; j <= 100; j++)
		{
			if (!j||(i==j))
				v2.push_back(BigNumber(1));
			else
				v2.push_back(BigNumber(0));
		}
		v.push_back(v2);
		v2.clear();
	}	
	for (int r = 2; r <= 100; ++r)
	{
		for (int c = 1; c < r; ++c)
		{
			v[r][c]=(v[r-1][c]+v[r-1][c-1]);
			if (v[r][c]>=1'000'000)
				ans++;
		}
	}
	cout << ans;
	return 0;
}
