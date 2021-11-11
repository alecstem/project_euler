#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
	int cnt = 0;
	string s = "0123456789";
	do
	{
		cnt++;
		if (cnt==1'000'000) cout << s << endl;
	} while (next_permutation(s.begin(), s.end()));
	return 0;
}
