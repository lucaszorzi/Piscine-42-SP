#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("a/div=%d b/mod=%d \n", a, b);
}
