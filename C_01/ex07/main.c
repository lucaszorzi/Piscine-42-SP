#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	array[6] = {-2147483648, -2147483647, -2147483646, 2147483645, -2147483644, -2147483643};
	int	size = 5;

	ft_rev_int_tab(array, size);
	
	int	i = 0;
	while (i <= size)
	{
		printf("%d ", array[i]);
		i++;
	}
}
