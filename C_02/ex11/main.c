#include <stdio.h>
void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	str[18] = "Oi\nvoce esta bem?";
	
	ft_putstr_non_printable(str);
}
