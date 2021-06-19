#include <stdlib.h>

char	*ft_strdup(char *s)
{
	char	*dolly;
	char	*ptr_dolly;

	dolly = malloc(sizeof(*dolly));
	ptr_s = dolly;
	while (*s)
	{
		*ptr_s = *s;
		s++;
		ptr_s++;
	}
	*ptr_s = '\0';
	return (dolly);
}