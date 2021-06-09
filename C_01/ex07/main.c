#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	array[6] = {1, 2, 3, 4, 5, 6};
	int	size = 5;

	ft_rev_int_tab(array, size);
	
	int	i = 0;
	while (i <= size)
	{
		printf("%d ", array[i]);
		i++;
	}
}
