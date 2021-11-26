#include <bits/stdc++.h>
#include "bignumber.h"
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
	set<string> s;
	for (int i = 1; i < 1'000'000; ++i)
	{
		for (int j = 2; j <= 6; ++j)
		{
			int x = i*j;
			string x2 = to_string(x);
			sort(x2.begin(), x2.end());
			s.insert(x2);
		}
		if (s.size()==1)
		{
			cout << i;
			break;
		}
		s.clear();
	}
	return 0;
}
