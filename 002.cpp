#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
	ull i = 1, x = 0;
	vector<ull> v;
	v.push_back(0), v.push_back(1);
	while (x<4000000)
	{
		x = v[i-1]+v[i];
		v.push_back(x);
		i++;
	}
	ull sum = 0;
	for (auto &e: v)
		if (e%2==0) sum+=e;
	cout << sum;
	return 0;
}
