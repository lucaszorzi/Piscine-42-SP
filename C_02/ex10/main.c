#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[7] = "qwerty";
	char dest[7];
	char src2[7] = "qwerty";
	char dest2[7];
	int size = 5;

	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	printf("\n\n%zu\n", strlcpy(dest2, src2, size));
	printf("src2: %s\n", src);
	printf("dest2: %s\n", dest);
}
