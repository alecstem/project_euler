#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
	// used wolfram alpha to compute 2^1000 because lazy
	string s = "10715086071862673209484250490600018105614048117055336074437503883703510511249361224931983788156958581275946729175531468251871452856923140435984577574698574803934567774824230985421074605062371141877954182153046474983581941267398767559165543946077062914571196477686542167660429831652624386837205668069376";
	ll x = 0;
	for (auto &e: s)
	{
		x+=(e-'0');
	}	
	cout << x;
	return 0;
}
