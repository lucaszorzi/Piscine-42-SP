#include <unistd.h>

const char	g_base_hexa[17] = "0123456789abcdef";

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hexa(int nb)
{
	int	index;

	if (nb <= 0)
		nb += 256;
	index = nb / 16;
	ft_putchar(g_base_hexa[index]);
	index = nb % 16;
	ft_putchar(g_base_hexa[index]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_put_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
