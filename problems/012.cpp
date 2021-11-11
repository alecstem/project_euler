#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;
vector<int> check(ll n)
{
	vector<int> v;
	int sum = 0;
	for (int i = 2; i*i <= n; ++i)
	{
		if (n%i==0)
		{
			v.push_back(i);
			if (i!=(n/i)) v.push_back(n/i);
		}
	}
	return v;
}

int main()
{
	ull tri = 1;
	for (int i = 2; i < 100'000; ++i)
	{
		tri+=i;
		if (check(tri).size()>500)
		{
			cout << tri;
			return 0;
		}
	}
	return 0;
}
