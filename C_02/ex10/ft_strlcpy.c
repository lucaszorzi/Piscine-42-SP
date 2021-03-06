int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	src_length = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (src_length);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= src_length)
	{
		dest[i] = '\0';
		i++;
	}
	return (src_length);
}
