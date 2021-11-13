#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#include "bignumber.h"

using namespace std;
bool isPalindrome(string s)
{
	int L = 0, R = s.length()-1;
	while (L<R)
	{
		if (s[L]!=s[R])
			return false;
		L++, R--;
	}
	return true;
}
int main()
{

	bitset<50> b(585);
	string s = b.to_string();
	int ans = 0;

	for (int i = 1; i < 1'000'000; ++i)
	{
		bitset<200> b(i);
		string s = b.to_string();
		BigNumber tmp(s);
		tmp = tmp.trimLeadingZeros();
		s = tmp.getString();
		string s2 = to_string(i);
		if (isPalindrome(s)&&isPalindrome(s2))
			ans+=i, cout << s << " " << s2 << endl;
	}
	cout << ans;
	return 0;
}
