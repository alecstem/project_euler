#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;
const int MAX_PR = 2'999'999;
bitset<MAX_PR> isprime;
vector<int> eratosthenesSieve(int lim) {
	isprime.set(); isprime[0] = isprime[1] = 0;
	for (int i = 4; i < lim; i += 2) isprime[i] = 0;
		for (int i = 3; i*i < lim; i += 2) if (isprime[i])
			for (int j = i*i; j < lim; j += i*2) isprime[j] = 0;
	vector<int> pr;
	for (int i = 2; i < lim; ++i) if (isprime[i]) pr.push_back(i);
	return pr;
}
int main()
{
	ll sum = 0;
	vector<int> v = eratosthenesSieve(2'000'001);
	
	cout << v[10'000];	
	return 0;
}
