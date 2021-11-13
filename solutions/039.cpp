#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
	ll a = 0;
	ll b = 0;
	ll c = 0;
	ll cnt = 0, mx= 0;
	int maxp = 0;
	set<vector<ll>> s;
	for (int p = 1; p <= 1000; ++p)
	{
		for (int n = 1; n <= 50; ++n)
		{
			for (int m = n+1; m <= 50; ++m)
			{
				for (int k = 1; k < 50; k++)
				{
					a = k*((m*m)-(n*n));
					b = k*(2*m*n);
					c = k*((m*m)+(n*n));
					if ((a+b+c)==p)
					{
						vector<ll> v = {a, b, c};
						sort(v.begin(), v.end());			
						if (s.find(v)==s.end())
						{
							s.insert(v);
							cnt++;
						}
					}
				}
			}
		}
		if (cnt>mx)
		{
			maxp = p;
			mx = cnt;	
		}
		cnt = 0;
	}
	cout << maxp << endl;
	return 0;
}
