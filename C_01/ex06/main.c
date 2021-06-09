#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "qwerty"; //um '\0' é automaticamente add no final
	int	length;

	length = ft_strlen(str);

	write(1, &length, 1);
	printf("%d \n", length);
}
