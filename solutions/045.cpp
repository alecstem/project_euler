#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

bool ispenta(long double hexa)
{
	long double x = sqrt(24.0*(hexa)+1.0);
	if (fmod(x,6.0)==5.0) return true;
	return false;
}
int main()
{

	int lim = 100'000;
	unordered_map<string, bool> m;
	for (int i = 1; i <= lim; ++i)
	{
		long long hexa = i*(2*i-1);
		if (ispenta(hexa)) cout << hexa << endl;
	}
	return 0;
}
