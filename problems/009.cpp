#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
	ll a = 0;
	ll b = 0;
	ll c = 0;
	for (int n = 1; n <= 10'000; ++n)
	{
		for (int m = n+1; m <= 10'000; ++m)
		{
			//cout << m << " " << n << endl;
			a = (m*m)-(n*n);
			b = 2*m*n;
			c = (m*m)+(n*n);
			if (a+b+c==1000)
			{
				cout << a*b*c;
				return 0;
			}
		}
	}
	return 0;
}
