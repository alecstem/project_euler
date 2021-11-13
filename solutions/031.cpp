#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
	vector<int> arr = {1,2,5,10,20,50,100,200};
	int amount = 200;
	vector<int> dp(amount+1);
	dp[0]=1;
	for (auto &coin: arr)
	{
		for (int i = coin; i <= amount; ++i)
		{
			dp[i]+=dp[i-coin];
		}
	}
	cout << dp[amount];
	return 0;
}
