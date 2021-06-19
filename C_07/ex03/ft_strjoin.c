#include <stdio.h>
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// printf("%c\n", str[i]);
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		ptr++;
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	// *ptr = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concatenated;
	int		new_str_size;
	int		len_sep;
	int		i;
	char	*ptr_strs;

	i = 0;
	new_str_size = 0;
	ptr_strs = *strs;
	if (size <= 0)
		return (ptr_strs);
	len_sep += ft_strlen(sep);
	while (i < size)
	{ // Maybe we can kill the loop using new_str_size < size
		new_str_size += ft_strlen(ptr_strs);
		// printf("new_str_size = %i\n", new_str_size);
		i++;
		// printf("i = %i\n", i);
	}
	new_str_size += ((len_sep * (i - 1)) + 1);
	// printf("new_str_size out = %i\n", new_str_size);

	concatenated = malloc(new_str_size);
	i = 0;
	while (ptr_strs[i] != '\0') 
	{
		ft_strcat(concatenated, ptr_strs);
		i++;
		if (i < size)
			ft_strcat(concatenated, sep);
	}
	concatenated += '\0';
	return(concatenated);
}

// int main(){
// 	int		offset;
// 	char	**strs;
// 	// char	*res_str;

// 	strs = malloc(3 * sizeof(char *));
// 	if (strs == NULL)
// 		return (1);
// 	offset = 0;
// 	while (offset < 3)
// 	{
// 		strs[offset] = "abc";
// 		offset++;
// 	}
// 	// ft_strjoin(5, strs, " - ");
// 	printf("%s\n", ft_strjoin(3, strs, " - "));
// 	printf("%s\n", ft_strjoin(0, strs, " - "));
// 	return (0);
// }