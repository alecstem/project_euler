#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

bool check(string s)
{
	int L = 0, R = s.length()-1;
	while (L<R)
	{
		if (s[L]!=s[R])
			return false;
		L++, R--;
	}
	return true;	
}
int main()
{
	ll mx = 0;
	for (ll i = 1; i <= 999; ++i)
	{
		for (ll j = i; j <= 999; ++j)
		{
			bool ok = false;
			ll x = i*j;
			string s = to_string(x);
			if ((x>mx)&&check(s))
			{
				mx = x;
			}
		}
	}
	cout << mx;
	return 0;
}
