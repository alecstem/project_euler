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
void solve(string prime)
{
	// if 3 permutations are prime, sort them and check if they increase by same number.
	vector<int> v;
	int cnt = 0;
	do
	{
		if (isprime[stoi(prime)]) cnt++, v.push_back(stoi(prime));	
	} while (next_permutation(prime.begin(), prime.end()));
	if (cnt>=3)
	{	
		for (int i = 0; i < v.size(); ++i)
		{
			for (int j = 1; j < 10'000; ++j)
			{
				if ((find(v.begin(), v.end(), v[i]+j)!=v.end())
				     &&find(v.begin(), v.end(), v[i]+j+j)!=v.end())
					cout << v[i] << " " << v[i]+j << " " << v[i]+j+j << endl;
			}
		}	
	}
}
int main()
{
	vector<ll> primes = eratosthenesSieve(10'001);
	
	for (int i = 160; i < primes.size(); ++i)
	{
		solve(to_string(primes[i]));
	}
	return 0;
}
