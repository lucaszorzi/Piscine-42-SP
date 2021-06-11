#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[7] = "qwerty";
	char	dest[7];
	unsigned int	n = 3;

	printf("%s\n", dest);
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);

	if (dest[6] == '\0')
		printf("Dest tem \\0 \n");
}