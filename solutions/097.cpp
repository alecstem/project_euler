#include <bits/stdc++.h>
#include "bignumber.h"
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{

	BigNumber b(2);
	b.pow(7830457);
	b++;
	b.multiply(28433);
	cout << b;
	
	return 0;
}
