#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

unordered_map<int, int> memo;
int collatz(ll n)
{
	if (memo.find(n)==memo.end())
	{
		if (n%2==0)
			memo[n] = 1+collatz(n/2);
		else
			memo[n] = 1+collatz((3*n)+1);
	}
	return memo[n];

}
int main()
{
	unordered_map<int, int> memo;
	int ans = 0, mx = 0;
	memo[1]=1;
	for (int i = 0; i <= 999'999; ++i)
	{
		ll x = collatz(i);
		if (x>mx)
			mx = x, ans = i;
	}		
	cout << ans << " " << mx;
	return 0;
}
