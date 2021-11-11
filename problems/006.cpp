#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
	ll x = (100*(100+1))/2;
	x = x*x;
	ll y = (100*(100+1)*(2*(100)+1))/6;
	cout << x-y;
	return 0;
}
