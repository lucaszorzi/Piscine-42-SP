#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
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

void	ft_sort_argv(int argc, char **argv)
{
	int		i;
	char	*aux;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			aux = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = aux;
			i = -1;
		}
		i++;
	}
}

void	ft_print_argv(char **argv, int argc)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				write (1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ft_sort_argv(argc, argv);
		ft_print_argv(argv, argc);
	}
	return (0);
}
