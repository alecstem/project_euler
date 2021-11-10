ll findFactors(ll n)
{
	int sum = 0;
	for (int i = 2; i*i <= n; ++i)
	{
		if (n%i==0)
		{
			sum+=i;
			if (i!=(n/i)) sum+=(n/i);
		}
	}
	return sum;
}
