#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int array[10] = {2147483647, 2147483647, 2147483647, 2147483647, 2147483647, 2147483647, 2147483647, 2147483647, 2147483647, 0};
	int	size = 9;

	ft_sort_int_tab(array, size);
	
	int	i = 0;
	while (i <= size)
	{
		printf("%d ", array[i]);
		i++;
	}
}
