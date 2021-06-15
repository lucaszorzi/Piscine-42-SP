#include <unistd.h>
#include <stdio.h>

const char	g_alpha_hex[17] = "0123456789abcdef";

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	index;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			index = str[i] / 16;
			write(1, &g_alpha_hex[index], 1);
			index = str[i] % 16;
			write(1, &g_alpha_hex[index], 1);
		}
		i++;
	}
}
