#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

// Recursive function to find prime fractorization of given n
void primeFactor(int num, vector<int> &v)
{
	vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19};
	if (find(primes.begin(), primes.end(), num)!=primes.end())
	{
		v.push_back(num);
		return;
	}
	for (int i = 2; i < num; ++i)
	{
		if (num%i==0)
		{
			primeFactor(i, v), primeFactor(num/i, v);
			break;
		}
	}
	return;
}
int main()
{
	unordered_map<int, int> f;
	// prime factorize 1-20, find and multiply the max exponent of each prime
	ull ans = 1;
	for (int i = 1; i <= 20; ++i)
	{
		unordered_map<int, int> m;
		vector<int> v;
		primeFactor(i, v);
		for (auto &e: v) m[e]++;
		for (auto &e: m) f[e.first] = max(f[e.first], m[e.first]);
		m.clear();
		v.clear();
	}
	for (auto &e : f) ans*=pow(e.first, e.second);
	cout << ans;
	return 0;
}
