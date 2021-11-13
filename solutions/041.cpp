#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;
const int MAX_PR = 100'000'000;
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
	vector<ll> primes = eratosthenesSieve(7'500'000);
	vector<int> v(10, 0);
	long mx = 0;
	for (auto &e: primes)
	{
		bool ok = true;
		string s = to_string(e);
		for (auto &x: s)
			v[x-'0']++;
		for (int i = 1; i <= s.length(); ++i)
			if (!v[i]||v[i]>1)
			{
				ok = false;
				break;
			}
		if (ok) mx = e;
		fill(v.begin(), v.end(), 0);
	}
	cout << mx;
	return 0;
}
