#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
	for (ll i = 10'000; i >= 1; --i)
	{
		string num = "";
		for (int j = 1; j <= 3; ++j)			
		{
			ll addon = i * j;
			num+=to_string(addon);
			string check = num;
			sort(check.begin(), check.end());
			if (check=="123456789")
			{
				cout << num;
				return 0;
			}
		}
	}
	return 0;
}
