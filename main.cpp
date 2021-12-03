double my_pow(double x, unsigned int n)
{
	double count = 1;
	if (!n) return 1;
	while (n)
	{
		if (n % 2 == 0)
		{
			n /= 2;
			x *= x;
		}
		else
		{
			n--;
			count *= x;
		}
	}
	return count;
};