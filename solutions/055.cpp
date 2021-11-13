#include <bits/stdc++.h>
#include "bignumber.h"
#define ll long long
#define ull unsigned long long

using namespace std;

bool isPalindrome(BigNumber n)
{
	string s = n.getString();
	int L = 0, R = s.length()-1; 
	while (L<R)
	{
		if (s[L]!=s[R])
			return false;
		L++, R--;
	}
	return true;
}
bool isLychrel(BigNumber b)
{
	for (int i = 0; i < 50; ++i)
	{
		string s = b.getString();
		reverse(s.begin(), s.end());
		b+=(BigNumber(s));
		if (isPalindrome(b))
			return true;
	}
	return false;
}

int main()
{ 
	ll ans = 0;
	for (int n = 1; n <= 10'000; ++n)
	{
		BigNumber b = to_string(n);
		if(!isLychrel(b))
			ans++;
	}
	cout << ans << endl;
	return 0;
}
