#include <unistd.h>

void	counter(char *numbers, int n)
{
	if ( n== 1 && numbers[0] == '9')
		return ;
	else if ( n > 1 && numbers [0] == '8' && numbers[1] == '9')
		return ;
	write(1, &numbers, n);
	numbers[]
	counter(numbers, n);
}

void	ft_print_combn(int n)
{
	char numbers[n];
	int i;

	if (n>0 && n<10)
	{
		i = 0;
		while (i <= n)
		{
			if(i == n)
				numbers[i] = '1';
			else
				numbers[i] = '0';
			i++;
		}
		counter(numbers, n);




		write(1, "\n", 1);
	}
}