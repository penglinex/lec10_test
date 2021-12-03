double my_pow(double x, unsigned int n)
{
	if (n == 0) return 1;
	for (i = 0; i < n; i++) x *= x;
	return x;
};