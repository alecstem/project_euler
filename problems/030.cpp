#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

bool solve(int n)
{
	string s = to_string(n);
	ll sum = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		int dig = s[i]-'0';
		sum+=(dig*dig*dig*dig*dig);
	}
	return (sum==n) ? true : false;
}
int main()
{
	ll sum = 0;
	for (int i = 2; i < 10'000'000; ++i)
	{
		if (solve(i))
			sum+=i, cout << i << endl;
	}
	cout << sum << endl;
	return 0;
}
