#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[7] = "qwerty";
	char	dest[7];

	printf("%s\n", dest);
	ft_strcpy(dest, src);
	printf("%s\n", dest);

	if (dest[6] == '\0')
		printf("Dest tem \\0 \n");
}
