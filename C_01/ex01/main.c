#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	number;
	int	*pointer1;
	int	**pointer2;
	int	***pointer3;
	int	****pointer4;
	int	*****pointer5;
	int	******pointer6;
	int	*******pointer7;
	int	********pointer8;

	number = 0;
	pointer1 = &number;
	pointer2 = &pointer1;
	pointer3 = &pointer2;
	pointer4 = &pointer3;
	pointer5 = &pointer4;
	pointer6 = &pointer5;
	pointer7 = &pointer6;
	pointer8 = &pointer7;

	ft_ultimate_ft(&pointer8);

	printf("%d", number);
}
