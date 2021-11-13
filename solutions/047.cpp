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
void factor(ll n, set<ll> &s, vector<ll> v)
{
	while (n%2==0)
	{
		s.insert(2);
		n/=2;
	}
	for (int i = 0; i < v.size(); i++)
	{
		while (n%v[i]==0)
		{
			s.insert(v[i]);
			n/=v[i];
		}
	}
	if (n>2)
		s.insert(n);
}
int main()
{

	set<ll> s;
	vector<ll> v = eratosthenesSieve(100);
	int k = 0, amt = 4;
	for (ll i = 1000; i < 200'000; ++i)
	{
		factor(i, s, v);
		if (s.size()==amt)
		{
			k++;
			if (k==amt)
			{
				cout << i-(amt-1);
				return 0;
			}
		}
		else
		{
			k = 0;
		}
		s.clear();	
	}
	return 0;
}
