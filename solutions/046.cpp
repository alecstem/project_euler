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
	vector<ll> v = eratosthenesSieve(50'000);
	vector<ll> squares(1000);	
	unordered_map<ll, bool> m;
	for (int i = 0; i < 1000; ++i)
	{
		squares[i] = pow(i+1, 2);
		squares[i]*=2;
	}
	m[0]=true;
	m[1]=true;
	for (int i = 0; i < v.size(); ++i)
	{
		m[v[i]]=true;	
		for (int j = 0; j < squares.size(); ++j)
		{
			m[v[i]+squares[j]]=true;	
		}
	}	
	for (int i = 0; i < 1'000'000; ++i)
	{
		if (i%2!=0&&!m[i])
		{
			cout << i;
			break;
		}
	}
	return 0;
}
