#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
	ll sum = 1;
	int x = 1;
	int add = 1;
	for (int i = 3; i <= 1001; i+=2)
	{
		for (int i = 0; i < 4; ++i)	
		{
			add+=(x+1);
			sum+=add;
		}
		x+=2;
	}
	cout << sum;
	return 0;
}
