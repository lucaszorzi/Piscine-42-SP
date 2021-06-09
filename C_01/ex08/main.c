#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int array[10] = {8, 7, 7, 6, 5, 4, 3, 2, 1, 0};
	int	size = 9;

	ft_sort_int_tab(array, size);
	
	int	i = 0;
	while (i <= size)
	{
		printf("%d ", array[i]);
		i++;
	}
}
