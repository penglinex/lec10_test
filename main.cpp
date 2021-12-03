double my_pow(double x, unsigned int n)
{
	double result = 1;

	if (n < 0)
	{
		n = -n;
		for (long i = 0; i < n; i++)
		{
			result *= x;
		}
		return 1 / result;
	}
	else
	{
		for (long i = 0; i < n; i++)
		{
			result *= x;
		}
		return result;
	}
};