#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

ll check(ll n)
{
	int sum = 0;
	for (int i = 1; i < sqrt(n); ++i)
	{
		if (n%i==0)
		{
			sum+=i;
			if ((n/i)!=n) sum+=(n/i);
		}
	}
	return sum;
}
int main()
{
	// n -> d(n)
	// d(a) = b && d(b) = a
	ll ans = 0;
	unordered_map<ll, ll> m;
	set<ll> s;	
	for (int i = 1; i < 10'000; ++i)
	{
		m[i]=check(i);
	}
	for (auto &e: m)
	{
		ll b = e.second;
		if (m[b]==e.first&&(b!=e.first))
			s.insert(b), s.insert(e.first), cout << e.first << " " << e.second << endl;
	}	
	for (auto &e: s) ans+=e;
	cout << ans;
	
	return 0;
}
