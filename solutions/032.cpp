#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
	vector<int> check(10);
	ll ans = 0;
	set<ll> st;
	for (int i = 1; i < 3000; ++i)
	{
		for (int j = 1; j < 3000; ++j)
		{
			
			bool ok = true;
			string s1 = to_string(i);
			string s2 = to_string(j);
			for (auto &e: s1) check[e-'0']++;
			for (auto &e: s2) check[e-'0']++;
			ll x = i*j;
			string s = to_string(x);
			for (auto &e: s) check[e-'0']++;
			for (int i = 1; i <= 9; ++i)
			{
				if (check[i]>1||!check[i])
				{
					ok = false;
					break;
				}
			}
			if (ok&&!check[0]&&(st.find(x)==st.end())) 			
			{
				st.insert(x);
				ans+=x;

			}
			for (int i = 0; i <= 9; ++i) check[i]=0;
		}
	}
	cout << ans;
	return 0;
}
