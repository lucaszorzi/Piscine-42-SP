void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempdiv;
	int	tempmod;

	if (b != 0)
	{
		tempdiv = *a / *b;
		tempmod = *a % *b;
		*a = tempdiv;
		*b = tempmod;
	}
}
