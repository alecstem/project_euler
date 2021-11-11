#include <bits/stdc++.h>
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
	// find the multiplicative order of denominator. we only need to check primes
	vector<ll> primes = eratosthenesSieve(1'001);
	int mx = 0, denom = 0;
	for (int i = 0; i < primes.size(); ++i)
	{
		int x = 1, k = 0;
		while (k<primes[i])
		{
			x = (x*10)%primes[i];
			if (x==1) break;
			k++;
		}
		if (k>mx)
			mx = k, denom = primes[i];
	}	
	cout << denom;
	return 0;
}
