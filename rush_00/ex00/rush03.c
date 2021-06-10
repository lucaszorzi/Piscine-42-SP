void	ft_putchar(char c);

void	rush(int cl, int ln)
{
	int	cl_i;
	int	ln_i;

	ln_i = 1;
	while (ln_i <= ln)
	{
		cl_i = 1;
		while (cl_i <= cl)
		{
			if ((cl_i == 1 && ln_i == 1) || (cl_i == 1 && ln_i == ln))
				ft_putchar('A');
			else if ((cl_i == cl && ln_i == 1) || (cl_i == cl && ln_i == ln))
				ft_putchar('C');
			else if (cl_i > 1 && cl_i < cl && ln_i != 1 && ln_i != ln)
				ft_putchar(' ');
			else
				ft_putchar('B');
			cl_i++;
		}
		ln_i++;
		ft_putchar('\n');
	}
}
