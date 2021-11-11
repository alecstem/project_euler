#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

bool solve(string s, vector<int> primes)
{
	int end = 0;
	bool ok = true;
	for (int i = 1; i <= s.length()-3; ++i)
		if (stoi(s.substr(i, 3))%primes[i-1]!=0)
		{
			ok = false;
			break;
		}
	return (ok) ? true : false;
}

int main()
{
	ull ans = 0;
	vector<int> primes = {2,3,5,7,11,13,17};
	string s = "0123456789";
	do
	{
		if(solve(s, primes)) ans+=stoll(s);
	} while (next_permutation(s.begin(), s.end()));
	cout << ans;
	return 0;
}
