#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
	// I just used wolfram alpha to find 100!, because I'm too lazy to implement a carry digit system right now
	string s = "93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000";
	ll sum = 0;
	for (auto &e: s)
		sum+=(e-'0');
	cout << sum;
	return 0;
}
