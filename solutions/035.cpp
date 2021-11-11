#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

// Shout out to geeks for geeks for this integer rotation code
// Also this somewhat fails for repunit primes, good thing there's only one circular repunit prime below 1mil ;)
const int MAX_PR = 2'000'000;
bitset<MAX_PR> isprime;
set<int> s;
int numberOfDigits(int n)
{
	int cnt = 0;
	while (n > 0) 
	{
		cnt++;
		n /= 10;
	}
    	return cnt;
}
void solve(int num, bitset<MAX_PR> b, int &cnt)
{
	int digits = numberOfDigits(num);
	int powTen = pow(10, digits - 1);
	int temp = 0;
	if (b[num]&&s.find(num)==s.end()) temp++, s.insert(num);
	for (int i = 0; i < digits - 1; i++)
	{	
		int firstDigit = num / powTen;
		int left = ((num * 10) + firstDigit) - (firstDigit * powTen * 10);
		if (b[left]&&s.find(left)==s.end()) temp++, s.insert(left);
		num = left;
	}
	if (temp==digits)
	{
		cnt+=temp;
	}
}

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
	int cnt = 0;
	vector<ll> v = eratosthenesSieve(1'000'001);
	for (int i = 0; i < v.size(); ++i)
	{
		if (v[i]==11) cnt++;
		else solve(v[i], isprime, cnt);		
	}
	cout << cnt;
	return 0;
}
