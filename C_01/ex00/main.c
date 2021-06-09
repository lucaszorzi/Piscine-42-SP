#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	aga;

	aga = 9;
	ft_ft(&aga);
	printf("%d", aga);
}
