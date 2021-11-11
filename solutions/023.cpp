#include <bits/stdc++.h> #define ll long long
#define ull unsigned long long

using namespace std;

bitset<2'000'000> b;
ll check(ll n)
{
	int sum = 0;
	for (int i = 2; i*i <= n; ++i)
	{
		if (n%i==0)
		{
			sum+=i;
			if (i!=(n/i)) sum+=(n/i);
		}
	}
	return sum;
}

int main()
{
	// find all abundant numbers below 28123.
	// find all possible combinations of sums between 2 abundant numbers.
	// find which ones were not included until 28123.
	vector<int> v;
	ull ans = 0;
	b.set();	
	for (int i = 1; i <= 50'000; ++i)
	{
		if (check(i)>i)
			v.push_back(i);
	}
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = i; j < v.size(); ++j)
		{
			b[v[i]+v[j]]=0;
		}
	}

	for (int i = 1; i <= 29'003; ++i)
	{
		if (b[i]) ans+=i;
	}
	cout << ans;
	return 0;
}
