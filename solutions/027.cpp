#include <bits/stdc++.h>
#include "bignumber.h"
#define ll long long
#define ull unsigned long long
using namespace std;

const int MAX_PR = 2'000'000;
bitset<MAX_PR> isprime;
vector<ll> eratosthenesSieve(ll lim) {
	isprime.set(); isprime[0] = isprime[1] = 0;
	for (ll i = 4; i < lim; i += 2) isprime[i] = 0;
		for (ll i = 3; i*i < lim; i += 2) if (isprime[i])
			for (ll j = i*i; j < lim; j += i*2) isprime[j] = 0;
	vector<ll> pr;
	for (ll i = 2; i < lim; ++i) if (isprime[i]) pr.push_back(i);
	return pr;
}
int main()
{
	vector<ll> primes = eratosthenesSieve(2'000'000);
	unordered_map<string, bool> m;
	int cnt = 0, mx = 0;
	ll ans = 0;
	for (auto &e: primes) m[to_string(e)]=true;
	for (int a = -1000; a < 1000; ++a)
	{
		for (int b = -1000; b <= 1000; ++b)
		{
			for (int n = 0; n < 100'000; ++n)
			{
				BigNumber x(n);
				x = x.pow(2);
				x+=(a*n);
				x+=b;
				if (!m[x.getString()])
				{
					break;
				}
				cnt++;
			}
			if (cnt>mx)
			{
				mx = cnt;
				ans = a*b;
			}
			cnt = 0;
		}
	}
	cout << ans;
	return 0;
}
