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
int mxPrime = 0;
void backtrack(vector<ll> primes, int lim)
{
	int mx = 0;
	int sum = 0, cnt = 0;
	for (int i = 0; i < primes.size(); ++i)
	{	
		for (int j = i; j < primes.size(); ++j)
		{
			sum+=primes[j], cnt++;
			if (sum>=lim) break;
			if (isprime[sum]&&cnt>mx)
				mx = cnt, mxPrime = sum;	
		}
		sum = 0;
		cnt = 0;
	}
}
int main()
{
	vector<ll> primes = eratosthenesSieve(1'000'000);
	backtrack(primes, 1'000'001);
	cout << "mx: " << mxPrime;
	return 0;
}
