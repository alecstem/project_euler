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
	vector<ll> v = eratosthenesSieve(1'000'000);		
	ll ans = 0;
	for (int i = 4; i < v.size(); ++i)
	{
		string s = to_string(v[i]);
		bool ok = true;
		for (int i = 0; i < s.length(); ++i)
		{
			string sub = s.substr(i);
			string sub2 = s.substr(0, s.length()-i);
			if (!isprime[stoll(sub)]||!isprime[stoll(sub2)])
			{
				ok = false;
				break;
			}
		}	
		if (ok) ans+=stoll(s);
	}
	cout << ans;
	return 0;
}
