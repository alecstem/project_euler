#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

bitset<2'000'000> b;
int main()
{
	b.set();
	unordered_map<string, bool> m;
	vector<ull> v;
	int mn = INT_MAX;
	for (int i = 1; i < 2'500; ++i)
	{
		ull ans = (i*(3*i-1))/2;
		v.push_back(ans);
		m[to_string(ans)]=true;
	}
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = i+1; j < v.size(); ++j)
		{
			ull x = v[j]-v[i];
			string x1 = to_string(x);
			ull y = v[j]+v[i];
			string y1 = to_string(y);
			if ((m[x1])&&(m[y1])&&(abs(v[j]-v[i])<mn))
				mn=abs(x);
		}
	}
	cout << mn;
	return 0;
}
