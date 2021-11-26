#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
	string s = "";
	for (int i = 1; i <= 1'000'000; ++i)
	{
		s+=to_string(i);
	}
	cout << (s[0]-'0') * (s[9]-'0') * (s[99]-'0') * (s[999]-'0') * (s[9999]-'0') * (s[99999]-'0') * (s[999999]-'0');
	return 0;
}
