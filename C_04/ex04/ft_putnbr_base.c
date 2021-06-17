#include <unistd.h>
#include <stdio.h>

const char	g_base_dec[11] = "0123456789";
const char	g_base_hexa[17] = "0123456789ABCDEF";
const char	g_base_bin[3] = "01";
const char	g_base_octal[9] = "poneyvif";
int			g_index = 0;

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb += '0';
		write(1, &nb, 1);
	}
}

int	ft_strcmp(char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_put_octal(int nb)
{
	int	i;
	int	a;
	int	octal;

	if (nb < 0)
		write(1, "-", 1);
	if (nb < 0)
		nb *= -1;
	i = 1;
	octal = 0;
	if (nb <= 7)
		octal = nb;
	else
	{
		while (nb >= 8)
		{
			a = nb % 8;
			nb = nb / 8;
			octal += a * i;
			i *= 10;
		}
		nb = nb % 8;
		octal += nb * i;
	}
	ft_putnbr(octal);
}

void	ft_put_bin(int nb, int is_neg)
{
	int	vet_bin[50];
	int	i;

	i = 0;
	while (nb > 0)
	{
		vet_bin[i] = nb % 2;
		i++;
		nb = nb / 2;
	}
	i = i - 1;
	while (i >= 0)
	{
		if (is_neg == 1 && i != 0)
		{
			if (vet_bin[i] == 0)
				ft_putnbr(1);
			else
				ft_putnbr(0);
		}
		else
			ft_putnbr(vet_bin[i]);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_strcmp(base, g_base_dec) == 0)
		ft_putnbr(nbr);
	else if (ft_strcmp(base, g_base_hexa) == 0)
	{
		if (nbr <= 0)
			nbr += 256;
		g_index = nbr / 16;
		write(1, &g_base_hexa[g_index], 1);
		g_index = nbr % 16;
		write(1, &g_base_hexa[g_index], 1);
	}
	else if (ft_strcmp(base, g_base_octal) == 0)
		ft_put_octal(nbr);
	else if (ft_strcmp(base, g_base_bin) == 0)
	{
		if (nbr <= 0)
		{
			nbr *= -1;
			g_index = 1;
		}
		if (nbr == 0)
			write(1, "0", 1);
		else
			ft_put_bin(nbr, g_index);
	}
}
